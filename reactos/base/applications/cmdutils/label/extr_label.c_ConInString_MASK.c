
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int PVOID ;
typedef scalar_t__ PCHAR ;
typedef int* LPWSTR ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ,int ,scalar_t__,int,int*,int) ;
 int FUNC_7 (int ,int ,int,int*,int *) ;
 int VAR_3 ;
 int FUNC_8 (int ,int) ;
 int VAR_4 ;

__attribute__((used)) static
VOID
FUNC_9(LPWSTR VAR_5, DWORD VAR_6)
{
    DWORD VAR_7;
    DWORD VAR_8 = 0;
    HANDLE VAR_9;
    LPWSTR VAR_10;
    PCHAR VAR_11;

    VAR_11 = (PCHAR)FUNC_4(FUNC_2(), VAR_2, VAR_6 - 1);

    VAR_9 = FUNC_3(VAR_3);
    FUNC_1(VAR_9, &VAR_7);

    FUNC_8(VAR_9, VAR_1 | VAR_0);

    FUNC_7(VAR_9, (PVOID)VAR_11, VAR_6 - 1, &VAR_8, ((void*)0));

    FUNC_6(FUNC_0(), 0, VAR_11, VAR_8, VAR_5, VAR_6 - 1);
    FUNC_5(FUNC_2(), 0, VAR_11);

    for (VAR_10 = VAR_5; *VAR_10; VAR_10++)
    {
        if (*VAR_10 == L'\x0d')
        {
            *VAR_10 = VAR_4;
            break;
        }
    }

    FUNC_8(VAR_9, VAR_7);
}
