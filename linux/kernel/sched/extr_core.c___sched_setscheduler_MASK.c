
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct task_struct {int sched_reset_on_fork; int policy; scalar_t__ rt_priority; int prio; struct sched_class* sched_class; int cpus_ptr; scalar_t__ mm; } ;
struct sched_class {int dummy; } ;
struct sched_attr {int sched_policy; int sched_priority; int sched_flags; scalar_t__ sched_nice; } ;
struct rq_flags {int dummy; } ;
struct rq {TYPE_3__* rd; struct task_struct* stop; } ;
typedef int cpumask_t ;
struct TYPE_6__ {scalar_t__ rt_runtime; } ;
struct TYPE_9__ {TYPE_1__ rt_bandwidth; } ;
struct TYPE_7__ {scalar_t__ bw; } ;
struct TYPE_8__ {TYPE_2__ dl_bw; int * span; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct sched_attr const*) ;
 int FUNC_2 (struct rq*,struct task_struct*,struct sched_attr const*,int) ;
 int FUNC_3 (struct task_struct*,struct sched_attr const*) ;
 int FUNC_4 (struct rq*) ;
 int FUNC_5 (struct task_struct*,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rq*,struct task_struct*,struct sched_class const*,int) ;
 int FUNC_8 (struct task_struct*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct rq*,struct task_struct*,int) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 (struct task_struct*,struct sched_attr const*) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (struct task_struct*) ;
 int FUNC_17 (struct rq*,struct task_struct*,int) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int) ;
 scalar_t__ FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (struct rq*,struct task_struct*) ;
 scalar_t__ FUNC_24 () ;
 int FUNC_25 (struct task_struct*,int) ;
 int FUNC_26 (struct task_struct*) ;
 int FUNC_27 (int) ;
 scalar_t__ FUNC_28 (struct task_struct*,int,struct sched_attr const*) ;
 int FUNC_29 (struct task_struct*) ;
 int FUNC_30 (struct rq*,struct task_struct*) ;
 int FUNC_31 (struct rq*,struct task_struct*) ;
 TYPE_4__* FUNC_32 (struct task_struct*) ;
 int FUNC_33 (TYPE_4__*) ;
 scalar_t__ FUNC_34 (struct task_struct*) ;
 scalar_t__ FUNC_35 (struct task_struct*) ;
 int FUNC_36 (struct task_struct*) ;
 unsigned long FUNC_37 (struct task_struct*,int ) ;
 struct rq* FUNC_38 (struct task_struct*,struct rq_flags*) ;
 int FUNC_39 (struct rq*,struct task_struct*,struct rq_flags*) ;
 int FUNC_40 (struct task_struct*,struct sched_attr const*) ;
 scalar_t__ FUNC_41 (int) ;
 int FUNC_42 (struct rq*) ;
 int FUNC_43 (int) ;

