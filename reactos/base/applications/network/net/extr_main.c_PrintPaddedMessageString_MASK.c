
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int * PWSTR ;
typedef int LPWSTR ;
typedef scalar_t__ INT ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int ,scalar_t__,int ,int ,int ,int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;

VOID
FUNC_4(
    DWORD VAR_6,
    INT VAR_7)
{
    PWSTR VAR_8;
    DWORD VAR_9;

    VAR_9 = FUNC_1(VAR_0 | VAR_1 |
                              VAR_2,
                              VAR_5,
                              VAR_6,
                              VAR_3,
                              (LPWSTR)&VAR_8,
                              0,
                              ((void*)0));
    if (VAR_8)
    {
        FUNC_0(VAR_4, VAR_8);
        FUNC_2(VAR_8);
        VAR_8 = ((void*)0);
    }

    if (VAR_9 < (DWORD)VAR_7)
        FUNC_3(L' ', (DWORD)VAR_7 - VAR_9);
}
