
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ns_common {int dummy; } ;
struct user_namespace {struct ns_common ns; } ;
struct task_struct {int dummy; } ;
struct TYPE_2__ {int user_ns; } ;


 TYPE_1__* FUNC_0 (struct task_struct*) ;
 struct user_namespace* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static struct ns_common *FUNC_4(struct task_struct *VAR_0)
{
 struct user_namespace *VAR_1;

 FUNC_2();
 VAR_1 = FUNC_1(FUNC_0(VAR_0)->user_ns);
 FUNC_3();

 return VAR_1 ? &VAR_1->ns : ((void*)0);
}
