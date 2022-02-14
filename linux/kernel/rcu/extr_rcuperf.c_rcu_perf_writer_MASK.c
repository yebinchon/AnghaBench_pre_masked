
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct sched_param {int sched_priority; } ;
struct rcu_head {int dummy; } ;
struct TYPE_2__ {int (* exp_completed ) () ;int (* get_gp_seq ) () ;int (* gp_barrier ) () ;int (* sync ) () ;int (* exp_sync ) () ;int (* async ) (struct rcu_head*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (long) ;
 TYPE_1__* VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (struct rcu_head*) ;
 struct rcu_head* FUNC_8 (int,int ) ;
 int FUNC_9 () ;
 void* FUNC_10 () ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 long VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int FUNC_11 (char*,int ,int ,long,int) ;
 int FUNC_12 (int ) ;
 int VAR_29 ;
 int FUNC_13 () ;
 int VAR_30 ;
 int FUNC_14 (int ,int ,struct sched_param*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ,int ) ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (struct rcu_head*,int ) ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 scalar_t__ VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 int * FUNC_28 (int *) ;
 int FUNC_29 (char*) ;
 int FUNC_30 () ;
 int FUNC_31 (scalar_t__) ;
 int FUNC_32 (int *) ;
 void*** VAR_36 ;
 scalar_t__ VAR_37 ;
 int* VAR_38 ;

__attribute__((used)) static int
FUNC_33(void *VAR_39)
{
 int VAR_40 = 0;
 int VAR_41;
 long VAR_42 = (long)VAR_39;
 struct rcu_head *VAR_43 = ((void*)0);
 struct sched_param VAR_44;
 bool VAR_45 = 0, VAR_46 = 0, VAR_47 = 0;
 u64 VAR_48;
 u64 *VAR_49;
 u64 *VAR_50 = VAR_36[VAR_42];

 FUNC_1("rcu_perf_writer task started");
 FUNC_2(!VAR_50);
 FUNC_17(VAR_18, FUNC_6(VAR_42 % VAR_26));
 VAR_44.sched_priority = 1;
 FUNC_14(VAR_18, VAR_12, &VAR_44);

 if (VAR_22)
  FUNC_16(VAR_22 * VAR_2);






 while (!VAR_21 && VAR_33 != VAR_14)
  FUNC_16(1);

 VAR_48 = FUNC_10();
 if (FUNC_4(&VAR_25) >= VAR_27) {
  VAR_35 = VAR_48;
  if (VAR_21) {
   VAR_16 =
    VAR_17->exp_completed() / 2;
  } else {
   VAR_16 = VAR_17->get_gp_seq();
  }
 }

 do {
  if (VAR_37)
   FUNC_31(VAR_37);
  VAR_49 = &VAR_50[VAR_40];
  *VAR_49 = FUNC_10();
  if (VAR_19) {
retry:
   if (!VAR_43)
    VAR_43 = FUNC_8(sizeof(*VAR_43), VAR_1);
   if (VAR_43 && FUNC_5(FUNC_28(&VAR_23)) < VAR_20) {
    VAR_30 = VAR_6;
    FUNC_3(FUNC_28(&VAR_23));
    VAR_17->async(VAR_43, VAR_29);
    VAR_43 = ((void*)0);
   } else if (!FUNC_9()) {
    VAR_30 = VAR_7;
    VAR_17->gp_barrier();
    goto retry;
   } else {
    FUNC_7(VAR_43);
   }
  } else if (VAR_21) {
   VAR_30 = VAR_8;
   VAR_17->exp_sync();
  } else {
   VAR_30 = VAR_11;
   VAR_17->sync();
  }
  VAR_30 = VAR_9;
  VAR_48 = FUNC_10();
  *VAR_49 = VAR_48 - *VAR_49;
  VAR_41 = VAR_40;
  if (!VAR_45 &&
      FUNC_5(&VAR_25) >= VAR_27)
   VAR_45 = 1;
  if (!VAR_46 && VAR_40 >= VAR_4) {
   VAR_46 = 1;
   VAR_44.sched_priority = 0;
   FUNC_14(VAR_18,
         VAR_13, &VAR_44);
   FUNC_11("%s%s rcu_perf_writer %ld has %d measurements\n",
     VAR_28, VAR_5, VAR_42, VAR_4);
   if (FUNC_4(&VAR_24) >=
       VAR_27) {
    FUNC_15(10);
    FUNC_12(VAR_0);
    FUNC_0("Test complete");
    VAR_34 = VAR_48;
    if (VAR_21) {
     VAR_15 =
      VAR_17->exp_completed() / 2;
    } else {
     VAR_15 =
      VAR_17->get_gp_seq();
    }
    if (VAR_31) {
     FUNC_18();
     FUNC_32(&VAR_32);
    }
   }
  }
  if (VAR_46 && !VAR_47 &&
      FUNC_5(&VAR_24) >= VAR_27)
   VAR_47 = 1;
  if (VAR_45 && !VAR_47 && VAR_40 < VAR_3 - 1)
   VAR_40++;
  FUNC_13();
 } while (!FUNC_30());
 if (VAR_19) {
  VAR_30 = VAR_7;
  VAR_17->gp_barrier();
 }
 VAR_30 = VAR_10;
 VAR_38[VAR_42] = VAR_41;
 FUNC_29("rcu_perf_writer");
 return 0;
}
