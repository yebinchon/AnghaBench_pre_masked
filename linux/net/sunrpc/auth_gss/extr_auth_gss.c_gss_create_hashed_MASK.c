
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_clnt {int dummy; } ;
struct rpc_auth_create_args {int dummy; } ;
struct gss_auth {int rpc_auth; } ;


 scalar_t__ FUNC_0 (struct gss_auth*) ;
 struct gss_auth* FUNC_1 (struct rpc_auth_create_args const*,struct rpc_clnt*,struct gss_auth*) ;
 struct gss_auth* FUNC_2 (struct rpc_auth_create_args const*,struct rpc_clnt*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct gss_auth *
FUNC_4(const struct rpc_auth_create_args *VAR_0,
    struct rpc_clnt *VAR_1)
{
 struct gss_auth *VAR_2;
 struct gss_auth *VAR_3;

 VAR_2 = FUNC_1(VAR_0, VAR_1, ((void*)0));
 if (VAR_2 != ((void*)0))
  goto out;
 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_0(VAR_3))
  return VAR_3;
 VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_3);
 if (VAR_2 != VAR_3)
  FUNC_3(&VAR_3->rpc_auth);
out:
 return VAR_2;
}
