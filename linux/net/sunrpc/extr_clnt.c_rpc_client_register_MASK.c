
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct rpc_clnt {int dummy; } ;
struct rpc_auth_create_args {char const* target_name; int pseudoflavor; } ;
struct rpc_auth {int dummy; } ;
struct net {int dummy; } ;
typedef int rpc_authflavor_t ;


 scalar_t__ FUNC_0 (struct rpc_auth*) ;
 int FUNC_1 (struct rpc_auth*) ;
 int FUNC_2 (struct rpc_clnt*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct rpc_clnt*) ;
 int FUNC_5 (struct rpc_clnt*) ;
 struct super_block* FUNC_6 (struct net*) ;
 struct net* FUNC_7 (struct rpc_clnt*) ;
 int FUNC_8 (struct net*) ;
 int FUNC_9 (struct rpc_clnt*) ;
 int FUNC_10 (struct super_block*,struct rpc_clnt*) ;
 int FUNC_11 (struct rpc_clnt*) ;
 struct rpc_auth* FUNC_12 (struct rpc_auth_create_args*,struct rpc_clnt*) ;

__attribute__((used)) static int FUNC_13(struct rpc_clnt *VAR_0,
          rpc_authflavor_t VAR_1,
          const char *VAR_2)
{
 struct rpc_auth_create_args VAR_3 = {
  .pseudoflavor = VAR_1,
  .target_name = VAR_2,
 };
 struct rpc_auth *VAR_4;
 struct net *VAR_5 = FUNC_7(VAR_0);
 struct super_block *VAR_6;
 int VAR_7;

 FUNC_4(VAR_0);

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6) {
  VAR_7 = FUNC_10(VAR_6, VAR_0);
  if (VAR_7)
   goto out;
 }

 FUNC_9(VAR_0);
 if (VAR_6)
  FUNC_8(VAR_5);

 VAR_4 = FUNC_12(&VAR_3, VAR_0);
 if (FUNC_0(VAR_4)) {
  FUNC_3("RPC:       Couldn't create auth handle (flavor %u)\n",
    VAR_1);
  VAR_7 = FUNC_1(VAR_4);
  goto err_auth;
 }
 return 0;
err_auth:
 VAR_6 = FUNC_6(VAR_5);
 FUNC_11(VAR_0);
 FUNC_2(VAR_0);
out:
 if (VAR_6)
  FUNC_8(VAR_5);
 FUNC_5(VAR_0);
 return VAR_7;
}
