
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int lpszFontSearch ;
typedef int lpszFontPath ;
struct TYPE_7__ {char* cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef int WCHAR ;
struct TYPE_8__ {int Length; int Buffer; } ;
typedef TYPE_2__ UNICODE_STRING ;
typedef int ULONG ;
typedef int PVOID ;
typedef int INT ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int,int,int ,int ,int *) ;
 int FUNC_4 (int *,TYPE_2__*,int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int,char*) ;
 int FUNC_9 (int *,int,int *) ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (char*) ;

void FUNC_12()
{
    WCHAR VAR_2[VAR_1];
    WCHAR VAR_3[VAR_1];

    INT VAR_4;
    UNICODE_STRING VAR_5;
    WIN32_FIND_DATAW VAR_6;
    HANDLE VAR_7;
    ULONG VAR_8;


    FUNC_2(VAR_2, VAR_1);
    FUNC_8(VAR_2, sizeof(VAR_2), L"\\Fonts\\");


    FUNC_9(VAR_3, sizeof(VAR_3), VAR_2);
    FUNC_8(VAR_3, sizeof(VAR_3), L"*.ttf");

    VAR_7 = FUNC_0(VAR_3, &VAR_6);

    if (VAR_7 == VAR_0)
    {
        FUNC_11("Unable to find fonts in Font directory!\n");
        return;
    }


    FUNC_8(VAR_2, sizeof(VAR_2), VAR_6.cFileName);


    FUNC_7(0xdeaddead);
    FUNC_6(&VAR_5, ((void*)0));
    FUNC_4(VAR_2, &VAR_5, ((void*)0), ((void*)0));
    VAR_8 = 0;
    VAR_4 = FUNC_3(VAR_5.Buffer, VAR_8, 1, 0, 0, 0);

    FUNC_10(VAR_4 == 0, "Expected 0 files added. Added: %d\n", VAR_4);
    FUNC_10(FUNC_1() == 0xdeaddead, "Expected 0xdeaddead. Obtained: 0x%lx\n", FUNC_1());

    FUNC_5(&VAR_5);


    FUNC_7(0xdeaddead);
    FUNC_6(&VAR_5, ((void*)0));
    FUNC_4(VAR_2, &VAR_5, ((void*)0), ((void*)0));
    VAR_8 = VAR_5.Length / sizeof(WCHAR);
    VAR_4 = FUNC_3(VAR_5.Buffer, VAR_8, 1, 0, 0, 0);

    FUNC_10(VAR_4 == 0, "Expected 0 files added. Added: %d\n", VAR_4);
    FUNC_10(FUNC_1() == 0xdeaddead, "Expected 0xdeaddead. Obtained: 0x%lx\n", FUNC_1());

    FUNC_5(&VAR_5);


    FUNC_7(0xdeaddead);
    FUNC_6(&VAR_5, ((void*)0));
    FUNC_4(VAR_2, &VAR_5, ((void*)0), ((void*)0));
    VAR_8 = VAR_5.Length / sizeof(WCHAR) + 1;
    VAR_4 = FUNC_3(VAR_5.Buffer, VAR_8, 1, 0, 0, 0);

    FUNC_10(VAR_4 == 1, "Expected 1 files added. Added: %d\n", VAR_4);
    FUNC_10(FUNC_1() == 0xdeaddead, "Expected 0xdeaddead. Obtained: 0x%lx\n", FUNC_1());

    FUNC_5(&VAR_5);


    FUNC_7(0xdeadbeef);
    VAR_4 = FUNC_3((PVOID)-4, 123, 1, 0, 0, ((void*)0));

    FUNC_10(VAR_4 == 0, "Expected 0 files added. Added: %d\n", VAR_4);
    FUNC_10(FUNC_1() == 0xdeadbeef, "Expected 0xdeadbeef. Obtained: 0x%lx\n", FUNC_1());
}
