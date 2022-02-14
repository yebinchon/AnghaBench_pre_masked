
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_cred {TYPE_2__* cr_cred; } ;
struct auth_cred {TYPE_2__* cred; } ;
struct TYPE_4__ {TYPE_1__* group_info; int fsgid; int fsuid; } ;
struct TYPE_3__ {unsigned int ngroups; int * gid; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct auth_cred *VAR_1, struct rpc_cred *VAR_2, int VAR_3)
{
 unsigned int VAR_4 = 0;
 unsigned int VAR_5;

 if (VAR_2->cr_cred == VAR_1->cred)
  return 1;

 if (!FUNC_1(VAR_2->cr_cred->fsuid, VAR_1->cred->fsuid) || !FUNC_0(VAR_2->cr_cred->fsgid, VAR_1->cred->fsgid))
  return 0;

 if (VAR_1->cred->group_info != ((void*)0))
  VAR_4 = VAR_1->cred->group_info->ngroups;
 if (VAR_4 > VAR_0)
  VAR_4 = VAR_0;
 if (VAR_2->cr_cred->group_info == ((void*)0))
  return VAR_4 == 0;
 if (VAR_4 != VAR_2->cr_cred->group_info->ngroups)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_4 ; VAR_5++)
  if (!FUNC_0(VAR_2->cr_cred->group_info->gid[VAR_5], VAR_1->cred->group_info->gid[VAR_5]))
   return 0;
 return 1;
}
