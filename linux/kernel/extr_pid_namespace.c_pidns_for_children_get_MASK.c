
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {TYPE_1__* nsproxy; } ;
struct ns_common {int dummy; } ;
struct pid_namespace {struct ns_common ns; int child_reaper; } ;
struct TYPE_2__ {struct pid_namespace* pid_ns_for_children; } ;


 int FUNC_0 (struct pid_namespace*) ;
 int FUNC_1 (struct pid_namespace*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (struct task_struct*) ;
 int VAR_0 ;

__attribute__((used)) static struct ns_common *FUNC_6(struct task_struct *VAR_1)
{
 struct pid_namespace *VAR_2 = ((void*)0);

 FUNC_4(VAR_1);
 if (VAR_1->nsproxy) {
  VAR_2 = VAR_1->nsproxy->pid_ns_for_children;
  FUNC_0(VAR_2);
 }
 FUNC_5(VAR_1);

 if (VAR_2) {
  FUNC_2(&VAR_0);
  if (!VAR_2->child_reaper) {
   FUNC_1(VAR_2);
   VAR_2 = ((void*)0);
  }
  FUNC_3(&VAR_0);
 }

 return VAR_2 ? &VAR_2->ns : ((void*)0);
}
