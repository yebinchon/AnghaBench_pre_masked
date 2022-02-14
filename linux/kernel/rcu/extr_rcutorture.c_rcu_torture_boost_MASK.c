
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;
struct rcu_boost_inflight {int rcu; int inflight; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_9 (int ,int ,struct sched_param*) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (char*) ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 () ;
 int FUNC_17 (char*) ;

__attribute__((used)) static int FUNC_18(void *VAR_11)
{
 unsigned long VAR_12;
 unsigned long VAR_13;
 unsigned long VAR_14;
 struct rcu_boost_inflight VAR_15 = { .inflight = 0 };
 struct sched_param VAR_16;

 FUNC_1("rcu_torture_boost started");


 VAR_16.sched_priority = 1;
 if (FUNC_9(VAR_4, VAR_1, &VAR_16) < 0) {
  FUNC_1("rcu_torture_boost RT prio failed!");
  VAR_6++;
 }

 FUNC_4(&VAR_15.rcu);

 do {

  bool VAR_17 = 0;


  while (!FUNC_5()) {
   if (FUNC_6(&VAR_2)) {
    VAR_7++;
    FUNC_7(&VAR_2);
    break;
   }
   FUNC_11(1);
  }
  if (FUNC_5())
   goto checkwait;


  VAR_14 = VAR_3;
  while (FUNC_0(VAR_5, VAR_14)) {
   FUNC_10(VAR_14 - VAR_5);
   FUNC_14("rcu_torture_boost");
   if (FUNC_16())
    goto checkwait;
  }


  VAR_13 = VAR_14 + VAR_9 * VAR_0;
  VAR_12 = VAR_5;
  while (FUNC_0(VAR_5, VAR_13)) {

   if (!FUNC_12(&VAR_15.inflight)) {

    FUNC_13(&VAR_15.inflight, 1);
    FUNC_2(&VAR_15.rcu, VAR_8);

    VAR_17 = VAR_17 ||
      FUNC_8(VAR_12,
         VAR_5);
    VAR_12 = VAR_5;
   }
   FUNC_14("rcu_torture_boost");
   if (FUNC_16())
    goto checkwait;
  }






  if (!VAR_17 && FUNC_12(&VAR_15.inflight))
   FUNC_8(VAR_12, VAR_5);
  while (VAR_14 == VAR_3 &&
         !FUNC_5()) {
   if (FUNC_6(&VAR_2)) {
    VAR_3 = VAR_5 +
        VAR_10 * VAR_0;
    FUNC_7(&VAR_2);
    break;
   }
   FUNC_11(1);
  }


checkwait: FUNC_14("rcu_torture_boost");
 } while (!FUNC_16());


 while (!FUNC_5() || FUNC_12(&VAR_15.inflight)) {
  FUNC_17("rcu_torture_boost");
  FUNC_11(1);
 }
 FUNC_3(&VAR_15.rcu);
 FUNC_15("rcu_torture_boost");
 return 0;
}
