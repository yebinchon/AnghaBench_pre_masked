
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_3__ {int dwPageSize; } ;
typedef TYPE_1__ SYSTEM_INFO ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,int,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int,int ,int *) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static void FUNC_7(void)
{
    WCHAR *VAR_6, *VAR_7;
    SYSTEM_INFO VAR_8;
    DWORD VAR_9;
    BOOL VAR_10;
    char *VAR_11;
    int VAR_12;

    FUNC_2(&VAR_8);
    VAR_11 = FUNC_3(((void*)0), VAR_8.dwPageSize * 4, VAR_2, VAR_5);
    FUNC_6(VAR_11 != ((void*)0), "VirtualAlloc failed with %u\n", FUNC_1());
    VAR_10 = FUNC_5(VAR_11 + VAR_8.dwPageSize, VAR_8.dwPageSize, VAR_4, &VAR_9);
    FUNC_6(VAR_10, "VirtualProtect failed with %u\n", FUNC_1());
    VAR_10 = FUNC_5(VAR_11 + 3 * VAR_8.dwPageSize, VAR_8.dwPageSize, VAR_4, &VAR_9);
    FUNC_6(VAR_10, "VirtualProtect failed with %u\n", FUNC_1());

    VAR_6 = (WCHAR *)(VAR_11 + VAR_8.dwPageSize - sizeof(WCHAR));
    VAR_7 = (WCHAR *)(VAR_11 + 3 * VAR_8.dwPageSize - sizeof(WCHAR));
    *VAR_6 = 'A';
    *VAR_7 = 'B';


    VAR_12 = FUNC_0(VAR_0, 0, VAR_6, 100, VAR_7, 100);
    FUNC_6(VAR_12 == VAR_1, "expected CSTR_LESS_THAN, got %d\n", VAR_12);

    VAR_10 = FUNC_4(VAR_11, 0, VAR_3);
    FUNC_6(VAR_10, "VirtualFree failed with %u\n", FUNC_1());
}
