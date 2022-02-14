
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_5__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__ const*,int) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    BOOL VAR_2;
    SYSTEMTIME VAR_3;
    static const SYSTEMTIME VAR_4 = {2008, 7, 1, 28, 10, 5, 52, 0};
    static const WCHAR VAR_5[] =
        {'M','o','n',',',' ','2','8',' ','J','u','l',' ','2','0','0','8',' ',
         + '1','0',':','0','5',':','5','2',' ','G','M','T','\n',0};
    static const WCHAR VAR_6[] =
        {' ','m','o','n',' ','2','8',' ','j','u','l',' ','2','0','0','8',' ',
         '1','0',' ','0','5',' ','5','2','\n',0};
    DWORD VAR_7;

    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_2(VAR_5, ((void*)0));
    VAR_7 = FUNC_0();
    FUNC_5(!VAR_2, "WinHttpTimeToSystemTime succeeded\n");
    FUNC_5(VAR_7 == VAR_0, "got %u\n", VAR_7);

    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_2(((void*)0), &VAR_3);
    VAR_7 = FUNC_0();
    FUNC_5(!VAR_2, "WinHttpTimeToSystemTime succeeded\n");
    FUNC_5(VAR_7 == VAR_0, "got %u\n", VAR_7);

    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_2(VAR_5, &VAR_3);
    VAR_7 = FUNC_0();
    FUNC_5(VAR_2, "WinHttpTimeToSystemTime failed: %u\n", VAR_7);
    FUNC_5(VAR_7 == VAR_1 || FUNC_3(VAR_7 == 0xdeadbeef) , "got %u\n", VAR_7);
    FUNC_5(FUNC_4(&VAR_3, &VAR_4, sizeof(SYSTEMTIME)) == 0,
        "Returned SYSTEMTIME structure did not match expected SYSTEMTIME structure.\n");

    FUNC_1(0xdeadbeef);
    VAR_2 = FUNC_2(VAR_6, &VAR_3);
    VAR_7 = FUNC_0();
    FUNC_5(VAR_2, "WinHttpTimeToSystemTime failed: %u\n", VAR_7);
    FUNC_5(VAR_7 == VAR_1 || FUNC_3(VAR_7 == 0xdeadbeef) , "got %u\n", VAR_7);
    FUNC_5(FUNC_4(&VAR_3, &VAR_4, sizeof(SYSTEMTIME)) == 0,
        "Returned SYSTEMTIME structure did not match expected SYSTEMTIME structure.\n");
}
