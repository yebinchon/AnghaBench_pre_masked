
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cred {int cr_lru; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct rpc_cred *VAR_2)
{
 if (!FUNC_1(&VAR_2->cr_lru))
  return;
 VAR_1++;
 FUNC_0(&VAR_2->cr_lru, &VAR_0);
}
