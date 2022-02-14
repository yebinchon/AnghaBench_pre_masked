
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int u_int ;
struct TYPE_9__ {scalar_t__ gc_proc; int gc_seq; } ;
struct TYPE_8__ {int length; int * value; } ;
struct rpc_sspi_data {scalar_t__ established; int win; int ctx; TYPE_2__ gc; TYPE_1__ gc_wire_verf; } ;
struct opaque_auth {int oa_length; int* oa_base; } ;
struct TYPE_10__ {int* value; int length; } ;
typedef TYPE_3__ sspi_buffer_desc ;
typedef int num ;
typedef scalar_t__ bool_t ;
typedef int AUTH ;


 struct rpc_sspi_data* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_3__*,TYPE_3__*,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,scalar_t__) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *,int*,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int *,int,TYPE_3__*,TYPE_3__*,int*) ;

__attribute__((used)) static bool_t
FUNC_8(AUTH *VAR_8, struct opaque_auth *VAR_9, u_int VAR_10)
{
 struct rpc_sspi_data *VAR_11;
 u_int VAR_12, VAR_13, VAR_14;
 sspi_buffer_desc VAR_15, VAR_16;
 uint32_t VAR_17;

 FUNC_4("in authgss_validate(for seq=%d)", VAR_10);

 VAR_11 = FUNC_0(VAR_8);

 if (VAR_11->established == VAR_0) {






  if ((VAR_11->gc_wire_verf.value =
    FUNC_5(VAR_9->oa_length)) == ((void*)0)) {
   return (VAR_0);
  }
  FUNC_6(VAR_11->gc_wire_verf.value, VAR_9->oa_base, VAR_9->oa_length);
  VAR_11->gc_wire_verf.length = VAR_9->oa_length;
  return (VAR_6);
   }

    if (VAR_11->gc.gc_proc == VAR_2)
        return VAR_6;

 if (VAR_11->gc.gc_proc == VAR_3 ||
         VAR_11->gc.gc_proc == VAR_1) {
  VAR_12 = FUNC_3(VAR_11->win);
 }
 else {
        if (VAR_10 == -1) {
            VAR_12 = FUNC_3(VAR_11->gc.gc_seq);
            VAR_14 = VAR_11->gc.gc_seq;
        }
     else {
            VAR_12 = FUNC_3(VAR_10);
            VAR_14 = VAR_10;
        }
    }

 VAR_15.value = &VAR_12;
 VAR_15.length = sizeof(VAR_12);

 VAR_16.value = VAR_9->oa_base;
 VAR_16.length = VAR_9->oa_length;




    VAR_17 = FUNC_7(&VAR_11->ctx, VAR_14, &VAR_15, &VAR_16, &VAR_13);

 if (VAR_17 != VAR_5) {
  FUNC_4("authsspi_validate: VerifySignature failed with %x", VAR_17);
  if (VAR_17 == VAR_4) {
   VAR_11->established = VAR_0;
   FUNC_1(VAR_8);
  }
  return (VAR_0);
 }
 return (VAR_6);
}
