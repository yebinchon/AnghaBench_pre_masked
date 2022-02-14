
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsdisp_t ;
typedef char WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char const*,int *,int,int *,int **) ;
 int FUNC_2 (int *,int *,double,int **) ;
 int FUNC_3 (int *) ;

HRESULT FUNC_4(script_ctx_t *VAR_3, jsdisp_t *VAR_4, jsdisp_t **VAR_5)
{
    jsdisp_t *VAR_6;
    HRESULT VAR_7;

    static const WCHAR VAR_8[] = {'D','a','t','e',0};

    VAR_7 = FUNC_2(VAR_3, VAR_4, 0.0, &VAR_6);
    if(FUNC_0(VAR_7))
        return VAR_7;

    VAR_7 = FUNC_1(VAR_3, VAR_1, VAR_8, &VAR_0,
            VAR_2|7, VAR_6, VAR_5);

    FUNC_3(VAR_6);
    return VAR_7;
}
