
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int exec_start; } ;
struct task_struct {int on_cpu; int comm; int * sched_class; int pi_lock; int on_rq; int flags; TYPE_1__ se; int state; } ;
struct rq {int lock; int curr; struct task_struct* idle; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct task_struct*) ;
 int FUNC_1 (struct task_struct*,int) ;
 struct rq* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct task_struct*,int) ;
 int VAR_4 ;
 int FUNC_5 (struct task_struct*,int) ;
 int FUNC_6 (struct task_struct*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ,struct task_struct*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct task_struct*,int ) ;
 int FUNC_16 (int ,char*,char*,int) ;
 int FUNC_17 (struct task_struct*,int) ;

void FUNC_18(struct task_struct *VAR_5, int VAR_6)
{
 struct rq *VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8;

 FUNC_8(&VAR_5->pi_lock, VAR_8);
 FUNC_7(&VAR_7->lock);

 FUNC_0(0, VAR_5);
 VAR_5->state = VAR_3;
 VAR_5->se.exec_start = FUNC_14();
 VAR_5->flags |= VAR_1;

 FUNC_6(VAR_5);
 FUNC_12();
 FUNC_1(VAR_5, VAR_6);
 FUNC_13();

 VAR_7->idle = VAR_5;
 FUNC_11(VAR_7->curr, VAR_5);
 VAR_5->on_rq = VAR_2;



 FUNC_9(&VAR_7->lock);
 FUNC_10(&VAR_5->pi_lock, VAR_8);


 FUNC_5(VAR_5, VAR_6);




 VAR_5->sched_class = &VAR_4;
 FUNC_4(VAR_5, VAR_6);
 FUNC_17(VAR_5, VAR_6);



}
