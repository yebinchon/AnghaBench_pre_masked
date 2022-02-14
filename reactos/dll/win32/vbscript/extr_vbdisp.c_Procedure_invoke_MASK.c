
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* desc; } ;
typedef TYPE_2__ vbdisp_t ;
struct TYPE_8__ {int site; } ;
typedef TYPE_3__ script_ctx_t ;
typedef int VARIANT ;
struct TYPE_6__ {int value_func; TYPE_3__* ctx; } ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,int ,int *,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_4(vbdisp_t *VAR_0, VARIANT *VAR_1, unsigned VAR_2, VARIANT *VAR_3)
{
    script_ctx_t *VAR_4 = VAR_0->desc->ctx;
    HRESULT VAR_5;

    FUNC_2("\n");

    FUNC_0(VAR_4->site);
    VAR_5 = FUNC_3(VAR_4, VAR_0->desc->value_func, ((void*)0), ((void*)0), ((void*)0));
    FUNC_1(VAR_4->site);

    return VAR_5;
}
