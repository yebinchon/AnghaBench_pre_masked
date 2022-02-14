
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
struct TYPE_10__ {int X; int Y; } ;
struct TYPE_12__ {TYPE_1__ dwSize; } ;
struct TYPE_11__ {int X; int Y; } ;
typedef void* SHORT ;
typedef int HANDLE ;
typedef int DWORD ;
typedef TYPE_2__ COORD ;
typedef TYPE_3__ CONSOLE_SCREEN_BUFFER_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,TYPE_2__,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int*,int,TYPE_2__,int*) ;
 int FUNC_6 (int ,int*,int,TYPE_2__,int*) ;
 int FUNC_7 (int ,TYPE_2__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,int,int*,int *) ;
 int VAR_1 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (int ,TYPE_2__) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_16(HANDLE VAR_4)
{
    BOOL VAR_5;
    DWORD VAR_6;
    int VAR_7;
    DWORD VAR_8;
    COORD VAR_9;
    CONSOLE_SCREEN_BUFFER_INFO VAR_10;
    int VAR_11;
    WCHAR VAR_12[32];
    WORD VAR_13;

    if (!FUNC_4(932))
    {
        FUNC_14("Codepage 932 not available\n");
        return;
    }


    VAR_6 = FUNC_1();
    FUNC_9(0xdeadbeef);
    VAR_5 = FUNC_8(932);
    if (!VAR_5)
    {
        FUNC_14("SetConsoleOutputCP failed with last error %lu\n", FUNC_3());
        return;
    }


    VAR_5 = FUNC_2(VAR_4, &VAR_10);
    FUNC_12(VAR_5, "GetConsoleScreenBufferInfo failed\n");
    FUNC_15("csbi.dwSize.X:%d, csbi.dwSize.Y:%d\n", VAR_10.dwSize.X, VAR_10.dwSize.Y);
    VAR_11 = VAR_10.dwSize.X * 3 / 2;
    FUNC_15("count: %d\n", VAR_11);


    {

        VAR_9.X = VAR_9.Y = 0;
        FUNC_7(VAR_4, VAR_9);
        FUNC_13(VAR_4, VAR_9);
        for (VAR_7 = 0; VAR_7 < VAR_11; ++VAR_7)
        {
            VAR_5 = FUNC_10(VAR_4, VAR_2, FUNC_11(VAR_2), &VAR_8, ((void*)0));
            FUNC_12(VAR_5 && VAR_8 == FUNC_11(VAR_2), "WriteConsoleW failed\n");
        }


        FUNC_2(VAR_4, &VAR_10);
        VAR_8 = VAR_11 * 2;
        VAR_9.X = (SHORT)(VAR_8 % VAR_10.dwSize.X);
        VAR_9.Y = (SHORT)(VAR_8 / VAR_10.dwSize.X);
        FUNC_13(VAR_4, VAR_9);


        VAR_9.X = VAR_9.Y = 0;
        VAR_5 = FUNC_6(VAR_4, VAR_12, 3 * sizeof(WCHAR), VAR_9, &VAR_8);
        FUNC_12(VAR_5, "ReadConsoleOutputCharacterW failed\n");
        FUNC_12(VAR_8 == 3, "len was: %ld\n", VAR_8);
        FUNC_12(VAR_12[0] == 0x414, "str[0] was: 0x%04X\n", VAR_12[0]);
        FUNC_12(VAR_12[1] == 0x414, "str[1] was: 0x%04X\n", VAR_12[1]);
        FUNC_12(VAR_12[2] == 0x414, "str[2] was: 0x%04X\n", VAR_12[2]);


        VAR_9.X = 1;
        VAR_9.Y = 0;
        VAR_5 = FUNC_7(VAR_4, VAR_9);
        FUNC_12(VAR_5, "SetConsoleCursorPosition failed\n");
        FUNC_13(VAR_4, VAR_9);


        VAR_9.X = VAR_9.Y = 0;
        FUNC_0(VAR_4, L' ', VAR_10.dwSize.X * VAR_10.dwSize.Y, VAR_9, &VAR_8);


        VAR_9.X = 1;
        VAR_9.Y = 0;
        FUNC_7(VAR_4, VAR_9);
        FUNC_13(VAR_4, VAR_9);
        for (VAR_7 = 0; VAR_7 < VAR_11; ++VAR_7)
        {
            VAR_5 = FUNC_10(VAR_4, VAR_2, FUNC_11(VAR_2), &VAR_8, ((void*)0));
            FUNC_12(VAR_5 && VAR_8 == FUNC_11(VAR_2), "WriteConsoleW failed\n");
        }


        VAR_8 = VAR_10.dwSize.X + (VAR_11 - (VAR_10.dwSize.X - 1) / 2) * 2;
        VAR_9.X = (SHORT)(VAR_8 % VAR_10.dwSize.X);
        VAR_9.Y = (SHORT)(VAR_8 / VAR_10.dwSize.X);
        FUNC_13(VAR_4, VAR_9);


        VAR_9.X = 0;
        VAR_9.Y = 0;
        VAR_5 = FUNC_6(VAR_4, VAR_12, 3 * sizeof(WCHAR), VAR_9, &VAR_8);
        FUNC_12(VAR_5, "ReadConsoleOutputCharacterW failed\n");
        FUNC_12(VAR_8 == 4, "len was: %ld\n", VAR_8);
        FUNC_12(VAR_12[0] == L' ', "str[0] was: 0x%04X\n", VAR_12[0]);
        FUNC_12(VAR_12[1] == 0x414, "str[1] was: 0x%04X\n", VAR_12[1]);
        FUNC_12(VAR_12[2] == 0x414, "str[2] was: 0x%04X\n", VAR_12[2]);
    }


    {

        VAR_9.X = VAR_9.Y = 0;
        FUNC_7(VAR_4, VAR_9);
        FUNC_13(VAR_4, VAR_9);
        for (VAR_7 = 0; VAR_7 < VAR_11; ++VAR_7)
        {
            VAR_5 = FUNC_10(VAR_4, VAR_3, FUNC_11(VAR_3), &VAR_8, ((void*)0));
            FUNC_12(VAR_5 && VAR_8 == FUNC_11(VAR_3), "WriteConsoleW failed\n");
        }


        VAR_8 = VAR_11 * 2;
        VAR_9.X = (SHORT)(VAR_8 % VAR_10.dwSize.X);
        VAR_9.Y = (SHORT)(VAR_8 / VAR_10.dwSize.X);
        FUNC_13(VAR_4, VAR_9);


        VAR_9.X = 1;
        VAR_9.Y = 0;
        VAR_5 = FUNC_7(VAR_4, VAR_9);
        FUNC_12(VAR_5, "SetConsoleCursorPosition failed\n");
        FUNC_13(VAR_4, VAR_9);


        VAR_9.X = VAR_9.Y = 0;
        VAR_5 = FUNC_0(VAR_4, L' ', VAR_10.dwSize.X * VAR_10.dwSize.Y, VAR_9, &VAR_8);
        FUNC_12(VAR_5, "FillConsoleOutputCharacterW failed\n");
        FUNC_12(VAR_8 == VAR_10.dwSize.X * VAR_10.dwSize.Y, "len was: %ld\n", VAR_8);


        VAR_9.X = 1;
        VAR_9.Y = 0;
        FUNC_7(VAR_4, VAR_9);
        FUNC_13(VAR_4, VAR_9);
        for (VAR_7 = 0; VAR_7 < VAR_11; ++VAR_7)
        {
            VAR_5 = FUNC_10(VAR_4, VAR_3, FUNC_11(VAR_3), &VAR_8, ((void*)0));
            FUNC_12(VAR_5 && VAR_8 == FUNC_11(VAR_3), "WriteConsoleW failed\n");
        }


        VAR_8 = VAR_10.dwSize.X + (VAR_11 - (VAR_10.dwSize.X - 1) / 2) * 2;
        VAR_9.X = (SHORT)(VAR_8 % VAR_10.dwSize.X);
        VAR_9.Y = (SHORT)(VAR_8 / VAR_10.dwSize.X);
        FUNC_13(VAR_4, VAR_9);


        VAR_9.X = VAR_9.Y = 0;
        VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_10.dwSize.X * VAR_10.dwSize.Y, VAR_9, &VAR_8);
        FUNC_12(VAR_5, "FillConsoleOutputCharacterW failed\n");
        FUNC_12(VAR_8 == VAR_10.dwSize.X * VAR_10.dwSize.Y, "len was: %ld\n", VAR_8);


        VAR_9.X = VAR_9.Y = 0;
        VAR_5 = FUNC_6(VAR_4, VAR_12, 3 * sizeof(WCHAR), VAR_9, &VAR_8);
        FUNC_12(VAR_5, "ReadConsoleOutputCharacterW failed\n");
        FUNC_12(VAR_8 == 3, "len was: %ld\n", VAR_8);
        FUNC_12(VAR_12[0] == VAR_1, "str[0] was: 0x%04X\n", VAR_12[0]);
        FUNC_12(VAR_12[1] == VAR_1, "str[1] was: 0x%04X\n", VAR_12[1]);
        FUNC_12(VAR_12[2] == VAR_1, "str[2] was: 0x%04X\n", VAR_12[2]);


        VAR_5 = FUNC_5(VAR_4, &VAR_13, 1, VAR_9, &VAR_8);
        FUNC_12(VAR_5, "ReadConsoleOutputAttribute failed\n");
        FUNC_12(VAR_13 == VAR_0, "attr was: %d\n", VAR_13);
        FUNC_12(VAR_8 == 1, "len was %ld\n", VAR_8);


        VAR_9.X = 1;
        VAR_9.Y = 0;
        FUNC_7(VAR_4, VAR_9);
        FUNC_13(VAR_4, VAR_9);
        VAR_5 = FUNC_10(VAR_4, VAR_3, FUNC_11(VAR_3), &VAR_8, ((void*)0));
        FUNC_12(VAR_5 && VAR_8 == FUNC_11(VAR_3), "WriteConsoleW failed\n");


        VAR_5 = FUNC_5(VAR_4, &VAR_13, 1, VAR_9, &VAR_8);
        FUNC_12(VAR_5, "ReadConsoleOutputAttribute failed\n");
        FUNC_12(VAR_13 == VAR_0, "attr was: %d\n", VAR_13);
        FUNC_12(VAR_8 == 1, "len was %ld\n", VAR_8);


        VAR_9.X = 3;
        VAR_9.Y = 0;
        FUNC_13(VAR_4, VAR_9);


        VAR_9.X = VAR_9.Y = 0;
        VAR_5 = FUNC_6(VAR_4, VAR_12, 3 * sizeof(WCHAR), VAR_9, &VAR_8);
        FUNC_12(VAR_5, "ReadConsoleOutputCharacterW failed\n");
        FUNC_12(VAR_8 == 4, "len was: %ld\n", VAR_8);
        FUNC_12(VAR_12[0] == L' ', "str[0] was: 0x%04X\n", VAR_12[0]);
        FUNC_12(VAR_12[1] == 0x9580, "str[1] was: 0x%04X\n", VAR_12[1]);
        FUNC_12(VAR_12[2] == L' ', "str[2] was: 0x%04X\n", VAR_12[2]);
    }


    FUNC_8(VAR_6);
}
