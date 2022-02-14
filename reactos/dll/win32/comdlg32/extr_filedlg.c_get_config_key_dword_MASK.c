
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef int WCHAR ;
typedef scalar_t__ HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int const*,int ,scalar_t__*,int *,scalar_t__*) ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_1(HKEY VAR_3, const WCHAR *VAR_4, DWORD *VAR_5)
{
    DWORD VAR_6, VAR_7, VAR_8;

    VAR_8 = sizeof(VAR_7);
    if (VAR_3 && !FUNC_0(VAR_3, VAR_4, 0, &VAR_6, (BYTE *)&VAR_7, &VAR_8) && VAR_6 == VAR_1)
    {
        *VAR_5 = VAR_7;
        return VAR_2;
    }

    return VAR_0;
}
