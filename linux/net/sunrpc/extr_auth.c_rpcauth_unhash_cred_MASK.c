
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_cred {TYPE_2__* cr_auth; int cr_flags; } ;
typedef int spinlock_t ;
struct TYPE_4__ {TYPE_1__* au_credcache; } ;
struct TYPE_3__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_cred*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static bool
FUNC_4(struct rpc_cred *VAR_1)
{
 spinlock_t *VAR_2;
 bool VAR_3;

 if (!FUNC_3(VAR_0, &VAR_1->cr_flags))
  return 0;
 VAR_2 = &VAR_1->cr_auth->au_credcache->lock;
 FUNC_1(VAR_2);
 VAR_3 = FUNC_0(VAR_1);
 FUNC_2(VAR_2);
 return VAR_3;
}
