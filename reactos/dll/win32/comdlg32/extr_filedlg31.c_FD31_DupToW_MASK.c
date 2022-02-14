
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef scalar_t__ LPCSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__,int,int *,int) ;
 int * FUNC_1 (int) ;

__attribute__((used)) static LPWSTR FUNC_2(LPCSTR VAR_1, DWORD VAR_2)
{
    LPWSTR VAR_3 = ((void*)0);
    if (VAR_1 && (VAR_2 > 0))
    {
        VAR_3 = FUNC_1(VAR_2 * sizeof(WCHAR));
        if (VAR_3) FUNC_0( VAR_0, 0, VAR_1, -1, VAR_3, VAR_2 );
    }
    return VAR_3;
}
