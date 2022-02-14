
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct ns_common {int dummy; } ;
struct pid_namespace {struct ns_common ns; } ;


 int FUNC_0 (struct pid_namespace*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct pid_namespace* FUNC_3 (struct task_struct*) ;

__attribute__((used)) static struct ns_common *FUNC_4(struct task_struct *VAR_0)
{
 struct pid_namespace *VAR_1;

 FUNC_1();
 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1)
  FUNC_0(VAR_1);
 FUNC_2();

 return VAR_1 ? &VAR_1->ns : ((void*)0);
}
