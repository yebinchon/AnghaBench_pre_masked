
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsdisp_t ;
typedef int dispex_prop_t ;
typedef char WCHAR ;
typedef int HRESULT ;
typedef char* DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,char*,int **) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,char*) ;

HRESULT FUNC_5(jsdisp_t *VAR_0, DWORD VAR_1)
{
    static const WCHAR VAR_2[] = {'%','d',0};
    WCHAR VAR_3[12];
    dispex_prop_t *VAR_4;
    BOOL VAR_5;
    HRESULT VAR_6;

    FUNC_4(VAR_3, VAR_2, VAR_1);

    VAR_6 = FUNC_2(VAR_0, FUNC_3(VAR_3), VAR_3, &VAR_4);
    if(FUNC_0(VAR_6) || !VAR_4)
        return VAR_6;

    return FUNC_1(VAR_4, &VAR_5);
}
