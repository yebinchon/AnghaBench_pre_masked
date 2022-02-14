
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rt_rq {int rt_throttled; scalar_t__ rt_time; } ;
struct rt_bandwidth {int rt_runtime; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rt_rq*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct rt_rq*) ;
 struct rt_bandwidth* FUNC_4 (struct rt_rq*) ;
 scalar_t__ FUNC_5 (struct rt_rq*) ;
 int FUNC_6 (struct rt_rq*) ;
 scalar_t__ FUNC_7 (struct rt_rq*) ;

__attribute__((used)) static int FUNC_8(struct rt_rq *VAR_1)
{
 u64 VAR_2 = FUNC_7(VAR_1);

 if (VAR_1->rt_throttled)
  return FUNC_3(VAR_1);

 if (VAR_2 >= FUNC_5(VAR_1))
  return 0;

 FUNC_0(VAR_1);
 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2 == VAR_0)
  return 0;

 if (VAR_1->rt_time > VAR_2) {
  struct rt_bandwidth *VAR_3 = FUNC_4(VAR_1);





  if (FUNC_1(VAR_3->rt_runtime)) {
   VAR_1->rt_throttled = 1;
   FUNC_2("sched: RT throttling activated\n");
  } else {





   VAR_1->rt_time = 0;
  }

  if (FUNC_3(VAR_1)) {
   FUNC_6(VAR_1);
   return 1;
  }
 }

 return 0;
}
