
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf ;
typedef int UINT ;
struct TYPE_4__ {int IWICBitmapSource_iface; } ;
typedef int IWICPalette ;
typedef int IWICFormatConverter ;
typedef int HRESULT ;
typedef TYPE_1__ BitmapTestSrc ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (int *,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int,int,scalar_t__*) ;
 int FUNC_4 (int *,int *,int *,int ,int *,double,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int **) ;
 int FUNC_7 (int ,int **) ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_10 ;
 int FUNC_11 (scalar_t__*,int,int) ;
 int FUNC_12 (int,char*,...) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_13(void)
{
    HRESULT VAR_12;
    BitmapTestSrc *VAR_13;
    IWICFormatConverter *VAR_14;
    IWICPalette *VAR_15;
    UINT VAR_16, VAR_17;
    BYTE VAR_18[32 * 2 * 3];

    FUNC_0(&VAR_11, &VAR_13);

    VAR_12 = FUNC_7(VAR_10, &VAR_15);
    FUNC_12(VAR_12 == VAR_3, "CreatePalette error %#x\n", VAR_12);
    VAR_16 = 0xdeadbeef;
    VAR_12 = FUNC_8(VAR_15, &VAR_16);
    FUNC_12(VAR_12 == VAR_3, "GetColorCount error %#x\n", VAR_12);
    FUNC_12(VAR_16 == 0, "expected 0, got %u\n", VAR_16);


    VAR_12 = FUNC_6(VAR_10, &VAR_14);
    FUNC_12(VAR_12 == VAR_3, "CreateFormatConverter error %#x\n", VAR_12);
    VAR_12 = FUNC_4(VAR_14, &VAR_13->IWICBitmapSource_iface,
                                        &VAR_1, VAR_4,
                                        ((void*)0), 0.0, VAR_5);
    FUNC_12(VAR_12 == VAR_3, "Initialize error %#x\n", VAR_12);
    VAR_12 = FUNC_2(VAR_14, VAR_15);
    FUNC_12(VAR_12 == 0xdeadbeef, "unexpected error %#x\n", VAR_12);
    VAR_12 = FUNC_3(VAR_14, ((void*)0), 32 * 3, sizeof(VAR_18), VAR_18);
    FUNC_12(VAR_12 == VAR_3, "CopyPixels error %#x\n", VAR_12);
    FUNC_5(VAR_14);


    VAR_12 = FUNC_6(VAR_10, &VAR_14);
    FUNC_12(VAR_12 == VAR_3, "CreateFormatConverter error %#x\n", VAR_12);
    VAR_12 = FUNC_4(VAR_14, &VAR_13->IWICBitmapSource_iface,
                                        &VAR_2, VAR_4,
                                        ((void*)0), 0.0, VAR_5);
    FUNC_12(VAR_12 == VAR_0, "unexpected error %#x\n", VAR_12);
    VAR_12 = FUNC_2(VAR_14, VAR_15);
    FUNC_12(VAR_12 == VAR_9, "unexpected error %#x\n", VAR_12);
    VAR_12 = FUNC_3(VAR_14, ((void*)0), 32, sizeof(VAR_18), VAR_18);
    FUNC_12(VAR_12 == VAR_9, "unexpected error %#x\n", VAR_12);
    FUNC_5(VAR_14);


    VAR_12 = FUNC_6(VAR_10, &VAR_14);
    FUNC_12(VAR_12 == VAR_3, "CreateFormatConverter error %#x\n", VAR_12);
    VAR_12 = FUNC_4(VAR_14, &VAR_13->IWICBitmapSource_iface,
                                        &VAR_2, VAR_4,
                                        VAR_15, 0.0, VAR_5);
    FUNC_12(VAR_12 == VAR_3, "Initialize error %#x\n", VAR_12);
    VAR_12 = FUNC_2(VAR_14, VAR_15);
    FUNC_12(VAR_12 == VAR_3, "CopyPalette error %#x\n", VAR_12);
    VAR_16 = 0xdeadbeef;
    VAR_12 = FUNC_8(VAR_15, &VAR_16);
    FUNC_12(VAR_12 == VAR_3, "GetColorCount error %#x\n", VAR_12);
    FUNC_12(VAR_16 == 0, "expected 0, got %u\n", VAR_16);
    FUNC_11(VAR_18, 0xaa, sizeof(VAR_18));
    VAR_12 = FUNC_3(VAR_14, ((void*)0), 32, sizeof(VAR_18), VAR_18);
    FUNC_12(VAR_12 == VAR_3, "CopyPixels error %#x\n", VAR_12);
    VAR_16 = 0;
    for (VAR_17 = 0; VAR_17 < 32 * 2; VAR_17++)
        if (VAR_18[VAR_17] != 0) VAR_16++;
    FUNC_12(VAR_16 == 0, "expected 0\n");
    FUNC_5(VAR_14);


    VAR_12 = FUNC_6(VAR_10, &VAR_14);
    FUNC_12(VAR_12 == VAR_3, "CreateFormatConverter error %#x\n", VAR_12);
    VAR_12 = FUNC_4(VAR_14, &VAR_13->IWICBitmapSource_iface,
                                        &VAR_2, VAR_4,
                                        ((void*)0), 0.0, VAR_6);
    FUNC_12(VAR_12 == VAR_3, "Initialize error %#x\n", VAR_12);
    VAR_12 = FUNC_2(VAR_14, VAR_15);
    FUNC_12(VAR_12 == VAR_3, "CopyPalette error %#x\n", VAR_12);
    VAR_16 = 0xdeadbeef;
    VAR_12 = FUNC_8(VAR_15, &VAR_16);
    FUNC_12(VAR_12 == VAR_3, "GetColorCount error %#x\n", VAR_12);
    FUNC_12(VAR_16 == 16, "expected 16, got %u\n", VAR_16);
    VAR_12 = FUNC_3(VAR_14, ((void*)0), 32, sizeof(VAR_18), VAR_18);
    FUNC_12(VAR_12 == VAR_3, "CopyPixels error %#x\n", VAR_12);
    VAR_16 = 0;
    for (VAR_17 = 0; VAR_17 < 32 * 2; VAR_17++)
        if (VAR_18[VAR_17] != 0) VAR_16++;
    FUNC_12(VAR_16 != 0, "expected != 0\n");
    FUNC_5(VAR_14);


    VAR_12 = FUNC_6(VAR_10, &VAR_14);
    FUNC_12(VAR_12 == VAR_3, "CreateFormatConverter error %#x\n", VAR_12);
    VAR_12 = FUNC_4(VAR_14, &VAR_13->IWICBitmapSource_iface,
                                        &VAR_2, VAR_4,
                                        VAR_15, 0.0, VAR_7);
    FUNC_12(VAR_12 == VAR_3, "Initialize error %#x\n", VAR_12);
    VAR_12 = FUNC_2(VAR_14, VAR_15);
    FUNC_12(VAR_12 == VAR_3, "CopyPalette error %#x\n", VAR_12);
    VAR_16 = 0xdeadbeef;
    VAR_12 = FUNC_8(VAR_15, &VAR_16);
    FUNC_12(VAR_12 == VAR_3, "GetColorCount error %#x\n", VAR_12);
    FUNC_12(VAR_16 == 16, "expected 16, got %u\n", VAR_16);
    VAR_12 = FUNC_3(VAR_14, ((void*)0), 32, sizeof(VAR_18), VAR_18);
    FUNC_12(VAR_12 == VAR_3, "CopyPixels error %#x\n", VAR_12);
    VAR_16 = 0;
    for (VAR_17 = 0; VAR_17 < 32 * 2; VAR_17++)
        if (VAR_18[VAR_17] != 0) VAR_16++;
    FUNC_12(VAR_16 != 0, "expected != 0\n");
    FUNC_5(VAR_14);


    VAR_12 = FUNC_6(VAR_10, &VAR_14);
    FUNC_12(VAR_12 == VAR_3, "CreateFormatConverter error %#x\n", VAR_12);
    VAR_12 = FUNC_4(VAR_14, &VAR_13->IWICBitmapSource_iface,
                                        &VAR_2, VAR_4,
                                        VAR_15, 0.0, VAR_8);
    FUNC_12(VAR_12 == VAR_3, "Initialize error %#x\n", VAR_12);
    VAR_12 = FUNC_2(VAR_14, VAR_15);
    FUNC_12(VAR_12 == VAR_3, "CopyPalette error %#x\n", VAR_12);
    VAR_16 = 0xdeadbeef;
    VAR_12 = FUNC_8(VAR_15, &VAR_16);
    FUNC_12(VAR_12 == VAR_3, "GetColorCount error %#x\n", VAR_12);
    FUNC_12(VAR_16 == 16, "expected 16, got %u\n", VAR_16);
    VAR_12 = FUNC_3(VAR_14, ((void*)0), 32, sizeof(VAR_18), VAR_18);
    FUNC_12(VAR_12 == VAR_3, "CopyPixels error %#x\n", VAR_12);
    VAR_16 = 0;
    for (VAR_17 = 0; VAR_17 < 32 * 2; VAR_17++)
        if (VAR_18[VAR_17] != 0) VAR_16++;
    FUNC_12(VAR_16 != 0, "expected != 0\n");
    FUNC_5(VAR_14);


    VAR_12 = FUNC_6(VAR_10, &VAR_14);
    FUNC_12(VAR_12 == VAR_3, "CreateFormatConverter error %#x\n", VAR_12);
    VAR_12 = FUNC_4(VAR_14, &VAR_13->IWICBitmapSource_iface,
                                        &VAR_2, VAR_4,
                                        ((void*)0), 0.0, VAR_8);
    FUNC_12(VAR_12 == VAR_3 || FUNC_10(VAR_12 == VAR_0) , "Initialize error %#x\n", VAR_12);
    if (VAR_12 == VAR_3)
    {
        VAR_12 = FUNC_2(VAR_14, VAR_15);
        FUNC_12(VAR_12 == VAR_3, "CopyPalette error %#x\n", VAR_12);
        VAR_16 = 0xdeadbeef;
        VAR_12 = FUNC_8(VAR_15, &VAR_16);
        FUNC_12(VAR_12 == VAR_3, "GetColorCount error %#x\n", VAR_12);
        FUNC_12(VAR_16 == 8, "expected 8, got %u\n", VAR_16);
        VAR_12 = FUNC_3(VAR_14, ((void*)0), 32, sizeof(VAR_18), VAR_18);
        FUNC_12(VAR_12 == VAR_3, "CopyPixels error %#x\n", VAR_12);
        VAR_16 = 0;
        for (VAR_17 = 0; VAR_17 < 32 * 2; VAR_17++)
            if (VAR_18[VAR_17] != 0) VAR_16++;
        FUNC_12(VAR_16 != 0, "expected != 0\n");
    }
    FUNC_5(VAR_14);

    FUNC_9(VAR_15);
    FUNC_1(VAR_13);
}
