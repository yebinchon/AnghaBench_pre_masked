
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbSize; int member_0; } ;
typedef TYPE_1__ MENUINFO ;
typedef int * HMENU ;
typedef int DWORD ;
typedef int BOOL ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    HMENU VAR_1;
    MENUINFO VAR_2 = {0};
    BOOL VAR_3;
    DWORD VAR_4;

    if (!&FUNC_7)
    {
        FUNC_8("GetMenuInfo is not available\n");
        return;
    }


    VAR_1 = FUNC_0();
    FUNC_4( VAR_1);

    FUNC_3(0xdeadbeef);
    VAR_3 = FUNC_7( VAR_1, ((void*)0));
    VAR_4= FUNC_2();
    FUNC_6( !VAR_3, "GetMenuInfo() should have failed\n");
    FUNC_6( VAR_4 == VAR_0 ||
        FUNC_5(VAR_4 == 0xdeadbeef),
        "GetMenuInfo() error got %u expected %u\n", VAR_4, VAR_0);
    FUNC_3(0xdeadbeef);
    VAR_2.cbSize = 0;
    VAR_3 = FUNC_7( VAR_1, &VAR_2);
    VAR_4= FUNC_2();
    FUNC_6( !VAR_3, "GetMenuInfo() should have failed\n");
    FUNC_6( VAR_4 == VAR_0 ||
        FUNC_5(VAR_4 == 0xdeadbeef),
        "GetMenuInfo() error got %u expected %u\n", VAR_4, VAR_0);
    FUNC_3(0xdeadbeef);
    VAR_2.cbSize = sizeof( MENUINFO);
    VAR_3 = FUNC_7( VAR_1, &VAR_2);
    VAR_4= FUNC_2();
    FUNC_6( VAR_3, "GetMenuInfo() should have succeeded\n");
    FUNC_6( VAR_4 == 0xdeadbeef, "GetMenuInfo() error got %u\n", VAR_4);
    FUNC_3(0xdeadbeef);
    VAR_2.cbSize = 0;
    VAR_3 = FUNC_7( ((void*)0), &VAR_2);
    VAR_4= FUNC_2();
    FUNC_6( !VAR_3, "GetMenuInfo() should have failed\n");
    FUNC_6( VAR_4 == VAR_0 ||
        FUNC_5(VAR_4 == 0xdeadbeef),
        "GetMenuInfo() error got %u expected %u\n", VAR_4, VAR_0);

    FUNC_1( VAR_1);
    return;
}
