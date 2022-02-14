
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tomoyo_task {struct tomoyo_domain_info* domain_info; TYPE_1__* old_domain_info; } ;
struct tomoyo_domain_info {int dummy; } ;
struct TYPE_5__ {int in_execve; } ;
struct TYPE_4__ {int users; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* VAR_0 ;
 struct tomoyo_task* FUNC_1 (TYPE_2__*) ;

struct tomoyo_domain_info *FUNC_2(void)
{
 struct tomoyo_task *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->old_domain_info && !VAR_0->in_execve) {
  FUNC_0(&VAR_1->old_domain_info->users);
  VAR_1->old_domain_info = ((void*)0);
 }
 return VAR_1->domain_info;
}
