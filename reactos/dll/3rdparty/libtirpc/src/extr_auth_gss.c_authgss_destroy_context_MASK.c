
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_6__ {scalar_t__ length; int * value; } ;
struct TYPE_7__ {scalar_t__ length; } ;
struct TYPE_5__ {TYPE_3__ gc_ctx; int gc_proc; } ;
struct rpc_gss_data {scalar_t__ ctx; scalar_t__ established; TYPE_2__ gc_wire_verf; TYPE_1__ gc; int clnt; } ;
typedef int OM_uint32 ;
typedef int AUTH ;


 struct rpc_gss_data* FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int *,int ,int *,int ) ;
 int FUNC_2 (int *,scalar_t__*,int *) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_7(AUTH *VAR_6)
{
 struct rpc_gss_data *VAR_7;
 OM_uint32 VAR_8;

 FUNC_4("in authgss_destroy_context()");

 VAR_7 = FUNC_0(VAR_6);

 if (VAR_7->gc.gc_ctx.length != 0) {
  if (VAR_7->established) {
   VAR_7->gc.gc_proc = VAR_4;
   FUNC_1(VAR_7->clnt, VAR_3, (xdrproc_t)VAR_5, ((void*)0),
      (xdrproc_t)VAR_5, ((void*)0), VAR_0);
  }
  FUNC_3(&VAR_8, &VAR_7->gc.gc_ctx);

  FUNC_6(&VAR_7->gc.gc_ctx, 0, sizeof(VAR_7->gc.gc_ctx));
 }
 if (VAR_7->ctx != VAR_2) {
  FUNC_2(&VAR_8, &VAR_7->ctx, ((void*)0));
  VAR_7->ctx = VAR_2;
 }


 FUNC_5(VAR_7->gc_wire_verf.value, VAR_7->gc_wire_verf.length);
 VAR_7->gc_wire_verf.value = ((void*)0);
 VAR_7->gc_wire_verf.length = 0;

 VAR_7->established = VAR_1;
}
