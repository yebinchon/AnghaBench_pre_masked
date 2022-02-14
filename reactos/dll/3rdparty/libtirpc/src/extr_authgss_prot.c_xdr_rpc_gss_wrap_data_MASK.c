
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int (* xdrproc_t ) (int *,int ) ;
typedef int u_int ;
typedef scalar_t__ rpc_gss_svc_t ;
typedef int gss_qop_t ;
typedef int gss_ctx_id_t ;
struct TYPE_7__ {int length; int value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int caddr_t ;
typedef int bool_t ;
typedef int XDR ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (scalar_t__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (scalar_t__*,int ,int ,int ,TYPE_1__*,int*,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,scalar_t__,scalar_t__) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,char**,int *,int ) ;
 int FUNC_10 (int *,int *) ;

bool_t
FUNC_11(XDR *VAR_6, xdrproc_t VAR_7, caddr_t VAR_8,
        gss_ctx_id_t VAR_9, gss_qop_t VAR_10,
        rpc_gss_svc_t VAR_11, u_int VAR_12)
{
 gss_buffer_desc VAR_13, VAR_14;
 OM_uint32 VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;
 bool_t VAR_20;


 VAR_17 = FUNC_0(VAR_6);
 FUNC_2(VAR_6, VAR_17 + 4);


 if (!FUNC_10(VAR_6, &VAR_12) || !(*VAR_7)(VAR_6, VAR_8))
  return (VAR_0);
 VAR_18 = FUNC_0(VAR_6);


 VAR_13.length = VAR_18 - VAR_17 - 4;
 FUNC_2(VAR_6, VAR_17 + 4);
 VAR_13.value = FUNC_1(VAR_6, VAR_13.length);

 VAR_20 = VAR_0;

 if (VAR_11 == VAR_3) {

  FUNC_2(VAR_6, VAR_17);
  if (!FUNC_10(VAR_6, (u_int *)&VAR_13.length))
   return (VAR_0);


  VAR_15 = FUNC_3(&VAR_16, VAR_9, VAR_10,
           &VAR_13, &VAR_14);
  if (VAR_15 != VAR_1) {
   FUNC_6("gss_get_mic failed");
   return (VAR_0);
  }

  FUNC_2(VAR_6, VAR_18);
  VAR_20 = FUNC_9(VAR_6, (char **)&VAR_14.value,
         (u_int *)&VAR_14.length, VAR_2);
  FUNC_4(&VAR_16, &VAR_14);
 }
 else if (VAR_11 == VAR_4) {

  VAR_15 = FUNC_5(&VAR_16, VAR_9, VAR_5, VAR_10, &VAR_13,
        &VAR_19, &VAR_14);
  if (VAR_15 != VAR_1) {
   FUNC_7("gss_wrap", VAR_15, VAR_16);
   return (VAR_0);
  }

  FUNC_2(VAR_6, VAR_17);
  VAR_20 = FUNC_9(VAR_6, (char **)&VAR_14.value,
         (u_int *)&VAR_14.length, VAR_2);
  FUNC_4(&VAR_16, &VAR_14);
 }
 return (VAR_20);
}
