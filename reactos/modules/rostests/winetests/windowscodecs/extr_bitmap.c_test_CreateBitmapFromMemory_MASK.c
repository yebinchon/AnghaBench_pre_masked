
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int orig_data3x3 ;
typedef int data3x3 ;
typedef int data ;
typedef int UINT ;
typedef int IWICBitmap ;
typedef int HRESULT ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int,int,int*) ;
 int FUNC_1 (int *,int*,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int,int *,int,int,int*,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_7(void)
{
    BYTE VAR_5[27] = {
        128,128,255, 128,128,128, 128,255,128,
        128,128,128, 128,128,128, 255,255,255,
        255,128,128, 255,255,255, 255,255,255 };
    BYTE VAR_6[27];
    BYTE VAR_7[27] = {
        128,128,255, 128,128,128, 128,255,128,
        0,0,0, 0,128,128, 255,255,255,
        255,128,128, 255,0,0, 0,0,0 };
    BYTE VAR_8[27];
    HRESULT VAR_9;
    IWICBitmap *VAR_10;
    UINT VAR_11, VAR_12, VAR_13;

    FUNC_4(VAR_6, VAR_5, sizeof(VAR_6));

    VAR_9 = FUNC_3(VAR_4, 3, 3, &VAR_1,
                                                   0, 0, ((void*)0), &VAR_10);
    FUNC_6(VAR_9 == VAR_0, "expected E_INVALIDARG, got %#x\n", VAR_9);

    VAR_9 = FUNC_3(VAR_4, 3, 3, &VAR_1,
                                                   0, sizeof(VAR_6), VAR_6, &VAR_10);
    FUNC_6(VAR_9 == VAR_0, "expected E_INVALIDARG, got %#x\n", VAR_9);

    VAR_9 = FUNC_3(VAR_4, 3, 3, &VAR_1,
                                                   6, sizeof(VAR_6), VAR_6, &VAR_10);
    FUNC_6(VAR_9 == VAR_0, "expected E_INVALIDARG, got %#x\n", VAR_9);

    VAR_9 = FUNC_3(VAR_4, 3, 3, &VAR_1,
                                                   12, sizeof(VAR_6), VAR_6, &VAR_10);
    FUNC_6(VAR_9 == VAR_3, "expected WINCODEC_ERR_INSUFFICIENTBUFFER, got %#x\n", VAR_9);

    VAR_9 = FUNC_3(VAR_4, 3, 3, &VAR_1,
                                                   9, sizeof(VAR_6) - 1, VAR_6, &VAR_10);
    FUNC_6(VAR_9 == VAR_3, "expected WINCODEC_ERR_INSUFFICIENTBUFFER, got %#x\n", VAR_9);

    VAR_9 = FUNC_3(VAR_4, 3, 3, &VAR_1,
                                                   9, sizeof(VAR_6), VAR_6, &VAR_10);
    FUNC_6(VAR_9 == VAR_2, "IWICImagingFactory_CreateBitmapFromMemory error %#x\n", VAR_9);

    VAR_9 = FUNC_1(VAR_10, &VAR_11, &VAR_12);
    FUNC_6(VAR_9 == VAR_2, "IWICBitmap_GetSize error %#x\n", VAR_9);
    FUNC_6(VAR_11 == 3, "expected 3, got %u\n", VAR_11);
    FUNC_6(VAR_12 == 3, "expected 3, got %u\n", VAR_12);

    VAR_6[2] = 192;

    FUNC_5(VAR_8, 0, sizeof(VAR_8));
    VAR_9 = FUNC_0(VAR_10, ((void*)0), 9, sizeof(VAR_8), VAR_8);
    FUNC_6(VAR_9 == VAR_2, "IWICBitmap_CopyPixels error %#x\n", VAR_9);
    for (VAR_13 = 0; VAR_13 < sizeof(VAR_8); VAR_13++)
        FUNC_6(VAR_8[VAR_13] == VAR_5[VAR_13], "%u: expected %u, got %u\n", VAR_13, VAR_8[VAR_13], VAR_6[VAR_13]);

    FUNC_2(VAR_10);

    VAR_9 = FUNC_3(VAR_4, 3, 2, &VAR_1,
                                                   13, sizeof(VAR_5), VAR_5, &VAR_10);
    FUNC_6(VAR_9 == VAR_2, "IWICImagingFactory_CreateBitmapFromMemory error %#x\n", VAR_9);

    VAR_9 = FUNC_1(VAR_10, &VAR_11, &VAR_12);
    FUNC_6(VAR_9 == VAR_2, "IWICBitmap_GetSize error %#x\n", VAR_9);
    FUNC_6(VAR_11 == 3, "expected 3, got %u\n", VAR_11);
    FUNC_6(VAR_12 == 2, "expected 2, got %u\n", VAR_12);

    FUNC_5(VAR_8, 0, sizeof(VAR_8));
    VAR_9 = FUNC_0(VAR_10, ((void*)0), 13, sizeof(VAR_8), VAR_8);
    FUNC_6(VAR_9 == VAR_2, "IWICBitmap_CopyPixels error %#x\n", VAR_9);
    for (VAR_13 = 0; VAR_13 < sizeof(VAR_8); VAR_13++)
        FUNC_6(VAR_8[VAR_13] == VAR_7[VAR_13], "%u: expected %u, got %u\n", VAR_13, VAR_7[VAR_13], VAR_8[VAR_13]);

    FUNC_2(VAR_10);
}
