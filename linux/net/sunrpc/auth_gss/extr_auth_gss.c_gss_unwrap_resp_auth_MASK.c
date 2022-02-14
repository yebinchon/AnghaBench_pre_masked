
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cred {struct rpc_auth* cr_auth; } ;
struct rpc_auth {int au_verfsize; int au_ralign; int au_rslack; } ;



__attribute__((used)) static int
FUNC_0(struct rpc_cred *VAR_0)
{
 struct rpc_auth *VAR_1 = VAR_0->cr_auth;

 VAR_1->au_rslack = VAR_1->au_verfsize;
 VAR_1->au_ralign = VAR_1->au_verfsize;
 return 0;
}
