
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * error_constr; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsdisp_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_4 (int *,TYPE_1__*,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_5(script_ctx_t *VAR_4, jsdisp_t *VAR_5,
        jsdisp_t *VAR_6, jsdisp_t **VAR_7)
{
    jsdisp_t *VAR_8;
    HRESULT VAR_9;

    VAR_8 = FUNC_1(sizeof(*VAR_8));
    if(!VAR_8)
        return VAR_0;

    if(VAR_5)
        VAR_9 = FUNC_3(VAR_8, VAR_4, &VAR_2, VAR_5);
    else
        VAR_9 = FUNC_4(VAR_8, VAR_4, &VAR_1,
            VAR_6 ? VAR_6 : VAR_4->error_constr);
    if(FUNC_0(VAR_9)) {
        FUNC_2(VAR_8);
        return VAR_9;
    }

    *VAR_7 = VAR_8;
    return VAR_3;
}
