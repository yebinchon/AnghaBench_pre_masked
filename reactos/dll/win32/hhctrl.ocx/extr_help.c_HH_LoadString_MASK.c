
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__* LPWSTR ;
typedef int LPCWSTR ;
typedef int DWORD ;


 int FUNC_0 (int ,int ,scalar_t__*,int ) ;
 scalar_t__* FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__*,int ,int) ;

__attribute__((used)) static LPWSTR FUNC_3(DWORD VAR_1)
{
    LPWSTR VAR_2 = ((void*)0);
    LPCWSTR VAR_3;
    int VAR_4;

    VAR_4 = FUNC_0(VAR_0, VAR_1, (LPWSTR)&VAR_3, 0);

    VAR_2 = FUNC_1((VAR_4 + 2) * sizeof(WCHAR));
    FUNC_2(VAR_2, VAR_3, VAR_4*sizeof(WCHAR));
    VAR_2[VAR_4] = 0;

    return VAR_2;
}
