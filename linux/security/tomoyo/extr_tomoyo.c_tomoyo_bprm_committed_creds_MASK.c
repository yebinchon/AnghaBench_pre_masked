
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tomoyo_task {TYPE_1__* old_domain_info; } ;
struct linux_binprm {int dummy; } ;
struct TYPE_2__ {int users; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct tomoyo_task* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct linux_binprm *VAR_1)
{

 struct tomoyo_task *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_2->old_domain_info->users);
 VAR_2->old_domain_info = ((void*)0);
}
