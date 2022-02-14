
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef int ITypeLib ;
typedef int ITypeInfo ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(LPCWSTR VAR_1)
{
    ITypeLib *VAR_2;
    ITypeInfo *VAR_3, *VAR_4;
    HRESULT VAR_5;
    int VAR_6;

    FUNC_6("Loading type library\n");
    VAR_5 = FUNC_4(VAR_1, &VAR_2);
    FUNC_5(VAR_5 == VAR_0, "Could not load type library\n");
    if(VAR_5 != VAR_0)
        return;

    VAR_5 = FUNC_2(VAR_2, 1, &VAR_3);
    FUNC_5(VAR_5 == VAR_0, "ITypeLib_GetTypeInfo failed on index = 1\n");
    VAR_6 = FUNC_3(VAR_2);
    FUNC_5(VAR_6 > 0, "ITypeLib destroyed while ITypeInfo has back pointer\n");
    if(!VAR_6)
        return;

    VAR_5 = FUNC_2(VAR_2, 1, &VAR_4);
    FUNC_5(VAR_5 == VAR_0, "ITypeLib_GetTypeInfo failed on index = 1\n");
    FUNC_5(VAR_3 == VAR_4, "ITypeLib_GetTypeInfo returned different pointers for same indexes\n");

    FUNC_1(VAR_2);
    FUNC_0(VAR_4);
    FUNC_0(VAR_3);
    FUNC_5(FUNC_3(VAR_2) == 0, "ITypeLib should be destroyed here.\n");
}