__attribute__((used)) static int FUNC_44(struct task_struct *VAR_16,
    const struct sched_attr *VAR_17,
    bool VAR_18, bool VAR_19)
{
 int VAR_20 = FUNC_15(VAR_17->sched_policy) ? VAR_8 - 1 :
        VAR_9 - 1 - VAR_17->sched_priority;
 int VAR_21, VAR_22, VAR_23 = -1, VAR_24, VAR_25;
 int VAR_26, VAR_27 = VAR_17->sched_policy;
 const struct sched_class *VAR_28;
 struct rq_flags VAR_29;
 int VAR_30;
 int VAR_31 = VAR_3 | VAR_1 | VAR_2;
 struct rq *VAR_32;


 FUNC_0(VAR_19 && FUNC_20());
recheck:

 if (VAR_27 < 0) {
  VAR_30 = VAR_16->sched_reset_on_fork;
  VAR_27 = VAR_23 = VAR_16->policy;
 } else {
  VAR_30 = !!(VAR_17->sched_flags & VAR_13);

  if (!FUNC_43(VAR_27))
   return -VAR_5;
 }

 if (VAR_17->sched_flags & ~(VAR_12 | VAR_14))
  return -VAR_5;






 if ((VAR_16->mm && VAR_17->sched_priority > VAR_10-1) ||
     (!VAR_16->mm && VAR_17->sched_priority > VAR_9-1))
  return -VAR_5;
 if ((FUNC_15(VAR_27) && !FUNC_1(VAR_17)) ||
     (FUNC_27(VAR_27) != (VAR_17->sched_priority != 0)))
  return -VAR_5;




 if (VAR_18 && !FUNC_6(VAR_0)) {
  if (FUNC_18(VAR_27)) {
   if (VAR_17->sched_nice < FUNC_35(VAR_16) &&
       !FUNC_5(VAR_16, VAR_17->sched_nice))
    return -VAR_7;
  }

  if (FUNC_27(VAR_27)) {
   unsigned long VAR_33 =
     FUNC_37(VAR_16, VAR_11);


   if (VAR_27 != VAR_16->policy && !VAR_33)
    return -VAR_7;


   if (VAR_17->sched_priority > VAR_16->rt_priority &&
       VAR_17->sched_priority > VAR_33)
    return -VAR_7;
  }







  if (FUNC_15(VAR_27))
   return -VAR_7;





  if (FUNC_34(VAR_16) && !FUNC_19(VAR_27)) {
   if (!FUNC_5(VAR_16, FUNC_35(VAR_16)))
    return -VAR_7;
  }


  if (!FUNC_8(VAR_16))
   return -VAR_7;


  if (VAR_16->sched_reset_on_fork && !VAR_30)
   return -VAR_7;
 }

 if (VAR_18) {
  if (VAR_17->sched_flags & VAR_14)
   return -VAR_5;

  VAR_21 = FUNC_29(VAR_16);
  if (VAR_21)
   return VAR_21;
 }


 if (VAR_17->sched_flags & VAR_15) {
  VAR_21 = FUNC_40(VAR_16, VAR_17);
  if (VAR_21)
   return VAR_21;
 }

 if (VAR_19)
  FUNC_10();
 VAR_32 = FUNC_38(VAR_16, &VAR_29);
 FUNC_42(VAR_32);




 if (VAR_16 == VAR_32->stop) {
  VAR_21 = -VAR_5;
  goto unlock;
 }





 if (FUNC_41(VAR_27 == VAR_16->policy)) {
  if (FUNC_18(VAR_27) && VAR_17->sched_nice != FUNC_35(VAR_16))
   goto change;
  if (FUNC_27(VAR_27) && VAR_17->sched_priority != VAR_16->rt_priority)
   goto change;
  if (FUNC_15(VAR_27) && FUNC_14(VAR_16, VAR_17))
   goto change;
  if (VAR_17->sched_flags & VAR_15)
   goto change;

  VAR_16->sched_reset_on_fork = VAR_30;
  VAR_21 = 0;
  goto unlock;
 }
change:

 if (VAR_18) {
 }


 if (FUNC_41(VAR_23 != -1 && VAR_23 != VAR_16->policy)) {
  VAR_27 = VAR_23 = -1;
  FUNC_39(VAR_32, VAR_16, &VAR_29);
  if (VAR_19)
   FUNC_11();
  goto recheck;
 }






 if ((FUNC_15(VAR_27) || FUNC_16(VAR_16)) && FUNC_28(VAR_16, VAR_27, VAR_17)) {
  VAR_21 = -VAR_4;
  goto unlock;
 }

 VAR_16->sched_reset_on_fork = VAR_30;
 VAR_22 = VAR_16->prio;

 if (VAR_19) {







  VAR_26 = FUNC_25(VAR_16, VAR_20);
  if (VAR_26 == VAR_22)
   VAR_31 &= ~VAR_1;
 }

 VAR_24 = FUNC_36(VAR_16);
 VAR_25 = FUNC_31(VAR_32, VAR_16);
 if (VAR_24)
  FUNC_12(VAR_32, VAR_16, VAR_31);
 if (VAR_25)
  FUNC_23(VAR_32, VAR_16);

 VAR_28 = VAR_16->sched_class;

 FUNC_2(VAR_32, VAR_16, VAR_17, VAR_19);
 FUNC_3(VAR_16, VAR_17);

 if (VAR_24) {




  if (VAR_22 < VAR_16->prio)
   VAR_31 |= VAR_6;

  FUNC_17(VAR_32, VAR_16, VAR_31);
 }
 if (VAR_25)
  FUNC_30(VAR_32, VAR_16);

 FUNC_7(VAR_32, VAR_16, VAR_28, VAR_22);


 FUNC_21();
 FUNC_39(VAR_32, VAR_16, &VAR_29);

 if (VAR_19) {
  FUNC_11();
  FUNC_26(VAR_16);
 }


 FUNC_4(VAR_32);
 FUNC_22();

 return 0;

unlock:
 FUNC_39(VAR_32, VAR_16, &VAR_29);
 if (VAR_19)
  FUNC_11();
 return VAR_21;
}
