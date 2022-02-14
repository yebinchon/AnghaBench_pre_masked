
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp_var ;
typedef int tmp_dirW ;
typedef int buf ;
typedef float WCHAR ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,float*) ;
 int FUNC_4 () ;
 float* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,float*) ;
 int VAR_2 ;
 int FUNC_7 (int ,int ,char*,int,float*,int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (float*,float*) ;
 int FUNC_10 (float*,float const*) ;
 int FUNC_11 (float*) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void FUNC_16(char* VAR_3)
{
    DWORD VAR_4, VAR_5, VAR_6;
    WCHAR VAR_7[VAR_2], *VAR_8;
    WCHAR VAR_9[VAR_2];
    static const WCHAR VAR_10[] = {'f','o','o',0};

    FUNC_7(VAR_0,0,VAR_3,-1,VAR_9,sizeof(VAR_9)/sizeof(*VAR_9));
    VAR_6 = FUNC_11(VAR_9) + 1;
    FUNC_10(VAR_7, VAR_10);
    VAR_4 = FUNC_3(VAR_2, VAR_7);
    if (VAR_4 == 0 && FUNC_1() == VAR_1)
    {
        FUNC_15("GetTempPathW is not available\n");
        return;
    }
    FUNC_12(FUNC_9(VAR_7, VAR_9) == 0, "GetTempPathW returned an incorrect temporary path\n");
    FUNC_12(VAR_4 == FUNC_11(VAR_7), "returned length should be equal to the length of string\n");

    FUNC_10(VAR_7, VAR_10);
    VAR_4 = FUNC_3(1, VAR_7);
    FUNC_12(VAR_7[0] == 0, "unicode version should truncate the buffer to zero size\n");
    FUNC_12(VAR_4 >= VAR_6, "Expected >= %u, got %u\n", VAR_6, VAR_4);

    VAR_4 = FUNC_3(0, ((void*)0));
    FUNC_12(VAR_4 >= VAR_6, "Expected >= %u, got %u\n", VAR_6, VAR_4);

    FUNC_10(VAR_7, VAR_10);
    VAR_4 = FUNC_3(VAR_4, VAR_7);
    FUNC_12(FUNC_9(VAR_7, VAR_9) == 0, "GetTempPathW returned an incorrect temporary path\n");
    FUNC_12(VAR_4 == FUNC_11(VAR_7), "returned length should be equal to the length of string\n");

    for(VAR_4 = 0; VAR_4 < sizeof(VAR_7) / sizeof(VAR_7[0]); VAR_4++)
        VAR_7[VAR_4] = 'a';
    VAR_4 = FUNC_3(VAR_4, VAR_7);
    FUNC_12(FUNC_9(VAR_7, VAR_9) == 0, "GetTempPathW returned an incorrect temporary path\n");
    FUNC_12(VAR_4 == FUNC_11(VAR_7), "returned length should be equal to the length of string\n");

    VAR_5 = VAR_4 + 1;
    for(VAR_4++; VAR_4 < sizeof(VAR_7) / sizeof(VAR_7[0]); VAR_4++)
        FUNC_12(VAR_7[VAR_4] == '\0', "expected NULL at [%d], got 0x%x\n", VAR_4, VAR_7[VAR_4]);


    for(VAR_4 = 0; VAR_4 < sizeof(VAR_7) / sizeof(VAR_7[0]); VAR_4++)
        VAR_7[VAR_4] = 'a';
    VAR_4 = FUNC_3(VAR_5 / 2, VAR_7);
    FUNC_12(VAR_4 == VAR_5 || FUNC_8(VAR_4 == VAR_5 + 1) ,
       "expected %d, got %d\n", VAR_5, VAR_4);

    {





        char VAR_11[64];
        DWORD VAR_12 = FUNC_4();
        FUNC_0("TMP", VAR_11, sizeof(VAR_11));
        if (FUNC_14(VAR_11) == 2 && VAR_12 >= 0x00060002)
            return;
    }

    for(VAR_4 = 0; VAR_4 < VAR_5 / 2; VAR_4++)
        FUNC_12(VAR_7[VAR_4] == '\0', "expected NULL at [%d], got 0x%x\n", VAR_4, VAR_7[VAR_4]);
    for(; VAR_4 < sizeof(VAR_7) / sizeof(VAR_7[0]); VAR_4++)
        FUNC_12(VAR_7[VAR_4] == 'a', "expected 'a' at [%d], got 0x%x\n", VAR_4, VAR_7[VAR_4]);



    VAR_5 = 65534;
    VAR_8 = FUNC_5(FUNC_2(), 0, VAR_5 * sizeof(WCHAR));
    if (!VAR_8)
    {
        FUNC_13("Could not allocate memory for the test\n");
        return;
    }
    for(VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
        VAR_8[VAR_4] = 0xCC;
    VAR_4 = FUNC_3(VAR_5, VAR_8);
    FUNC_12(FUNC_9(VAR_8, VAR_9) == 0, "GetTempPathW returned an incorrect temporary path\n");
    FUNC_12(VAR_4 == FUNC_11(VAR_8), "returned length should be equal to the length of string\n");





    for(; VAR_4 < 32767; VAR_4++)
        FUNC_12(VAR_8[VAR_4] == '\0', "expected NULL at [%d], got 0x%x\n", VAR_4, VAR_8[VAR_4]);


    for(VAR_4++; VAR_4 < VAR_5; VAR_4++)
        FUNC_12(VAR_8[VAR_4] == 0xcc, "expected 0xcc at [%d], got 0x%x\n", VAR_4, VAR_8[VAR_4]);

    FUNC_6(FUNC_2(), 0, VAR_8);
}
