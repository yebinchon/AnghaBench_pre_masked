
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct shuffle_task {int st_l; struct task_struct* st_t; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct shuffle_task* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_5(struct task_struct *VAR_3)
{
 struct shuffle_task *VAR_4;

 if (FUNC_0(VAR_3 == ((void*)0)))
  return;
 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (FUNC_0(VAR_4 == ((void*)0)))
  return;
 VAR_4->st_t = VAR_3;
 FUNC_3(&VAR_2);
 FUNC_2(&VAR_4->st_l, &VAR_1);
 FUNC_4(&VAR_2);
}
