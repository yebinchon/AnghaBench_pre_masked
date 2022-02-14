
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct upid {int nr; struct pid_namespace* ns; } ;
struct pid_namespace {int pid_allocated; int idr; int proc_work; int child_reaper; } ;
struct pid {int level; int rcu; struct upid* numbers; } ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct pid *VAR_2)
{

 int VAR_3;
 unsigned long VAR_4;

 FUNC_4(&VAR_1, VAR_4);
 for (VAR_3 = 0; VAR_3 <= VAR_2->level; VAR_3++) {
  struct upid *VAR_5 = VAR_2->numbers + VAR_3;
  struct pid_namespace *VAR_6 = VAR_5->ns;
  switch (--VAR_6->pid_allocated) {
  case 2:
  case 1:




   FUNC_6(VAR_6->child_reaper);
   break;
  case 128:

   FUNC_0(VAR_6->child_reaper);
   VAR_6->pid_allocated = 0;

  case 0:
   FUNC_3(&VAR_6->proc_work);
   break;
  }

  FUNC_2(&VAR_6->idr, VAR_5->nr);
 }
 FUNC_5(&VAR_1, VAR_4);

 FUNC_1(&VAR_2->rcu, VAR_0);
}
