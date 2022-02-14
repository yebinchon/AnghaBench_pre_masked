
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int prio; void* static_prio; } ;
struct rq_flags {int dummy; } ;
struct rq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 void* FUNC_0 (long) ;
 int FUNC_1 (struct rq*,struct task_struct*,int) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct rq*,struct task_struct*,int) ;
 int FUNC_4 (struct rq*,struct task_struct*) ;
 int FUNC_5 (struct rq*) ;
 int FUNC_6 (struct task_struct*,int) ;
 int FUNC_7 (struct rq*,struct task_struct*) ;
 int FUNC_8 (struct rq*,struct task_struct*) ;
 scalar_t__ FUNC_9 (struct task_struct*) ;
 scalar_t__ FUNC_10 (struct task_struct*) ;
 long FUNC_11 (struct task_struct*) ;
 int FUNC_12 (struct task_struct*) ;
 struct rq* FUNC_13 (struct task_struct*,struct rq_flags*) ;
 int FUNC_14 (struct rq*,struct task_struct*,struct rq_flags*) ;
 scalar_t__ FUNC_15 (struct rq*,struct task_struct*) ;
 int FUNC_16 (struct rq*) ;

void FUNC_17(struct task_struct *VAR_6, long VAR_7)
{
 bool VAR_8, VAR_9;
 int VAR_10, VAR_11;
 struct rq_flags VAR_12;
 struct rq *VAR_13;

 if (FUNC_11(VAR_6) == VAR_7 || VAR_7 < VAR_5 || VAR_7 > VAR_4)
  return;




 VAR_13 = FUNC_13(VAR_6, &VAR_12);
 FUNC_16(VAR_13);







 if (FUNC_9(VAR_6) || FUNC_10(VAR_6)) {
  VAR_6->static_prio = FUNC_0(VAR_7);
  goto out_unlock;
 }
 VAR_8 = FUNC_12(VAR_6);
 VAR_9 = FUNC_8(VAR_13, VAR_6);
 if (VAR_8)
  FUNC_1(VAR_13, VAR_6, VAR_1 | VAR_0);
 if (VAR_9)
  FUNC_4(VAR_13, VAR_6);

 VAR_6->static_prio = FUNC_0(VAR_7);
 FUNC_6(VAR_6, 1);
 VAR_10 = VAR_6->prio;
 VAR_6->prio = FUNC_2(VAR_6);
 VAR_11 = VAR_6->prio - VAR_10;

 if (VAR_8) {
  FUNC_3(VAR_13, VAR_6, VAR_3 | VAR_2);




  if (VAR_11 < 0 || (VAR_11 > 0 && FUNC_15(VAR_13, VAR_6)))
   FUNC_5(VAR_13);
 }
 if (VAR_9)
  FUNC_7(VAR_13, VAR_6);
out_unlock:
 FUNC_14(VAR_13, VAR_6, &VAR_12);
}
