
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cred {int cr_hash; int cr_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static bool
FUNC_2(struct rpc_cred *VAR_1)
{
 if (!FUNC_1(VAR_0, &VAR_1->cr_flags))
  return 0;
 FUNC_0(&VAR_1->cr_hash);
 return 1;
}
