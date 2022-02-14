
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int color ;
typedef int WICColor ;
typedef int WICBitmapPaletteType ;
typedef int UINT ;
typedef int IWICPalette ;
typedef int IWICBitmapSource ;
typedef int IWICBitmap ;
typedef int HRESULT ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int,int *,int,int,int *,int **) ;
 int FUNC_4 (int ,int **) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int,int*,int*) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (int *,int *,int,int ) ;
 int FUNC_9 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_10 (int*,int*,int*) ;
 int FUNC_11 (int*,int,int) ;
 int FUNC_12 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_13(void)
{
    HRESULT VAR_7;
    BYTE *VAR_8;
    IWICBitmap *VAR_9;
    IWICPalette *VAR_10;
    WICBitmapPaletteType VAR_11;
    UINT VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    WICColor VAR_17[257];

    VAR_8 = FUNC_10(&VAR_12, &VAR_13, &VAR_14);

    VAR_7 = FUNC_3(VAR_6, VAR_12, VAR_13, &VAR_2,
                                                   VAR_14, VAR_14 * VAR_13, VAR_8, &VAR_9);
    FUNC_12(VAR_7 == VAR_3, "CreateBitmapFromMemory error %#x\n", VAR_7);

    VAR_7 = FUNC_4(VAR_6, &VAR_10);
    FUNC_12(VAR_7 == VAR_3, "CreatePalette error %#x\n", VAR_7);

    VAR_7 = FUNC_8(VAR_10, (IWICBitmapSource *)VAR_9, 0, VAR_1);
    FUNC_12(VAR_7 == VAR_0, "expected E_INVALIDARG, got %#x\n", VAR_7);

    VAR_7 = FUNC_8(VAR_10, (IWICBitmapSource *)VAR_9, 1, VAR_1);
    FUNC_12(VAR_7 == VAR_0, "expected E_INVALIDARG, got %#x\n", VAR_7);

    VAR_7 = FUNC_8(VAR_10, (IWICBitmapSource *)VAR_9, 257, VAR_1);
    FUNC_12(VAR_7 == VAR_0, "expected E_INVALIDARG, got %#x\n", VAR_7);

    VAR_7 = FUNC_8(VAR_10, ((void*)0), 16, VAR_1);
    FUNC_12(VAR_7 == VAR_0, "expected E_INVALIDARG, got %#x\n", VAR_7);

    VAR_7 = FUNC_8(VAR_10, (IWICBitmapSource *)VAR_9, 2, VAR_1);
    FUNC_12(VAR_7 == VAR_3, "InitializeFromBitmap error %#x\n", VAR_7);
    VAR_15 = 0;
    VAR_7 = FUNC_5(VAR_10, &VAR_15);
    FUNC_12(VAR_7 == VAR_3, "GetColorCount error %#x\n", VAR_7);
    FUNC_12(VAR_15 == 2, "expected 2, got %u\n", VAR_15);

    VAR_7 = FUNC_8(VAR_10, (IWICBitmapSource *)VAR_9, 2, VAR_4);
    FUNC_12(VAR_7 == VAR_3, "InitializeFromBitmap error %#x\n", VAR_7);
    VAR_15 = 0;
    VAR_7 = FUNC_5(VAR_10, &VAR_15);
    FUNC_12(VAR_7 == VAR_3, "GetColorCount error %#x\n", VAR_7);
    FUNC_12(VAR_15 == 2, "expected 2, got %u\n", VAR_15);


    VAR_7 = FUNC_8(VAR_10, (IWICBitmapSource *)VAR_9, 16, VAR_1);
    FUNC_12(VAR_7 == VAR_3, "InitializeFromBitmap error %#x\n", VAR_7);
    VAR_11 = -1;
    VAR_7 = FUNC_7(VAR_10, &VAR_11);
    FUNC_12(VAR_7 == VAR_3, "GetType error %#x\n", VAR_7);
    FUNC_12(VAR_11 == VAR_5, "expected WICBitmapPaletteTypeCustom, got %#x\n", VAR_11);
    VAR_15 = 0;
    VAR_7 = FUNC_5(VAR_10, &VAR_15);
    FUNC_12(VAR_7 == VAR_3, "GetColorCount error %#x\n", VAR_7);
    FUNC_12(VAR_15 == 16, "expected 16, got %u\n", VAR_15);
    FUNC_11(VAR_17, 0, sizeof(VAR_17));
    VAR_7 = FUNC_6(VAR_10, VAR_15, VAR_17, &VAR_16);
    FUNC_12(VAR_7 == VAR_3, "GetColors error %#x\n", VAR_7);
    FUNC_12(VAR_16 == VAR_15, "expected %u, got %u\n", VAR_15, VAR_16);
    FUNC_12(VAR_17[VAR_15 - 1] != 0, "expected !0, got %08x\n", VAR_17[VAR_15 - 1]);


    VAR_7 = FUNC_8(VAR_10, (IWICBitmapSource *)VAR_9, 16, VAR_4);
    FUNC_12(VAR_7 == VAR_3, "InitializeFromBitmap error %#x\n", VAR_7);
    VAR_11 = -1;
    VAR_7 = FUNC_7(VAR_10, &VAR_11);
    FUNC_12(VAR_7 == VAR_3, "GetType error %#x\n", VAR_7);
    FUNC_12(VAR_11 == VAR_5, "expected WICBitmapPaletteTypeCustom, got %#x\n", VAR_11);
    VAR_15 = 0;
    VAR_7 = FUNC_5(VAR_10, &VAR_15);
    FUNC_12(VAR_7 == VAR_3, "GetColorCount error %#x\n", VAR_7);
    FUNC_12(VAR_15 == 16, "expected 16, got %u\n", VAR_15);
    FUNC_11(VAR_17, 0xff, sizeof(VAR_17));
    VAR_7 = FUNC_6(VAR_10, VAR_15, VAR_17, &VAR_16);
    FUNC_12(VAR_7 == VAR_3, "GetColors error %#x\n", VAR_7);
    FUNC_12(VAR_16 == VAR_15, "expected %u, got %u\n", VAR_15, VAR_16);
    FUNC_12(VAR_17[VAR_15 - 1] == 0, "expected 0, got %08x\n", VAR_17[VAR_15 - 1]);

    FUNC_9(VAR_10);
    FUNC_2(VAR_9);

    FUNC_1(FUNC_0(), 0, VAR_8);
}
