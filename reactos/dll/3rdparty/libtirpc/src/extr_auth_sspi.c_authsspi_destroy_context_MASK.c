
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_4__ {scalar_t__ length; int * value; } ;
struct TYPE_3__ {int gc_ctx; int gc_proc; } ;
struct rpc_sspi_data {scalar_t__ established; TYPE_2__ gc_wire_verf; int ctx; TYPE_1__ gc; int clnt; } ;
typedef int AUTH ;


 struct rpc_sspi_data* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int *,int ,int *,int ) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,int ,int) ;
 int VAR_4 ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_11(AUTH *VAR_6)
{
 struct rpc_sspi_data *VAR_7;

 FUNC_7("in authgss_destroy_context()");

 VAR_7 = FUNC_0(VAR_6);
    if (VAR_7 == ((void*)0)) return;

 if (FUNC_3(&VAR_7->ctx)) {
  if (VAR_7->established) {
   VAR_7->gc.gc_proc = VAR_3;
   FUNC_4(VAR_7->clnt, VAR_2, (xdrproc_t)VAR_5, ((void*)0),
      (xdrproc_t)VAR_5, ((void*)0), VAR_0);
            FUNC_1(&VAR_7->ctx);
  }
        FUNC_10(&VAR_7->gc.gc_ctx);
        FUNC_2(&VAR_7->ctx);






 }


 FUNC_8(VAR_7->gc_wire_verf.value, VAR_7->gc_wire_verf.length);
 VAR_7->gc_wire_verf.value = ((void*)0);
 VAR_7->gc_wire_verf.length = 0;

 VAR_7->established = VAR_1;
}
