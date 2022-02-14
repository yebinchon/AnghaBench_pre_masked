
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int flags; int dl_bw; int inactive_timer; scalar_t__ dl_non_contending; } ;
struct task_struct {TYPE_1__ dl; } ;
struct rq {int dl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_6 (struct task_struct*) ;
 struct rq* FUNC_7 (struct task_struct*) ;

void FUNC_8(struct task_struct *VAR_1, u64 VAR_2)
{
 struct rq *VAR_3;

 FUNC_0(VAR_1->dl.flags & VAR_0);

 if (FUNC_6(VAR_1))
  return;

 VAR_3 = FUNC_7(VAR_1);
 if (VAR_1->dl.dl_non_contending) {
  FUNC_5(&VAR_1->dl, &VAR_3->dl);
  VAR_1->dl.dl_non_contending = 0;







  if (FUNC_3(&VAR_1->dl.inactive_timer) == 1)
   FUNC_4(VAR_1);
 }
 FUNC_2(VAR_1->dl.dl_bw, &VAR_3->dl);
 FUNC_1(VAR_2, &VAR_3->dl);
}
