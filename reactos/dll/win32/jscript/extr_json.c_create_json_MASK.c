
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int object_constr; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsdisp_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int ) ;

HRESULT FUNC_4(script_ctx_t *VAR_3, jsdisp_t **VAR_4)
{
    jsdisp_t *VAR_5;
    HRESULT VAR_6;

    VAR_5 = FUNC_1(sizeof(*VAR_5));
    if(!VAR_5)
        return VAR_0;

    VAR_6 = FUNC_3(VAR_5, VAR_3, &VAR_1, VAR_3->object_constr);
    if(FUNC_0(VAR_6)) {
        FUNC_2(VAR_5);
        return VAR_6;
    }

    *VAR_4 = VAR_5;
    return VAR_2;
}
