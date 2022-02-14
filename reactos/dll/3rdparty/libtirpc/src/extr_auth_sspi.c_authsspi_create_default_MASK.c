
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char* uint32_t ;
struct rpc_sspi_sec {int svc; int cred; int expiry; } ;
typedef scalar_t__ sspi_name_t ;
struct TYPE_7__ {char* value; int length; } ;
typedef TYPE_2__ sspi_buffer_desc ;
typedef int gss_OID ;
struct TYPE_6__ {scalar_t__ re_errno; } ;
struct TYPE_8__ {TYPE_1__ cf_error; int cf_stat; } ;
typedef int CLIENT ;
typedef int AUTH ;


 char* FUNC_0 (int *,unsigned char*,int ,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_2 (int *,scalar_t__,struct rpc_sspi_sec*) ;
 struct rpc_sspi_sec* FUNC_3 (int,int) ;
 int FUNC_4 (struct rpc_sspi_sec*) ;
 char* FUNC_5 (int *,TYPE_2__*,int ,scalar_t__*) ;
 int FUNC_6 (int *,scalar_t__*) ;
 int FUNC_7 (char*,char*) ;
 int VAR_6 ;
 TYPE_4__ VAR_7 ;
 char* FUNC_8 (TYPE_2__*,scalar_t__*) ;
 scalar_t__ FUNC_9 (char*) ;

AUTH *
FUNC_10(CLIENT *VAR_8, char *VAR_9, int VAR_10)
{
 AUTH *VAR_11 = ((void*)0);
 uint32_t VAR_12 = 0;
 sspi_buffer_desc VAR_13;
    sspi_name_t VAR_14 = VAR_5;
    unsigned char VAR_15[] = "Kerberos";
    struct rpc_sspi_sec *VAR_16;

 FUNC_7("in authgss_create_default() for %s", VAR_9);

 VAR_13.value = VAR_9;
 VAR_13.length = (int)FUNC_9(VAR_9);





    VAR_12 = FUNC_8(&VAR_13, &VAR_14);

 if (VAR_12 != VAR_4) {
  FUNC_7("authgss_create_default: sspi_import_name failed with %x", VAR_12);
  return (((void*)0));
 }
    VAR_16 = FUNC_3(1, sizeof(struct rpc_sspi_sec));
    if (VAR_16 == ((void*)0))
        goto out_err;
    VAR_16->svc = VAR_10;

    VAR_12 = FUNC_0(((void*)0), VAR_15, VAR_3,
        ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_16->cred, &VAR_16->expiry);
    if (VAR_12 != VAR_4) {
        FUNC_7("authgss_create_default: AcquireCredentialsHandleA failed with %x", VAR_12);
        FUNC_4(VAR_16);
        goto out;
    }

 VAR_11 = FUNC_2(VAR_8, VAR_14, VAR_16);
    if (VAR_11 == ((void*)0))
        goto out_free_sec;

out:
 if (VAR_14 != VAR_5) {



        FUNC_4(VAR_14);

 }

 return (VAR_11);
out_free_sec:
    if (VAR_7.cf_error.re_errno == VAR_0) {
        FUNC_1(&VAR_16->cred);
        FUNC_4(VAR_16);
    }
out_err:
    VAR_7.cf_stat = VAR_2;
 VAR_7.cf_error.re_errno = VAR_0;
    goto out;
}
