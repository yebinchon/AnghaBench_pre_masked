
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ (* xdrproc_t ) (int *,int *) ;
typedef int wrapbuf ;
typedef scalar_t__ u_int ;
typedef scalar_t__ rpc_gss_svc_t ;
typedef scalar_t__ gss_qop_t ;
typedef int gss_ctx_id_t ;
struct TYPE_8__ {int length; int value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int databuf ;
typedef int * caddr_t ;
typedef int bool_t ;
typedef int XDR ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,TYPE_1__*,TYPE_1__*,int*,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,TYPE_1__*,TYPE_1__*,scalar_t__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,char**,scalar_t__*,int ) ;
 scalar_t__ FUNC_9 (int *,scalar_t__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int *,int ,int ,int ) ;

bool_t
FUNC_11(XDR *VAR_8, xdrproc_t VAR_9, caddr_t VAR_10,
   gss_ctx_id_t VAR_11, gss_qop_t VAR_12,
   rpc_gss_svc_t VAR_13, u_int VAR_14)
{
 XDR VAR_15;
 gss_buffer_desc VAR_16, VAR_17;
 OM_uint32 VAR_18, VAR_19;
 u_int VAR_20, VAR_21;
 int VAR_22;
 bool_t VAR_23;

 if (VAR_9 == (xdrproc_t)VAR_7 || VAR_10 == ((void*)0))
  return (VAR_5);

 FUNC_6(&VAR_16, 0, sizeof(VAR_16));
 FUNC_6(&VAR_17, 0, sizeof(VAR_17));

 if (VAR_13 == VAR_3) {

  if (!FUNC_8(VAR_8, (char **)&VAR_16.value, (u_int *)&VAR_16.length,
          VAR_2)) {
   FUNC_4("xdr decode databody_integ failed");
   return (VAR_0);
  }

  if (!FUNC_8(VAR_8, (char **)&VAR_17.value, (u_int *)&VAR_17.length,
          VAR_2)) {
   FUNC_1(&VAR_19, &VAR_16);
   FUNC_4("xdr decode checksum failed");
   return (VAR_0);
  }

  VAR_18 = FUNC_3(&VAR_19, VAR_11, &VAR_16,
       &VAR_17, &VAR_21);
  FUNC_1(&VAR_19, &VAR_17);

  if (VAR_18 != VAR_1 || VAR_21 != VAR_12) {
   FUNC_1(&VAR_19, &VAR_16);
   FUNC_5("gss_verify_mic", VAR_18, VAR_19);
   return (VAR_0);
  }
 }
 else if (VAR_13 == VAR_4) {

  if (!FUNC_8(VAR_8, (char **)&VAR_17.value, (u_int *)&VAR_17.length,
          VAR_2)) {
   FUNC_4("xdr decode databody_priv failed");
   return (VAR_0);
  }

  VAR_18 = FUNC_2(&VAR_19, VAR_11, &VAR_17, &VAR_16,
          &VAR_22, &VAR_21);

  FUNC_1(&VAR_19, &VAR_17);


  if (VAR_18 != VAR_1 || VAR_21 != VAR_12 ||
   VAR_22 != VAR_5) {
   FUNC_1(&VAR_19, &VAR_16);
   FUNC_5("gss_unwrap", VAR_18, VAR_19);
   return (VAR_0);
  }
 }

 FUNC_10(&VAR_15, VAR_16.value, VAR_16.length, VAR_6);
 VAR_23 = (FUNC_9(&VAR_15, &VAR_20) &&
      (*VAR_9)(&VAR_15, VAR_10));
 FUNC_0(&VAR_15);
 FUNC_1(&VAR_19, &VAR_16);


 if (VAR_23 == VAR_5 && VAR_20 != VAR_14) {
  FUNC_4("wrong sequence number in databody");
  return (VAR_0);
 }
 return (VAR_23);
}
