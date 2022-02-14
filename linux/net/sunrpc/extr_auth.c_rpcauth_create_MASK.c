
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpc_clnt {struct rpc_auth* cl_auth; } ;
struct rpc_authops {struct rpc_auth* (* create ) (struct rpc_auth_create_args const*,struct rpc_clnt*) ;} ;
struct rpc_auth_create_args {int pseudoflavor; } ;
struct rpc_auth {int dummy; } ;


 int VAR_0 ;
 struct rpc_auth* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct rpc_auth*) ;
 int FUNC_2 (int ) ;
 struct rpc_authops* FUNC_3 (int ) ;
 int FUNC_4 (struct rpc_authops const*) ;
 int FUNC_5 (struct rpc_auth*) ;
 struct rpc_auth* FUNC_6 (struct rpc_auth_create_args const*,struct rpc_clnt*) ;

struct rpc_auth *
FUNC_7(const struct rpc_auth_create_args *VAR_1, struct rpc_clnt *VAR_2)
{
 struct rpc_auth *VAR_3 = FUNC_0(-VAR_0);
 const struct rpc_authops *VAR_4;
 u32 VAR_5 = FUNC_2(VAR_1->pseudoflavor);

 VAR_4 = FUNC_3(VAR_5);
 if (VAR_4 == ((void*)0))
  goto out;

 VAR_3 = VAR_4->create(VAR_1, VAR_2);

 FUNC_4(VAR_4);
 if (FUNC_1(VAR_3))
  return VAR_3;
 if (VAR_2->cl_auth)
  FUNC_5(VAR_2->cl_auth);
 VAR_2->cl_auth = VAR_3;

out:
 return VAR_3;
}
