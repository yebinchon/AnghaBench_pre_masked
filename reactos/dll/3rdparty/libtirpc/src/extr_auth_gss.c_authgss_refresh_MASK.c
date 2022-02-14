
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef scalar_t__ u_int ;
struct TYPE_15__ {scalar_t__ length; unsigned char* value; } ;
struct rpc_gss_init_res {scalar_t__ gr_major; TYPE_3__ gr_token; int gr_win; TYPE_3__ gr_ctx; } ;
struct TYPE_14__ {scalar_t__ gc_proc; scalar_t__ gc_seq; TYPE_3__ gc_ctx; } ;
struct TYPE_17__ {scalar_t__ qop; int req_flags; int mech; int cred; } ;
struct TYPE_13__ {int length; scalar_t__ value; } ;
struct rpc_gss_data {TYPE_2__ gc; int win; void* established; TYPE_5__ sec; int ctx; TYPE_1__ gc_wire_verf; int clnt; int name; } ;
typedef int seq ;
typedef TYPE_3__ gss_buffer_desc ;
typedef int gr ;
typedef int caddr_t ;
typedef void* bool_t ;
struct TYPE_16__ {int cf_stat; } ;
typedef scalar_t__ OM_uint32 ;
typedef int AUTH ;


 struct rpc_gss_data* FUNC_0 (int *) ;
 int VAR_0 ;
 void* VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,TYPE_3__*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (scalar_t__*,int ,int *,int ,int ,int ,int ,int *,TYPE_3__*,int *,TYPE_3__*,scalar_t__*,int *) ;
 int FUNC_5 (scalar_t__*,TYPE_3__*) ;
 scalar_t__ FUNC_6 (scalar_t__*,int ,TYPE_3__*,TYPE_3__*,scalar_t__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (unsigned char*,scalar_t__,int ) ;
 int FUNC_10 (char*,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct rpc_gss_init_res*,int ,int) ;
 int FUNC_12 (TYPE_5__*) ;
 TYPE_4__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static bool_t
FUNC_13(AUTH *VAR_15)
{
 struct rpc_gss_data *VAR_16;
 struct rpc_gss_init_res VAR_17;
 gss_buffer_desc *VAR_18, VAR_19;
 OM_uint32 VAR_20, VAR_21, VAR_22, VAR_23;

 FUNC_8("in authgss_refresh()");

 VAR_16 = FUNC_0(VAR_15);

 if (VAR_16->established)
  return (VAR_11);


 FUNC_11(&VAR_17, 0, sizeof(VAR_17));
 VAR_18 = VAR_2;





 for (;;) {
  VAR_20 = FUNC_4(&VAR_21,
      VAR_16->sec.cred,
      &VAR_16->ctx,
      VAR_16->name,
      VAR_16->sec.mech,
      VAR_16->sec.req_flags,
      0,
      ((void*)0),
      VAR_18,
      ((void*)0),
      &VAR_19,
      &VAR_23,
      ((void*)0));

  if (VAR_18 != VAR_2) {
   FUNC_5(&VAR_21, &VAR_17.gr_token);
   VAR_18 = VAR_2;
  }
  if (VAR_20 != VAR_3 &&
      VAR_20 != VAR_5) {
   FUNC_10("gss_init_sec_context", VAR_20, VAR_21);
   break;
  }
  if (VAR_19.length != 0) {
   FUNC_11(&VAR_17, 0, sizeof(VAR_17));
   VAR_22 = FUNC_3(VAR_16->clnt, VAR_6,
           (xdrproc_t)VAR_13,
           &VAR_19,
           (xdrproc_t)VAR_14,
           (caddr_t)&VAR_17, VAR_0);

   FUNC_5(&VAR_21, &VAR_19);

   if (VAR_22 != VAR_10 ||
       (VAR_17.gr_major != VAR_3 &&
        VAR_17.gr_major != VAR_5))
    return VAR_1;

   if (VAR_17.gr_ctx.length != 0) {
    if (VAR_16->gc.gc_ctx.value)
     FUNC_5(&VAR_21,
          &VAR_16->gc.gc_ctx);
    VAR_16->gc.gc_ctx = VAR_17.gr_ctx;
   }
   if (VAR_17.gr_token.length != 0) {
    if (VAR_20 != VAR_5)
     break;
    VAR_18 = &VAR_17.gr_token;
   }
   VAR_16->gc.gc_proc = VAR_7;
  }




  if (VAR_20 == VAR_3) {
   gss_buffer_desc VAR_24;
   gss_buffer_desc VAR_25;
   u_int VAR_26, VAR_27 = 0;

   VAR_26 = FUNC_7(VAR_17.gr_win);
   VAR_24.value = (unsigned char *)&VAR_26;
   VAR_24.length = sizeof(VAR_26);
   VAR_25.value = (unsigned char *)VAR_16->gc_wire_verf.value;
   VAR_25.length = VAR_16->gc_wire_verf.length;

   VAR_20 = FUNC_6(&VAR_21, VAR_16->ctx,
    &VAR_24, &VAR_25, &VAR_27);

   if (VAR_20 != VAR_3
     || VAR_27 != VAR_16->sec.qop) {
    FUNC_10("gss_verify_mic", VAR_20, VAR_21);
    if (VAR_20 == VAR_4) {
     VAR_16->established = VAR_1;
     FUNC_2(VAR_15);
    }
    return (VAR_1);
   }
   VAR_16->established = VAR_11;
   VAR_16->gc.gc_proc = VAR_8;
   VAR_16->gc.gc_seq = 0;
   VAR_16->win = VAR_17.gr_win;
   break;
  }
 }

 if (VAR_16->gc.gc_proc != VAR_8) {
  if (VAR_17.gr_token.length != 0)
   FUNC_5(&VAR_21, &VAR_17.gr_token);

  FUNC_1(VAR_15);
  VAR_15 = ((void*)0);
  VAR_12.cf_stat = VAR_9;

  return (VAR_1);
 }
 return (VAR_11);
}
