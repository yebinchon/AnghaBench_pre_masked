
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsdisp_t ;
struct TYPE_3__ {int dispex; int safearray; } ;
typedef TYPE_1__ VBArrayInstance ;
typedef int SAFEARRAY ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,TYPE_1__**) ;
 int FUNC_3 (int *) ;

HRESULT FUNC_4(script_ctx_t *VAR_1, SAFEARRAY *VAR_2, jsdisp_t **VAR_3)
{
    VBArrayInstance *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_2(VAR_1, ((void*)0), &VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    VAR_5 = FUNC_1(VAR_2, &VAR_4->safearray);
    if(FUNC_0(VAR_5)) {
        FUNC_3(&VAR_4->dispex);
        return VAR_5;
    }

    *VAR_3 = &VAR_4->dispex;
    return VAR_0;
}
