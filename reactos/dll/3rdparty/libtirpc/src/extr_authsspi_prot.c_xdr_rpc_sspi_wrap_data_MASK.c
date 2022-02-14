
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int (* xdrproc_t ) (int *,int ) ;
typedef scalar_t__ uint32_t ;
typedef int u_int ;
typedef int sspi_qop_t ;
struct TYPE_12__ {int length; int value; } ;
typedef TYPE_1__ sspi_buffer_desc ;
typedef scalar_t__ rpc_sspi_svc_t ;
typedef int caddr_t ;
typedef int bool_t ;
typedef int XDR ;
typedef int PCtxtHandle ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int ,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int ,TYPE_1__*,int*,TYPE_1__*) ;
 int FUNC_6 (char*,...) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ,int ,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,int ,TYPE_1__*,TYPE_1__*,int*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,char**,int *,int ) ;
 int FUNC_12 (int *,int *) ;

bool_t
FUNC_13(XDR *VAR_6, xdrproc_t VAR_7, caddr_t VAR_8,
        PCtxtHandle VAR_9, sspi_qop_t VAR_10,
        rpc_sspi_svc_t VAR_11, u_int VAR_12)
{
 sspi_buffer_desc VAR_13, VAR_14;
 uint32_t VAR_15;
 int VAR_16, VAR_17, VAR_18;
 bool_t VAR_19;

    FUNC_6("in xdr_rpc_sspi_wrap_data()");


 VAR_16 = FUNC_0(VAR_6);
 FUNC_2(VAR_6, VAR_16 + 4);


 if (!FUNC_12(VAR_6, &VAR_12) || !(*VAR_7)(VAR_6, VAR_8))
  return (VAR_0);
 VAR_17 = FUNC_0(VAR_6);


 VAR_13.length = VAR_17 - VAR_16 - 4;
 FUNC_2(VAR_6, VAR_16 + 4);
 VAR_13.value = FUNC_1(VAR_6, VAR_13.length);

 VAR_19 = VAR_0;

 if (VAR_11 == VAR_1) {

  FUNC_2(VAR_6, VAR_16);
  if (!FUNC_12(VAR_6, (u_int *)&VAR_13.length))
   return (VAR_0);






        VAR_15 = FUNC_7(VAR_9, 0, VAR_12, &VAR_13, &VAR_14);

  if (VAR_15 != VAR_3) {
   FUNC_6("xdr_rpc_sspi_wrap_data: sspi_get_mic failed with %x", VAR_15);
   return (VAR_0);
  }

  FUNC_2(VAR_6, VAR_17);
  VAR_19 = FUNC_11(VAR_6, (char **)&VAR_14.value,
                            (u_int *)&VAR_14.length, (u_int)-1);



        FUNC_8(&VAR_14);

 }
 else if (VAR_11 == VAR_2) {





        VAR_15 = FUNC_9(VAR_9, 0, &VAR_13, &VAR_14, &VAR_18);

  if (VAR_15 != VAR_3) {
   FUNC_6("xdr_rpc_sspi_wrap_data: sspi_wrap failed with %x", VAR_15);
   return (VAR_0);
  }

  FUNC_2(VAR_6, VAR_16);
  VAR_19 = FUNC_11(VAR_6, (char **)&VAR_14.value,
                            (u_int *)&VAR_14.length, (u_int)-1);



        FUNC_8(&VAR_14);

 }
 return (VAR_19);
}
