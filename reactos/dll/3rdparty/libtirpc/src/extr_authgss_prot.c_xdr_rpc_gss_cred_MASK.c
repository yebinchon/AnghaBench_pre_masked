
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_7__ {int length; int value; } ;
struct rpc_gss_cred {TYPE_1__ gc_ctx; int gc_svc; int gc_seq; int gc_proc; int gc_v; } ;
typedef int enum_t ;
typedef int bool_t ;
struct TYPE_8__ {scalar_t__ x_op; } ;
typedef TYPE_2__ XDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,char*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char**,int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *) ;

bool_t
FUNC_4(XDR *VAR_3, struct rpc_gss_cred *VAR_4)
{
 bool_t VAR_5;

 VAR_5 = (FUNC_3(VAR_3, &VAR_4->gc_v) &&
      FUNC_2(VAR_3, (enum_t *)&VAR_4->gc_proc) &&
      FUNC_3(VAR_3, &VAR_4->gc_seq) &&
      FUNC_2(VAR_3, (enum_t *)&VAR_4->gc_svc) &&
      FUNC_1(VAR_3, (char **)&VAR_4->gc_ctx.value,
         (u_int *)&VAR_4->gc_ctx.length, VAR_0));

 FUNC_0("xdr_rpc_gss_cred: %s %s "
    "(v %d, proc %d, seq %d, svc %d, ctx %p:%d)",
    (VAR_3->x_op == VAR_2) ? "encode" : "decode",
    (VAR_5 == VAR_1) ? "success" : "failure",
    VAR_4->gc_v, VAR_4->gc_proc, VAR_4->gc_seq, VAR_4->gc_svc,
    VAR_4->gc_ctx.value, VAR_4->gc_ctx.length);

 return (VAR_5);
}
