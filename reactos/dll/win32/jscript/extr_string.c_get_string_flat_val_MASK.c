
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsstr_t ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int **) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static HRESULT FUNC_4(script_ctx_t *VAR_2, vdisp_t *VAR_3, jsstr_t **VAR_4, const WCHAR **VAR_5)
{
    HRESULT VAR_6;

    VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
    if(FUNC_0(VAR_6))
        return VAR_6;

    *VAR_5 = FUNC_2(*VAR_4);
    if(*VAR_5)
        return VAR_1;

    FUNC_3(*VAR_4);
    return VAR_0;
}
