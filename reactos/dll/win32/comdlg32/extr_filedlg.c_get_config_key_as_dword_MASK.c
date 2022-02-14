
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef int WCHAR ;
typedef scalar_t__ HKEY ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int const*,int ,int*,int *,int*) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_1(HKEY VAR_2, const WCHAR *VAR_3, DWORD *VAR_4)
{
    DWORD VAR_5, VAR_6, VAR_7;

    VAR_7 = sizeof(VAR_6);
    if (VAR_2 && !FUNC_0(VAR_2, VAR_3, 0, &VAR_5, (BYTE *)&VAR_6, &VAR_7))
    {
        *VAR_4 = VAR_6;
        return VAR_1;
    }

    return VAR_0;
}
