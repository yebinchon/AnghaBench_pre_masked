
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_9__ {scalar_t__ qop; } ;
struct TYPE_8__ {scalar_t__ gc_proc; int gc_seq; } ;
struct TYPE_7__ {int length; int * value; } ;
struct rpc_gss_data {scalar_t__ established; TYPE_3__ sec; int ctx; TYPE_2__ gc; int win; TYPE_1__ gc_wire_verf; } ;
struct opaque_auth {int oa_length; scalar_t__* oa_base; } ;
typedef int num ;
struct TYPE_10__ {scalar_t__* value; int length; } ;
typedef TYPE_4__ gss_buffer_desc ;
typedef scalar_t__ bool_t ;
typedef scalar_t__ OM_uint32 ;
typedef int AUTH ;


 struct rpc_gss_data* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,TYPE_4__*,TYPE_4__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,scalar_t__,scalar_t__) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int *,scalar_t__*,int) ;
 int VAR_6 ;

__attribute__((used)) static bool_t
FUNC_9(AUTH *VAR_7, struct opaque_auth *VAR_8)
{
 struct rpc_gss_data *VAR_9;
 u_int VAR_10, VAR_11;
 gss_buffer_desc VAR_12, VAR_13;
 OM_uint32 VAR_14, VAR_15;

 FUNC_5("in authgss_validate()");

 VAR_9 = FUNC_0(VAR_7);

 if (VAR_9->established == VAR_0) {






  if ((VAR_9->gc_wire_verf.value =
    FUNC_7(VAR_8->oa_length)) == ((void*)0)) {
   FUNC_2(VAR_6, "gss_validate: out of memory\n");
   return (VAR_0);
  }
  FUNC_8(VAR_9->gc_wire_verf.value, VAR_8->oa_base, VAR_8->oa_length);
  VAR_9->gc_wire_verf.length = VAR_8->oa_length;
  return (VAR_5);
   }

 if (VAR_9->gc.gc_proc == VAR_4 ||
     VAR_9->gc.gc_proc == VAR_3) {
  VAR_10 = FUNC_4(VAR_9->win);
 }
 else VAR_10 = FUNC_4(VAR_9->gc.gc_seq);

 VAR_12.value = &VAR_10;
 VAR_12.length = sizeof(VAR_10);

 VAR_13.value = VAR_8->oa_base;
 VAR_13.length = VAR_8->oa_length;

 VAR_14 = FUNC_3(&VAR_15, VAR_9->ctx, &VAR_12,
      &VAR_13, &VAR_11);
 if (VAR_14 != VAR_1 || VAR_11 != VAR_9->sec.qop) {
  FUNC_6("gss_verify_mic", VAR_14, VAR_15);
  if (VAR_14 == VAR_2) {
   VAR_9->established = VAR_0;
   FUNC_1(VAR_7);
  }
  return (VAR_0);
 }
 return (VAR_5);
}
