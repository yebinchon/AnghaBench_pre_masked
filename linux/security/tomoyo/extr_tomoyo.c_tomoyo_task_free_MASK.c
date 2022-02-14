
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tomoyo_task {TYPE_2__* old_domain_info; TYPE_1__* domain_info; } ;
struct task_struct {int dummy; } ;
struct TYPE_4__ {int users; } ;
struct TYPE_3__ {int users; } ;


 int FUNC_0 (int *) ;
 struct tomoyo_task* FUNC_1 (struct task_struct*) ;

__attribute__((used)) static void FUNC_2(struct task_struct *VAR_0)
{
 struct tomoyo_task *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->domain_info) {
  FUNC_0(&VAR_1->domain_info->users);
  VAR_1->domain_info = ((void*)0);
 }
 if (VAR_1->old_domain_info) {
  FUNC_0(&VAR_1->old_domain_info->users);
  VAR_1->old_domain_info = ((void*)0);
 }
}
