
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int u_int ;
typedef int rpc_gss_svc_t ;
typedef int gss_qop_t ;
typedef int gss_ctx_id_t ;
typedef int caddr_t ;
typedef int bool_t ;
struct TYPE_5__ {int x_op; } ;
typedef TYPE_1__ XDR ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ,int ,int ) ;

bool_t
FUNC_2(XDR *VAR_2, xdrproc_t VAR_3, caddr_t VAR_4,
   gss_ctx_id_t VAR_5, gss_qop_t VAR_6,
   rpc_gss_svc_t VAR_7, u_int VAR_8)
{
 switch (VAR_2->x_op) {

 case 129:
  return (FUNC_1(VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6, VAR_7, VAR_8));
 case 130:
  return (FUNC_0(VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6,VAR_7, VAR_8));
 case 128:
  return (VAR_1);
 }
 return (VAR_0);
}
