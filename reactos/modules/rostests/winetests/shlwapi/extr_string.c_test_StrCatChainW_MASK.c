
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int deadbeefW ;
typedef int deadW ;
typedef int buf ;
typedef char WCHAR ;
typedef int DWORD ;


 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*,int,int,char const*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    static const WCHAR VAR_0[] = {'D','e','A','d','B','e','E','f',0};
    static const WCHAR VAR_1[] = {'D','e','A','d',0};
    static const WCHAR VAR_2[] = {'B','e','E','f',0};

    WCHAR VAR_3[32 + 1];
    DWORD VAR_4;

    if (!&FUNC_4)
    {
        FUNC_5("StrCatChainW is not available\n");
        return;
    }


    VAR_4 = FUNC_4(((void*)0), 0, 0, VAR_2);
    FUNC_3(VAR_4 == 0, "Expected StrCatChainW to return 0, got %u\n", VAR_4);


    FUNC_2(VAR_3, 0x11, sizeof(VAR_3));
    VAR_4 = FUNC_4(VAR_3, 0, 0, VAR_2);
    FUNC_3(VAR_4 == 0, "Expected StrCatChainW to return 0, got %u\n", VAR_4);
    FUNC_3(VAR_3[0] == 0x1111, "Expected buf[0] = 0x1111, got %x\n", VAR_3[0]);

    FUNC_1(VAR_3, VAR_0, sizeof(VAR_0));
    VAR_4 = FUNC_4(VAR_3, 0, -1, VAR_2);
    FUNC_3(VAR_4 == 8, "Expected StrCatChainW to return 8, got %u\n", VAR_4);
    FUNC_3(!FUNC_0(VAR_3, VAR_0, sizeof(VAR_0)), "Buffer contains wrong data\n");


    FUNC_2(VAR_3, 0x11, sizeof(VAR_3));
    VAR_4 = FUNC_4(VAR_3, 32, 0, VAR_1);
    FUNC_3(VAR_4 == 4, "Expected StrCatChainW to return 4, got %u\n", VAR_4);
    FUNC_3(!FUNC_0(VAR_3, VAR_1, sizeof(VAR_1)), "Buffer contains wrong data\n");

    VAR_4 = FUNC_4(VAR_3, 32, -1, VAR_2);
    FUNC_3(VAR_4 == 8, "Expected StrCatChainW to return 8, got %u\n", VAR_4);
    FUNC_3(!FUNC_0(VAR_3, VAR_0, sizeof(VAR_0)), "Buffer contains wrong data\n");


    FUNC_2(VAR_3, 0x11, sizeof(VAR_3));
    VAR_4 = FUNC_4(VAR_3, 32, 0, VAR_1);
    FUNC_3(VAR_4 == 4, "Expected StrCatChainW to return 4, got %u\n", VAR_4);
    FUNC_3(!FUNC_0(VAR_3, VAR_1, sizeof(VAR_1)), "Buffer contains wrong data\n");

    VAR_4 = FUNC_4(VAR_3, 32, 4, VAR_2);
    FUNC_3(VAR_4 == 8, "Expected StrCatChainW to return 8, got %u\n", VAR_4);
    FUNC_3(!FUNC_0(VAR_3, VAR_0, sizeof(VAR_0)), "Buffer contains wrong data\n");


    FUNC_2(VAR_3, 0x11, sizeof(VAR_3));
    VAR_4 = FUNC_4(VAR_3, 5, 0, VAR_1);
    FUNC_3(VAR_4 == 4, "Expected StrCatChainW to return 4, got %u\n", VAR_4);
    FUNC_3(!FUNC_0(VAR_3, VAR_1, sizeof(VAR_1)), "Buffer contains wrong data\n");


    FUNC_2(VAR_3, 0x11, sizeof(VAR_3));
    VAR_4 = FUNC_4(VAR_3, 4, 0, VAR_1);
    if (VAR_4 == 4)
    {



        FUNC_5("Windows2000/XP behaviour detected for StrCatChainW, skipping tests\n");
        return;
    }
    FUNC_3(VAR_4 == 3, "Expected StrCatChainW to return 3, got %u\n", VAR_4);
    FUNC_3(!FUNC_0(VAR_3, VAR_1, 3 * sizeof(WCHAR)), "Buffer contains wrong data\n");
    FUNC_3(!VAR_3[3], "String is not nullterminated\n");
    FUNC_3(VAR_3[4] == 0x1111, "Expected buf[4] = 0x1111, got %x\n", VAR_3[4]);


    VAR_4 = FUNC_4(VAR_3, 4, 1, VAR_2);
    FUNC_3(VAR_4 == 3, "Expected StrCatChainW to return 3, got %u\n", VAR_4);
    FUNC_3(VAR_3[0] == 'D', "Expected buf[0] = 'D', got %x\n", VAR_3[0]);
    FUNC_3(VAR_3[1] == 'B', "Expected buf[1] = 'B', got %x\n", VAR_3[1]);
    FUNC_3(VAR_3[2] == 'e', "Expected buf[2] = 'e', got %x\n", VAR_3[2]);
    FUNC_3(!VAR_3[3], "String is not nullterminated\n");
    FUNC_3(VAR_3[4] == 0x1111, "Expected buf[4] = 0x1111, got %x\n", VAR_3[4]);


    FUNC_2(VAR_3, 0x11, sizeof(VAR_3));
    FUNC_1(VAR_3, VAR_0, sizeof(VAR_0));
    FUNC_1(VAR_3 + 9, VAR_1, sizeof(VAR_1));
    VAR_4 = FUNC_4(VAR_3, 9, 8, VAR_2);
    FUNC_3(VAR_4 == 8, "Expected StrCatChainW to return 8, got %u\n", VAR_4);
    FUNC_3(!FUNC_0(VAR_3, VAR_0, sizeof(VAR_0)), "Buffer contains wrong data\n");
    FUNC_3(!FUNC_0(VAR_3 + 9, VAR_1, sizeof(VAR_1)), "Buffer contains wrong data\n");


    VAR_4 = FUNC_4(VAR_3, 9, 9, VAR_2);
    FUNC_3(VAR_4 == 8, "Expected StrCatChainW to return 8, got %u\n", VAR_4);
    FUNC_3(!FUNC_0(VAR_3, VAR_0, sizeof(VAR_0)), "Buffer contains wrong data\n");
    FUNC_3(!FUNC_0(VAR_3 + 9, VAR_1, sizeof(VAR_1)), "Buffer contains wrong data\n");


    VAR_4 = FUNC_4(VAR_3, 9, 10, VAR_2);
    FUNC_3(VAR_4 == 10, "Expected StrCatChainW to return 10, got %u\n", VAR_4);
    FUNC_3(!FUNC_0(VAR_3, VAR_0, sizeof(VAR_0)), "Buffer contains wrong data\n");
    FUNC_3(!FUNC_0(VAR_3 + 9, VAR_1, sizeof(VAR_1)), "Buffer contains wrong data\n");


    FUNC_1(VAR_3, VAR_0, sizeof(VAR_0));
    VAR_4 = FUNC_4(VAR_3, 5, -1, VAR_1);
    FUNC_3(VAR_4 == 8, "Expected StrCatChainW to return 8, got %u\n", VAR_4);
    FUNC_3(!FUNC_0(VAR_3, VAR_0, sizeof(VAR_0)), "Buffer contains wrong data\n");

    VAR_4 = FUNC_4(VAR_3, 5, 5, VAR_1);
    FUNC_3(VAR_4 == 4, "Expected StrCatChainW to return 4, got %u\n", VAR_4);
    FUNC_3(!FUNC_0(VAR_3, VAR_1, sizeof(VAR_1)), "Buffer contains wrong data\n");
    FUNC_3(VAR_3[5] == 'e', "Expected buf[5] = 'e', got %x\n", VAR_3[5]);

    VAR_4 = FUNC_4(VAR_3, 5, 6, VAR_1);
    FUNC_3(VAR_4 == 6, "Expected StrCatChainW to return 6, got %u\n", VAR_4);
    FUNC_3(!FUNC_0(VAR_3, VAR_1, sizeof(VAR_1)), "Buffer contains wrong data\n");
    FUNC_3(VAR_3[5] == 'e', "Expected buf[5] = 'e', got %x\n", VAR_3[5]);
}
