
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tomoyo_task {TYPE_1__* old_domain_info; TYPE_1__* domain_info; } ;
struct cred {int dummy; } ;
typedef int gfp_t ;
struct TYPE_5__ {int in_execve; } ;
struct TYPE_4__ {int users; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* VAR_0 ;
 struct tomoyo_task* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct cred *VAR_1, const struct cred *VAR_2,
          gfp_t VAR_3)
{

 struct tomoyo_task *VAR_4 = FUNC_1(VAR_0);

 if (VAR_4->old_domain_info && !VAR_0->in_execve) {
  FUNC_0(&VAR_4->domain_info->users);
  VAR_4->domain_info = VAR_4->old_domain_info;
  VAR_4->old_domain_info = ((void*)0);
 }
 return 0;
}
