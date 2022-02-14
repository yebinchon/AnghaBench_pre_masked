
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCTSTR ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,scalar_t__*,int ,scalar_t__*) ;

__attribute__((used)) static DWORD FUNC_1(HKEY VAR_2, LPCTSTR VAR_3, DWORD VAR_4)
{
    DWORD VAR_5, VAR_6, VAR_7;
    LONG VAR_8;

    VAR_6 = VAR_1;
    VAR_7 = sizeof(DWORD);

    VAR_8 = FUNC_0(
                VAR_2,
                VAR_3,
                ((void*)0),
                &VAR_6,
                (LPBYTE)&VAR_5,
                &VAR_7);

    if (VAR_8 != VAR_0 || VAR_6 != VAR_1)
        return VAR_4;

    return VAR_5;
}
