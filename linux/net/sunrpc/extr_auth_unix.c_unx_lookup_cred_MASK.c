
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_cred {unsigned long cr_flags; } ;
struct rpc_auth {int dummy; } ;
struct auth_cred {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct rpc_cred* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rpc_cred*,struct auth_cred*,struct rpc_auth*,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct rpc_cred *
FUNC_2(struct rpc_auth *VAR_4, struct auth_cred *VAR_5, int VAR_6)
{
 struct rpc_cred *VAR_7 = FUNC_0(VAR_3, VAR_0);

 FUNC_1(VAR_7, VAR_5, VAR_4, &VAR_2);
 VAR_7->cr_flags = 1UL << VAR_1;
 return VAR_7;
}
