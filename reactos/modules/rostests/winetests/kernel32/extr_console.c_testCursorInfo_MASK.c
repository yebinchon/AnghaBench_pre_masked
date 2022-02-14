
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwSize; int bVisible; } ;
typedef int * HANDLE ;
typedef TYPE_1__ CONSOLE_CURSOR_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(HANDLE VAR_1)
{
    BOOL VAR_2;
    CONSOLE_CURSOR_INFO VAR_3;

    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_0(((void*)0), ((void*)0));
    FUNC_3(!VAR_2, "Expected failure\n");
    FUNC_3(FUNC_1() == VAR_0, "GetLastError: expecting %u got %u\n",
       VAR_0, FUNC_1());

    FUNC_2(0xdeadbeef);
    VAR_3.dwSize = -1;
    VAR_2 = FUNC_0(((void*)0), &VAR_3);
    FUNC_3(!VAR_2, "Expected failure\n");
    FUNC_3(VAR_3.dwSize == -1, "Expected no change for dwSize\n");
    FUNC_3(FUNC_1() == VAR_0, "GetLastError: expecting %u got %u\n",
       VAR_0, FUNC_1());


    FUNC_2(0xdeadbeef);
    VAR_2 = FUNC_0(VAR_1, &VAR_3);
    FUNC_3(VAR_2, "Expected success\n");
    FUNC_3(VAR_3.dwSize == 25 ||
       VAR_3.dwSize == 12 ,
       "Expected 12 or 25, got %d\n", VAR_3.dwSize);
    FUNC_3(VAR_3.bVisible, "Expected the cursor to be visible\n");
    FUNC_3(FUNC_1() == 0xdeadbeef, "GetLastError: expecting %u got %u\n",
       0xdeadbeef, FUNC_1());


}
