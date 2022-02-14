
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WICPixelFormatGUID ;
typedef int UINT ;
struct TYPE_3__ {int fIcon; scalar_t__ hbmColor; scalar_t__ hbmMask; scalar_t__ yHotspot; scalar_t__ xHotspot; } ;
typedef int IWICBitmap ;
typedef TYPE_1__ ICONINFO ;
typedef int HRESULT ;
typedef scalar_t__ HICON ;


 void* FUNC_0 (int,int,int,int,char const*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int*,int*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,scalar_t__,int **) ;
 int FUNC_9 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(void)
{
    static const char VAR_5[4096];
    HICON VAR_6;
    ICONINFO VAR_7;
    HRESULT VAR_8;
    IWICBitmap *VAR_9;
    UINT VAR_10, VAR_11;
    WICPixelFormatGUID VAR_12;


    VAR_7.fIcon = 1;
    VAR_7.xHotspot = 0;
    VAR_7.yHotspot = 0;
    VAR_7.hbmColor = 0;
    VAR_7.hbmMask = FUNC_0(16, 32, 1, 1, VAR_5);
    FUNC_10(VAR_7.hbmMask != 0, "CreateBitmap failed\n");
    VAR_6 = FUNC_1(&VAR_7);
    FUNC_10(VAR_6 != 0, "CreateIconIndirect failed\n");
    FUNC_2(VAR_7.hbmMask);

    VAR_8 = FUNC_8(VAR_4, 0, ((void*)0));
    FUNC_10(VAR_8 == VAR_1, "expected E_INVALIDARG, got %#x\n", VAR_8);

    VAR_8 = FUNC_8(VAR_4, 0, &VAR_9);
    FUNC_10(VAR_8 == FUNC_4(VAR_0), "expected ERROR_INVALID_CURSOR_HANDLE, got %#x\n", VAR_8);

    VAR_8 = FUNC_8(VAR_4, VAR_6, ((void*)0));
    FUNC_10(VAR_8 == VAR_1, "expected E_INVALIDARG, got %#x\n", VAR_8);

    VAR_8 = FUNC_8(VAR_4, VAR_6, &VAR_9);
    FUNC_10(VAR_8 == VAR_3, "CreateBitmapFromHICON error %#x\n", VAR_8);
    FUNC_3(VAR_6);
    if (VAR_8 != VAR_3) return;

    FUNC_5(VAR_9, &VAR_12);
    FUNC_10(FUNC_9(&VAR_12, &VAR_2),
       "unexpected pixel format %s\n", FUNC_11(&VAR_12));

    VAR_8 = FUNC_6(VAR_9, &VAR_10, &VAR_11);
    FUNC_10(VAR_8 == VAR_3, "IWICBitmap_GetSize error %#x\n", VAR_8);
    FUNC_10(VAR_10 == 16, "expected 16, got %u\n", VAR_10);
    FUNC_10(VAR_11 == 16, "expected 16, got %u\n", VAR_11);

    FUNC_7(VAR_9);


    VAR_7.fIcon = 1;
    VAR_7.xHotspot = 0;
    VAR_7.yHotspot = 0;
    VAR_7.hbmColor = FUNC_0(16, 16, 1, 24, VAR_5);
    FUNC_10(VAR_7.hbmColor != 0, "CreateBitmap failed\n");
    VAR_7.hbmMask = FUNC_0(16, 16, 1, 1, VAR_5);
    FUNC_10(VAR_7.hbmMask != 0, "CreateBitmap failed\n");
    VAR_6 = FUNC_1(&VAR_7);
    FUNC_10(VAR_6 != 0, "CreateIconIndirect failed\n");
    FUNC_2(VAR_7.hbmColor);
    FUNC_2(VAR_7.hbmMask);

    VAR_8 = FUNC_8(VAR_4, VAR_6, &VAR_9);
    FUNC_10(VAR_8 == VAR_3, "CreateBitmapFromHICON error %#x\n", VAR_8);
    FUNC_3(VAR_6);

    FUNC_5(VAR_9, &VAR_12);
    FUNC_10(FUNC_9(&VAR_12, &VAR_2),
       "unexpected pixel format %s\n", FUNC_11(&VAR_12));

    VAR_8 = FUNC_6(VAR_9, &VAR_10, &VAR_11);
    FUNC_10(VAR_8 == VAR_3, "IWICBitmap_GetSize error %#x\n", VAR_8);
    FUNC_10(VAR_10 == 16, "expected 16, got %u\n", VAR_10);
    FUNC_10(VAR_11 == 16, "expected 16, got %u\n", VAR_11);

    FUNC_7(VAR_9);
}
