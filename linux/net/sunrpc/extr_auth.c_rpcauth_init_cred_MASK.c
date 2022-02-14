
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_credops {int dummy; } ;
struct rpc_cred {int cr_cred; int cr_expire; struct rpc_credops const* cr_ops; scalar_t__ cr_flags; struct rpc_auth* cr_auth; int cr_count; int cr_lru; int cr_hash; } ;
struct rpc_auth {int dummy; } ;
struct auth_cred {int cred; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int) ;

void
FUNC_4(struct rpc_cred *VAR_1, const struct auth_cred *VAR_2,
    struct rpc_auth *VAR_3, const struct rpc_credops *VAR_4)
{
 FUNC_0(&VAR_1->cr_hash);
 FUNC_1(&VAR_1->cr_lru);
 FUNC_3(&VAR_1->cr_count, 1);
 VAR_1->cr_auth = VAR_3;
 VAR_1->cr_flags = 0;
 VAR_1->cr_ops = VAR_4;
 VAR_1->cr_expire = VAR_0;
 VAR_1->cr_cred = FUNC_2(VAR_2->cred);
}
