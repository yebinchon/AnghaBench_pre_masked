
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPWSTR ;
typedef int HWND ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *,scalar_t__,int ,int *,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int *,int *,int) ;

void FUNC_4(HWND VAR_7)
{
    DWORD VAR_8;
    LPWSTR VAR_9 = ((void*)0);

    VAR_8 = FUNC_1();
    if (VAR_8 == VAR_0)
        return;

    if (!FUNC_0(VAR_1 |
                        VAR_2 |
                        VAR_3,
                        ((void*)0),
                        VAR_8,
                        VAR_4,
                        (LPWSTR)&VAR_9,
                        0, ((void*)0)))
    {
        return;
    }

    FUNC_3(VAR_7, VAR_9, ((void*)0), VAR_6 | VAR_5);
    FUNC_2(VAR_9);
}
