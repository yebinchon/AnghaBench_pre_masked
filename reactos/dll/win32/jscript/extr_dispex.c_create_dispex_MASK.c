
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsdisp_t ;
typedef int builtin_info_t ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int const VAR_2 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int const*,int *) ;

HRESULT FUNC_4(script_ctx_t *VAR_3, const builtin_info_t *VAR_4, jsdisp_t *VAR_5, jsdisp_t **VAR_6)
{
    jsdisp_t *VAR_7;
    HRESULT VAR_8;

    VAR_7 = FUNC_1(sizeof(jsdisp_t));
    if(!VAR_7)
        return VAR_0;

    VAR_8 = FUNC_3(VAR_7, VAR_3, VAR_4 ? VAR_4 : &VAR_2, VAR_5);
    if(FUNC_0(VAR_8)) {
        FUNC_2(VAR_7);
        return VAR_8;
    }

    *VAR_6 = VAR_7;
    return VAR_1;
}
