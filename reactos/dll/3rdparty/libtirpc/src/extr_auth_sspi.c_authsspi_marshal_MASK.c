
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
typedef int tmp ;
struct TYPE_19__ {scalar_t__ gc_proc; scalar_t__ gc_seq; } ;
struct TYPE_16__ {int qop; } ;
struct rpc_sspi_data {scalar_t__ established; TYPE_4__ gc; int ctx; TYPE_1__ sec; } ;
struct TYPE_17__ {char* value; scalar_t__ length; } ;
typedef TYPE_2__ sspi_buffer_desc ;
typedef scalar_t__ bool_t ;
typedef int XDR ;
struct TYPE_20__ {char* oa_base; scalar_t__ oa_length; void* oa_flavor; } ;
struct TYPE_18__ {TYPE_5__ ah_verf; TYPE_5__ ah_cred; } ;
typedef TYPE_3__ AUTH ;


 struct rpc_sspi_data* FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_5__ VAR_8 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (int *,int ,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (char*,...) ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int *,int ,scalar_t__,TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (int *,TYPE_5__*) ;
 int FUNC_10 (int *,TYPE_4__*) ;
 int FUNC_11 (int *,char*,int,int ) ;
 char* FUNC_12 (int *) ;

__attribute__((used)) static bool_t
FUNC_13(AUTH *VAR_10, XDR *VAR_11, u_int *VAR_12)
{
 XDR VAR_13;
 char VAR_14[VAR_1];
 struct rpc_sspi_data *VAR_15;
 sspi_buffer_desc VAR_16, VAR_17;
 uint32_t VAR_18;
 bool_t VAR_19;

    FUNC_6("in authgss_marshal()");

 VAR_15 = FUNC_0(VAR_10);

 if (VAR_15->established) {
  VAR_15->gc.gc_seq++;
        *VAR_12 = VAR_15->gc.gc_seq;
    }

 FUNC_11(&VAR_13, VAR_14, sizeof(VAR_14), VAR_7);

 if (!FUNC_10(&VAR_13, &VAR_15->gc)) {
        FUNC_6("authsspi_marshal: xdr_rpc_sspi_cred failed");
  FUNC_1(&VAR_13);
  return (VAR_0);
 }
 VAR_10->ah_cred.oa_flavor = VAR_2;
 VAR_10->ah_cred.oa_base = VAR_14;
 VAR_10->ah_cred.oa_length = FUNC_2(&VAR_13);

 FUNC_1(&VAR_13);

 if (!FUNC_9(VAR_11, &VAR_10->ah_cred)) {
        FUNC_6("authsspi_marshal: failed to xdr GSS CRED");
  return (VAR_0);
    }
 if (VAR_15->gc.gc_proc == VAR_4 ||
     VAR_15->gc.gc_proc == VAR_3) {
  return (FUNC_9(VAR_11, &VAR_8));
 }

 VAR_16.length = FUNC_2(VAR_11) - 4;


 VAR_16.value = FUNC_12(VAR_11) + 1;





    VAR_18 = FUNC_7(&VAR_15->ctx, 0, VAR_15->gc.gc_seq, &VAR_16, &VAR_17);

 if (VAR_18 != VAR_6) {
  FUNC_6("authsspi_marshal: sspi_get_mic failed with %x", VAR_18);
  if (VAR_18 == VAR_5) {
   VAR_15->established = VAR_0;
   FUNC_3(VAR_10);
  }
  return (VAR_0);
 }
 VAR_10->ah_verf.oa_flavor = VAR_2;
 VAR_10->ah_verf.oa_base = VAR_17.value;
 VAR_10->ah_verf.oa_length = VAR_17.length;
 VAR_19 = FUNC_9(VAR_11, &VAR_10->ah_verf);



    FUNC_8(&VAR_17);

 return (VAR_19);
}
