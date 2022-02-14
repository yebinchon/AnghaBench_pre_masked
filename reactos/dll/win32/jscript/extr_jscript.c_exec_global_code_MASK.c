
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int global_code; } ;
typedef TYPE_1__ bytecode_t ;
struct TYPE_10__ {int global; } ;
struct TYPE_9__ {int site; TYPE_3__* ctx; } ;
typedef TYPE_2__ JScript ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,TYPE_1__*,int *,int *,int *,int *,int ,int ,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_4(JScript *VAR_1, bytecode_t *VAR_2)
{
    HRESULT VAR_3;

    FUNC_0(VAR_1->site);

    FUNC_2(VAR_1->ctx);
    VAR_3 = FUNC_3(VAR_1->ctx, VAR_0, VAR_2, &VAR_2->global_code, ((void*)0), ((void*)0), ((void*)0), VAR_1->ctx->global, 0, ((void*)0), ((void*)0));

    FUNC_1(VAR_1->site);
    return VAR_3;
}
