
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct rpc_clnt {int dummy; } ;
struct rpc_auth_create_args {scalar_t__ target_name; int pseudoflavor; } ;
struct rpc_auth {int au_cslack; int au_rslack; int au_verfsize; int au_ralign; int au_count; int au_flags; int au_flavor; int * au_ops; } ;
struct gss_pipe {int dummy; } ;
struct gss_auth {scalar_t__ service; struct gss_auth* target_name; int net; TYPE_1__* mech; struct gss_pipe** gss_pipe; int kref; struct rpc_auth rpc_auth; struct rpc_clnt* client; int hash; } ;
typedef int rpc_authflavor_t ;
struct TYPE_5__ {char* gm_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gss_auth* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct gss_pipe*) ;
 int FUNC_3 (struct gss_pipe*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct gss_pipe*) ;
 struct gss_pipe* FUNC_8 (struct rpc_clnt*,char*,int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct gss_auth*) ;
 struct gss_auth* FUNC_13 (int,int ) ;
 int FUNC_14 (int *) ;
 struct gss_auth* FUNC_15 (scalar_t__,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (struct rpc_clnt*) ;
 int FUNC_20 (struct rpc_auth*) ;
 int FUNC_21 (struct rpc_auth*) ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 (int ) ;

__attribute__((used)) static struct gss_auth *
FUNC_24(const struct rpc_auth_create_args *VAR_10, struct rpc_clnt *VAR_11)
{
 rpc_authflavor_t VAR_12 = VAR_10->pseudoflavor;
 struct gss_auth *VAR_13;
 struct gss_pipe *VAR_14;
 struct rpc_auth * VAR_15;
 int VAR_16 = -VAR_1;

 if (!FUNC_23(VAR_6))
  return FUNC_0(VAR_16);
 if (!(VAR_13 = FUNC_13(sizeof(*VAR_13), VAR_2)))
  goto out_dec;
 FUNC_1(&VAR_13->hash);
 VAR_13->target_name = ((void*)0);
 if (VAR_10->target_name) {
  VAR_13->target_name = FUNC_15(VAR_10->target_name, VAR_2);
  if (VAR_13->target_name == ((void*)0))
   goto err_free;
 }
 VAR_13->client = VAR_11;
 VAR_13->net = FUNC_4(FUNC_19(VAR_11));
 VAR_16 = -VAR_0;
 VAR_13->mech = FUNC_5(VAR_12);
 if (!VAR_13->mech)
  goto err_put_net;
 VAR_13->service = FUNC_10(VAR_13->mech, VAR_12);
 if (VAR_13->service == 0)
  goto err_put_mech;
 if (!FUNC_11(VAR_13->net))
  goto err_put_mech;
 VAR_15 = &VAR_13->rpc_auth;
 VAR_15->au_cslack = VAR_3 >> 2;
 VAR_15->au_rslack = VAR_4 >> 2;
 VAR_15->au_verfsize = VAR_4 >> 2;
 VAR_15->au_ralign = VAR_4 >> 2;
 VAR_15->au_flags = 0;
 VAR_15->au_ops = &VAR_7;
 VAR_15->au_flavor = VAR_12;
 if (FUNC_9(VAR_13->mech, VAR_12))
  VAR_15->au_flags |= VAR_5;
 FUNC_18(&VAR_15->au_count, 1);
 FUNC_14(&VAR_13->kref);

 VAR_16 = FUNC_21(VAR_15);
 if (VAR_16)
  goto err_put_mech;






 VAR_14 = FUNC_8(VAR_11, "gssd", &VAR_9);
 if (FUNC_2(VAR_14)) {
  VAR_16 = FUNC_3(VAR_14);
  goto err_destroy_credcache;
 }
 VAR_13->gss_pipe[1] = VAR_14;

 VAR_14 = FUNC_8(VAR_11, VAR_13->mech->gm_name,
   &VAR_8);
 if (FUNC_2(VAR_14)) {
  VAR_16 = FUNC_3(VAR_14);
  goto err_destroy_pipe_1;
 }
 VAR_13->gss_pipe[0] = VAR_14;

 return VAR_13;
err_destroy_pipe_1:
 FUNC_7(VAR_13->gss_pipe[1]);
err_destroy_credcache:
 FUNC_20(VAR_15);
err_put_mech:
 FUNC_6(VAR_13->mech);
err_put_net:
 FUNC_17(VAR_13->net);
err_free:
 FUNC_12(VAR_13->target_name);
 FUNC_12(VAR_13);
out_dec:
 FUNC_16(VAR_6);
 FUNC_22(VAR_12, VAR_16);
 return FUNC_0(VAR_16);
}
