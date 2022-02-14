
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int VOID ;
typedef int PVOID ;
typedef scalar_t__ PCHAR ;
typedef int* LPWSTR ;
typedef int HANDLE ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,scalar_t__,int,int*,int) ;
 int FUNC_6 (int ,int ,int,int*,int *) ;
 int VAR_3 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int*,int) ;

VOID
FUNC_9(
    LPWSTR VAR_4,
    DWORD VAR_5,
    BOOL VAR_6)
{
    DWORD VAR_7;
    DWORD VAR_8 = 0;
    HANDLE VAR_9;
    LPWSTR VAR_10;
    PCHAR VAR_11;

    VAR_11 = FUNC_3(FUNC_1(), 0, VAR_5 - 1);
    FUNC_8(VAR_4, VAR_5 * sizeof(WCHAR));
    VAR_9 = FUNC_2(VAR_3);
    FUNC_0(VAR_9, &VAR_7);

    FUNC_7(VAR_9, VAR_2 | (VAR_6 ? VAR_1 : 0));

    FUNC_6(VAR_9, (PVOID)VAR_11, VAR_5 - 1, &VAR_8, ((void*)0));

    FUNC_5(VAR_0, 0, VAR_11, VAR_8, VAR_4, VAR_5 - 1);
    FUNC_4(FUNC_1(), 0, VAR_11);

    for (VAR_10 = VAR_4; *VAR_10; VAR_10++)
    {
        if (*VAR_10 == L'\x0d')
        {
            *VAR_10 = L'\0';
            break;
        }
    }

    FUNC_7(VAR_9, VAR_7);
}
