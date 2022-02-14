
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPCWSTR ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int *,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int *,int ,int *,int *) ;

BOOL FUNC_4(LPCWSTR VAR_3)
{
    DWORD VAR_4;
    WCHAR VAR_5[64];
    HRESULT VAR_6;

    VAR_6 = FUNC_1(VAR_3, VAR_1, 0, VAR_5, FUNC_0(VAR_5), &VAR_4, 0);
    if(FUNC_2(VAR_6))
        return VAR_0;

    return FUNC_3(VAR_5, VAR_4, ((void*)0), ((void*)0)) == VAR_2;
}
