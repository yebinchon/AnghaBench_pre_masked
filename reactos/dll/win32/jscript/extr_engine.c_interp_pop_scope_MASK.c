
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* call_ctx; } ;
typedef TYPE_2__ script_ctx_t ;
struct TYPE_4__ {int scope; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static HRESULT FUNC_2(script_ctx_t *VAR_1)
{
    FUNC_0("\n");

    FUNC_1(&VAR_1->call_ctx->scope);
    return VAR_0;
}
