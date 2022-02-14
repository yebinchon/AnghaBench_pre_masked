
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPCWSTR ;
typedef int LONG ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static LONG FUNC_1(LPCWSTR VAR_2, DWORD VAR_3,
 BYTE *VAR_4, DWORD *VAR_5, DWORD *VAR_6, DWORD *VAR_7)
{
    LONG VAR_8 = VAR_1;

    if (*VAR_5 < VAR_3)
    {
        if (!VAR_4)
            *VAR_5 = VAR_3;
        else
        {
            VAR_8 = VAR_0;
            *VAR_5 = VAR_3;
        }
    }
    else
    {
        if (VAR_3)
            FUNC_0(VAR_4, VAR_2, VAR_3 * sizeof(WCHAR));
        *VAR_5 = VAR_3 * sizeof(WCHAR);
    }
    return VAR_8;
}
