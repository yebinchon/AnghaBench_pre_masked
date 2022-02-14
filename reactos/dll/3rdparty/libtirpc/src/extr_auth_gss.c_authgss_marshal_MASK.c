
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_13__ {int qop; } ;
struct TYPE_16__ {scalar_t__ gc_proc; int gc_seq; } ;
struct rpc_gss_data {scalar_t__ established; TYPE_1__ sec; int ctx; TYPE_4__ gc; } ;
struct TYPE_14__ {char* value; void* length; } ;
typedef TYPE_2__ gss_buffer_desc ;
typedef scalar_t__ bool_t ;
typedef int XDR ;
struct TYPE_17__ {char* oa_base; void* oa_length; void* oa_flavor; } ;
struct TYPE_15__ {TYPE_5__ ah_verf; TYPE_5__ ah_cred; } ;
typedef scalar_t__ OM_uint32 ;
typedef TYPE_3__ AUTH ;


 struct rpc_gss_data* FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 void* FUNC_2 (int *) ;
 char* FUNC_3 (int *,void*) ;
 int FUNC_4 (int *,int ) ;
 TYPE_5__ VAR_8 ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (scalar_t__*,int ,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (scalar_t__*,TYPE_2__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int *,TYPE_5__*) ;
 int FUNC_11 (int *,TYPE_4__*) ;
 int FUNC_12 (int *,char*,int,int ) ;

__attribute__((used)) static bool_t
FUNC_13(AUTH *VAR_9, XDR *VAR_10)
{
 XDR VAR_11;
 char VAR_12[VAR_3];
 struct rpc_gss_data *VAR_13;
 gss_buffer_desc VAR_14, VAR_15;
 OM_uint32 VAR_16, VAR_17;
 bool_t VAR_18;

 FUNC_8("in authgss_marshal()");

 VAR_13 = FUNC_0(VAR_9);

 if (VAR_13->established)
  VAR_13->gc.gc_seq++;

 FUNC_12(&VAR_11, VAR_12, sizeof(VAR_12), VAR_7);

 if (!FUNC_11(&VAR_11, &VAR_13->gc)) {
  FUNC_1(&VAR_11);
  return (VAR_0);
 }
 VAR_9->ah_cred.oa_flavor = VAR_4;
 VAR_9->ah_cred.oa_base = VAR_12;
 VAR_9->ah_cred.oa_length = FUNC_2(&VAR_11);

 FUNC_1(&VAR_11);

 if (!FUNC_10(VAR_10, &VAR_9->ah_cred))
  return (VAR_0);

 if (VAR_13->gc.gc_proc == VAR_6 ||
     VAR_13->gc.gc_proc == VAR_5) {
  return (FUNC_10(VAR_10, &VAR_8));
 }

 VAR_14.length = FUNC_2(VAR_10);
 FUNC_4(VAR_10, 0);
 VAR_14.value = FUNC_3(VAR_10, VAR_14.length);

 VAR_16 = FUNC_6(&VAR_17, VAR_13->ctx, VAR_13->sec.qop,
       &VAR_14, &VAR_15);

 if (VAR_16 != VAR_1) {
  FUNC_9("gss_get_mic", VAR_16, VAR_17);
  if (VAR_16 == VAR_2) {
   VAR_13->established = VAR_0;
   FUNC_5(VAR_9);
  }
  return (VAR_0);
 }
 VAR_9->ah_verf.oa_flavor = VAR_4;
 VAR_9->ah_verf.oa_base = VAR_15.value;
 VAR_9->ah_verf.oa_length = VAR_15.length;

 VAR_18 = FUNC_10(VAR_10, &VAR_9->ah_verf);
 FUNC_7(&VAR_17, &VAR_15);

 return (VAR_18);
}
