
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int TCHAR ;
typedef int PVOID ;
typedef scalar_t__* PCHAR ;
typedef scalar_t__* LPTSTR ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,scalar_t__*,int,scalar_t__*,int) ;
 int FUNC_3 (int ,int ,int,int*,int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (scalar_t__*,int) ;
 scalar_t__ FUNC_6 (char) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (scalar_t__*) ;

VOID FUNC_9(LPTSTR VAR_4, DWORD VAR_5)
{
    DWORD VAR_6;
    DWORD VAR_7 = 0;
    HANDLE VAR_8;

    LPTSTR VAR_9;
    PCHAR VAR_10;




    VAR_10 = VAR_4;

    FUNC_5(VAR_4, VAR_5 * sizeof(TCHAR));
    VAR_8 = FUNC_1(VAR_3);
    FUNC_0(VAR_8, &VAR_6);

    FUNC_4(VAR_8, VAR_1 | VAR_0);

    FUNC_3(VAR_8, (PVOID)VAR_10, VAR_5 - 1, &VAR_7, ((void*)0));





    for (VAR_9 = VAR_4; *VAR_9; VAR_9++)
    {
        if (*VAR_9 == FUNC_6('\x0d'))
        {
            *VAR_9 = FUNC_6('\0');
            break;
        }
    }

    FUNC_4(VAR_8, VAR_6);
}
