
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_8__ {int length; int value; } ;
struct TYPE_7__ {int length; int value; } ;
struct rpc_sspi_init_res {TYPE_2__ gr_token; int gr_win; int gr_minor; int gr_major; TYPE_1__ gr_ctx; } ;
typedef int bool_t ;
struct TYPE_9__ {scalar_t__ x_op; } ;
typedef TYPE_3__ XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,char*,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,char**,int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *) ;

bool_t
FUNC_3(XDR *VAR_3, struct rpc_sspi_init_res *VAR_4)
{
 bool_t VAR_5;

 VAR_5 = (FUNC_1(VAR_3, (char **)&VAR_4->gr_ctx.value,
                (u_int *)&VAR_4->gr_ctx.length, VAR_0) &&
                FUNC_2(VAR_3, &VAR_4->gr_major) &&
                FUNC_2(VAR_3, &VAR_4->gr_minor) &&
                FUNC_2(VAR_3, &VAR_4->gr_win) &&
                FUNC_1(VAR_3, (char **)&VAR_4->gr_token.value,
                (u_int *)&VAR_4->gr_token.length, (u_int)(-1)));

 FUNC_0("xdr_rpc_gss_init_res %s %s "
                "(ctx %p:%d, maj %d, min %d, win %d, token %p:%d)",
                (VAR_3->x_op == VAR_2) ? "encode" : "decode",
                (VAR_5 == VAR_1) ? "success" : "failure",
                VAR_4->gr_ctx.value, VAR_4->gr_ctx.length,
                VAR_4->gr_major, VAR_4->gr_minor, VAR_4->gr_win,
                VAR_4->gr_token.value, VAR_4->gr_token.length);

 return (VAR_5);
}
