
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_3, jsdisp_t *VAR_4, jsval_t *VAR_5)
{
    jsstr_t *VAR_6;

    FUNC_0("\n");

    VAR_6 = FUNC_1(VAR_2);
    if(!VAR_6)
        return VAR_0;

    *VAR_5 = FUNC_2(VAR_6);
    return VAR_1;
}
