
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int xdrproc_t ;
typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct TYPE_22__ {scalar_t__ length; unsigned char* value; } ;
struct rpc_sspi_init_res {scalar_t__ gr_major; TYPE_3__ gr_token; int gr_win; TYPE_3__ gr_ctx; } ;
struct TYPE_21__ {scalar_t__ gc_proc; scalar_t__ gc_seq; TYPE_3__ gc_ctx; } ;
struct TYPE_25__ {scalar_t__ length; int * value; } ;
struct rpc_sspi_data {TYPE_2__ gc; int win; void* inprogress; void* established; TYPE_7__ gc_wire_verf; int ctx; int clnt; int expiry; int name; TYPE_10__* sec; } ;
typedef TYPE_3__ sspi_buffer_desc ;
typedef int seq ;
typedef int gr ;
typedef int caddr_t ;
typedef void* bool_t ;
struct TYPE_26__ {int cf_stat; } ;
struct TYPE_24__ {scalar_t__ cbBuffer; unsigned char* pvBuffer; void* BufferType; } ;
struct TYPE_23__ {int cBuffers; void* ulVersion; TYPE_5__* pBuffers; } ;
struct TYPE_20__ {int req_flags; int mech; int cred; } ;
struct TYPE_19__ {scalar_t__ svc; int cred; } ;
typedef TYPE_4__ SecBufferDesc ;
typedef TYPE_5__ SecBuffer ;
typedef int AUTH ;


 struct rpc_sspi_data* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 void* VAR_1 ;
 int FUNC_2 (unsigned char*) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_3 (int *,int *,int ,unsigned long,int ,int ,TYPE_4__*,int ,int *,TYPE_4__*,scalar_t__*,int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 TYPE_3__* VAR_19 ;
 int FUNC_4 (int *) ;
 void* VAR_20 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_21 ;
 scalar_t__ FUNC_7 (int ,int ,int ,TYPE_3__*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int ,int *,int ,int ,int ,int ,int *,TYPE_3__*,int *,TYPE_3__*,scalar_t__*,int *) ;
 int FUNC_9 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_10 (int *,int ,TYPE_3__*,int *,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (int ,char*,unsigned char*,scalar_t__,int ) ;
 int FUNC_14 (int *,scalar_t__) ;
 int FUNC_15 (struct rpc_sspi_init_res*,int ,int) ;
 int VAR_22 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_10__*) ;
 TYPE_9__ VAR_23 ;
 int FUNC_18 (TYPE_3__*) ;
 scalar_t__ FUNC_19 (int *,int ,TYPE_3__*,TYPE_7__*,int *) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;

__attribute__((used)) static bool_t
FUNC_20(AUTH *VAR_26, void *VAR_27)
{
 struct rpc_sspi_data *VAR_28;
 struct rpc_sspi_init_res VAR_29;
    sspi_buffer_desc *VAR_30, VAR_31;
 uint32_t VAR_32, VAR_33, VAR_34, VAR_35;
    unsigned long VAR_36 =
        VAR_5|VAR_4|VAR_2;
    SecBufferDesc VAR_37, VAR_38;
    SecBuffer VAR_39[1], VAR_40[1];

    FUNC_12("in authgss_refresh()");

 VAR_28 = FUNC_0(VAR_26);

 if ((VAR_28->established && VAR_27 == ((void*)0)) || VAR_28->inprogress)
  return (VAR_20);
    else if (VAR_27) {
        FUNC_12("trying to refresh credentials\n");
        FUNC_1(&VAR_28->ctx);
        FUNC_18(&VAR_28->gc.gc_ctx);
        FUNC_4(&VAR_28->ctx);
        FUNC_14(VAR_28->gc_wire_verf.value, VAR_28->gc_wire_verf.length);
        VAR_28->gc_wire_verf.value = ((void*)0);
        VAR_28->gc_wire_verf.length = 0;
        VAR_28->established = VAR_1;
        VAR_28->gc.gc_proc = VAR_9;
    }


 FUNC_15(&VAR_29, 0, sizeof(VAR_29));
 VAR_30 = VAR_19;
    VAR_31.length = 0;
    VAR_31.value = ((void*)0);

 FUNC_17(VAR_28->sec);

    if (VAR_28->sec->svc == VAR_10)
        VAR_36 |= VAR_3;

    for (VAR_35=0;;VAR_35++) {

  if (VAR_30 != VAR_19) {
   FUNC_12("The token we just received (length %d):",
      VAR_30->length);
   FUNC_13(0, "", VAR_30->value, VAR_30->length, 0);
  }
        VAR_28->inprogress = VAR_20;
        VAR_37.cBuffers = 1;
        VAR_37.pBuffers = VAR_39;
        VAR_37.ulVersion = VAR_14;
        VAR_39[0].BufferType = VAR_13;
        VAR_39[0].cbBuffer = VAR_31.length;
        VAR_39[0].pvBuffer = VAR_31.value;
        FUNC_12("calling InitializeSecurityContextA for %s", VAR_28->name);

        VAR_32 = FUNC_3(
                        &VAR_28->sec->cred,
                        ((VAR_35==0)?((void*)0):&VAR_28->ctx),
                        VAR_28->name,
                        VAR_36,
                        0,
                        VAR_15,
                        ((VAR_35==0)?((void*)0):&VAR_38),
                        0,
                        &VAR_28->ctx,
                        &VAR_37,
                        &VAR_34,
                        &VAR_28->expiry);

  if (VAR_30 != VAR_19) {



            FUNC_18(&VAR_29.gr_token);

   VAR_30 = VAR_19;
  }
  if (VAR_32 != VAR_17 && VAR_32 != VAR_18) {
   FUNC_12("InitializeSecurityContext failed with %x", VAR_32);
   break;
  }
        VAR_31.length = VAR_39[0].cbBuffer;
        VAR_31.value = VAR_39[0].pvBuffer;
  if (VAR_31.length != 0) {
   FUNC_15(&VAR_29, 0, sizeof(VAR_29));


   FUNC_12("The token being sent (length %d):",
      VAR_31.length);
   FUNC_13(0, "", VAR_31.value, VAR_31.length, 0);

   VAR_33 = FUNC_7(VAR_28->clnt, VAR_6,
           (xdrproc_t)VAR_24,
           &VAR_31,
           (xdrproc_t)VAR_25,
           (caddr_t)&VAR_29, VAR_0);





            FUNC_2(VAR_31.value);

   if (VAR_33 != VAR_12 ||
       (VAR_29.gr_major != VAR_17 &&
        VAR_29.gr_major != VAR_18))
    break;

   if (VAR_29.gr_ctx.length != 0) {





                FUNC_18(&VAR_28->gc.gc_ctx);

    VAR_28->gc.gc_ctx = VAR_29.gr_ctx;
   }
   if (VAR_29.gr_token.length != 0) {
    if (VAR_32 != VAR_18)
     break;
    VAR_30 = &VAR_29.gr_token;
                VAR_38.cBuffers = 1;
                VAR_38.pBuffers = VAR_40;
                VAR_38.ulVersion = VAR_14;
                VAR_40[0].BufferType = VAR_13;
                VAR_40[0].cbBuffer = VAR_29.gr_token.length;
                VAR_40[0].pvBuffer = VAR_29.gr_token.value;
   }
   VAR_28->gc.gc_proc = VAR_7;
  }




  if (VAR_32 == VAR_17) {
   sspi_buffer_desc VAR_41;
   u_int VAR_42, VAR_43 = 0;

            FUNC_16(&VAR_28->ctx);

   VAR_42 = FUNC_11(VAR_29.gr_win);
   VAR_41.value = (unsigned char *)&VAR_42;
   VAR_41.length = sizeof(VAR_42);




            VAR_32 = FUNC_19(&VAR_28->ctx, 0, &VAR_41, &VAR_28->gc_wire_verf, &VAR_43);

   if (VAR_32 != VAR_17) {
    FUNC_12("authgss_refresh: sspi_verify_mic failed with %x", VAR_32);
    if (VAR_32 == VAR_16) {
     VAR_28->established = VAR_1;
     FUNC_6(VAR_26);
    }
    break;
   }
   VAR_28->established = VAR_20;
            VAR_28->inprogress = VAR_1;
   VAR_28->gc.gc_proc = VAR_8;
   VAR_28->gc.gc_seq = 0;
   VAR_28->win = VAR_29.gr_win;
            FUNC_12("authgss_refresh: established GSS context");
   break;
  }
 }

 if (VAR_28->gc.gc_proc != VAR_8) {
  if (VAR_29.gr_token.length != 0)



            FUNC_18(&VAR_29.gr_token);

  FUNC_5(VAR_26);
  VAR_26 = ((void*)0);
  VAR_23.cf_stat = VAR_11;

  return (VAR_1);
 }
 return (VAR_20);
}
