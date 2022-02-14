
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tomoyo_task {int * old_domain_info; TYPE_1__* domain_info; } ;
struct task_struct {int dummy; } ;
struct TYPE_2__ {int users; } ;


 int FUNC_0 (int *) ;
 struct task_struct* VAR_0 ;
 struct tomoyo_task* FUNC_1 (struct task_struct*) ;

__attribute__((used)) static int FUNC_2(struct task_struct *VAR_1,
        unsigned long VAR_2)
{
 struct tomoyo_task *VAR_3 = FUNC_1(VAR_0);
 struct tomoyo_task *VAR_4 = FUNC_1(VAR_1);

 VAR_4->domain_info = VAR_3->domain_info;
 FUNC_0(&VAR_4->domain_info->users);
 VAR_4->old_domain_info = ((void*)0);
 return 0;
}
