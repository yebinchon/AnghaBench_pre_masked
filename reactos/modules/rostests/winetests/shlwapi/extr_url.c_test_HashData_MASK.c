
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int expected3 ;
typedef int expected2 ;
typedef int expected ;
typedef scalar_t__ HRESULT ;
typedef int BYTE ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int*,int const*,int) ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (int*,int,int*,int) ;
 int FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    HRESULT VAR_2;
    BYTE VAR_3[16] = {0x51, 0x33, 0x4F, 0xA7, 0x45, 0x15, 0xF0, 0x52, 0x90,
                      0x2B, 0xE7, 0xF5, 0xFD, 0xE1, 0xA6, 0xA7};
    BYTE VAR_4[32];
    static const BYTE VAR_5[] = {0x54, 0x9C, 0x92, 0x55, 0xCD, 0x82, 0xFF,
                                    0xA1, 0x8E, 0x0F, 0xCF, 0x93, 0x14, 0xAA,
                                    0xE3, 0x2D};
    static const BYTE VAR_6[] = {0x54, 0x9C, 0x92, 0x55, 0xCD, 0x82, 0xFF,
                                     0xA1, 0x8E, 0x0F, 0xCF, 0x93, 0x14, 0xAA,
                                     0xE3, 0x2D, 0x47, 0xFC, 0x80, 0xB8, 0xD0,
                                     0x49, 0xE6, 0x13, 0x2A, 0x30, 0x51, 0x8D,
                                     0xF9, 0x4B, 0x07, 0xA6};
    static const BYTE VAR_7[] = {0x2B, 0xDC, 0x9A, 0x1B, 0xF0, 0x5A, 0xF9,
                                     0xC6, 0xBE, 0x94, 0x6D, 0xF3, 0x33, 0xC1,
                                     0x36, 0x07};
    int VAR_8;


    VAR_2 = FUNC_4(VAR_3, 16, VAR_4, 16);
    FUNC_3(VAR_2 == VAR_1, "Expected HashData to return S_OK, got 0x%08x\n", VAR_2);
    if(VAR_2 == VAR_1)
       FUNC_3(!FUNC_2(VAR_4, VAR_5, sizeof(VAR_5)),
          "Output buffer did not match expected contents\n");


    VAR_2 = FUNC_4(VAR_3, 16, VAR_4, 32);
    FUNC_3(VAR_2 == VAR_1, "Expected HashData to return S_OK, got 0x%08x\n", VAR_2);
    if(VAR_2 == VAR_1)
       FUNC_3(!FUNC_2(VAR_4, VAR_6, sizeof(VAR_6)),
          "Output buffer did not match expected contents\n");


    VAR_2 = FUNC_4(VAR_3, 8, VAR_4, 16);
    FUNC_3(VAR_2 == VAR_1, "Expected HashData to return S_OK, got 0x%08x\n", VAR_2);
    if(VAR_2 == VAR_1)
       FUNC_3(!FUNC_2(VAR_4, VAR_7, sizeof(VAR_7)),
          "Output buffer did not match expected contents\n");


    VAR_2 = FUNC_4(((void*)0), 0, ((void*)0), 0);
    FUNC_3(VAR_2 == VAR_0 || FUNC_1(VAR_2 == VAR_1),
       "Expected HashData to return E_INVALIDARG, got 0x%08x\n", VAR_2);

    VAR_2 = FUNC_4(VAR_3, 0, ((void*)0), 0);
    FUNC_3(VAR_2 == VAR_0 || FUNC_1(VAR_2 == VAR_1),
       "Expected HashData to return E_INVALIDARG, got 0x%08x\n", VAR_2);

    VAR_2 = FUNC_4(((void*)0), 0, VAR_4, 0);
    FUNC_3(VAR_2 == VAR_0 || FUNC_1(VAR_2 == VAR_1),
       "Expected HashData to return E_INVALIDARG, got 0x%08x\n", VAR_2);


    for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++)
        VAR_3[VAR_8] = 0x00;

    for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++)
        VAR_4[VAR_8] = 0xFF;

    VAR_2 = FUNC_4(VAR_3, 0, VAR_4, 0);
    FUNC_3(VAR_2 == VAR_1, "Expected HashData to return S_OK, got 0x%08x\n", VAR_2);


    for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_3); VAR_8++)
    {
        FUNC_3(VAR_3[VAR_8] == 0x00, "Expected the input buffer to be unchanged\n");
        if(VAR_3[VAR_8] != 0x00) break;
    }

    for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++)
    {
        FUNC_3(VAR_4[VAR_8] == 0xFF, "Expected the output buffer to be unchanged\n");
        if(VAR_4[VAR_8] != 0xFF) break;
    }


    VAR_2 = FUNC_4((BYTE *)0xdeadbeef, 0, (BYTE *)0xdeadbeef, 0);
    FUNC_3(VAR_2 == VAR_1, "Expected HashData to return S_OK, got 0x%08x\n", VAR_2);

    if (0)
    {
        VAR_2 = FUNC_4((BYTE *)0xdeadbeef, 1, (BYTE *)0xdeadbeef, 1);
        FUNC_5("HashData returned 0x%08x\n", VAR_2);
    }
}
