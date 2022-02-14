
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
struct TYPE_3__ {int dispex; } ;
typedef TYPE_1__ StringInstance ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int *,TYPE_1__**) ;

HRESULT FUNC_2(script_ctx_t *VAR_1, jsstr_t *VAR_2, jsdisp_t **VAR_3)
{
    StringInstance *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_1(VAR_1, ((void*)0), VAR_2, &VAR_4);
    if(FUNC_0(VAR_5))
        return VAR_5;

    *VAR_3 = &VAR_4->dispex;
    return VAR_0;

}
