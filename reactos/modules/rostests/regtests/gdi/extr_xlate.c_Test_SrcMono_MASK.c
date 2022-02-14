
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WORD ;
typedef int ULONG ;
struct TYPE_2__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biXPelsPerMeter; int biYPelsPerMeter; int biClrUsed; int biClrImportant; void* biCompression; scalar_t__ biSizeImage; } ;
typedef scalar_t__ PVOID ;
typedef int LPBITMAPINFO ;
typedef scalar_t__ HBITMAP ;
typedef TYPE_1__ BITMAPINFOHEADER ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__*,int *,int ) ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (scalar_t__,int,int) ;
 int FUNC_9 (int,char*,...) ;

void
FUNC_10()
{
    HBITMAP VAR_13;
    struct
    {
        BITMAPINFOHEADER bmiHeader;
        ULONG bmiColors[3];
    } VAR_14;
    PVOID VAR_15;
    ULONG VAR_16, VAR_17;

    FUNC_3(VAR_11, VAR_7);

    FUNC_5(VAR_4, VAR_8, 0);
    FUNC_5(VAR_12, VAR_9, 0);

    VAR_14.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_14.bmiHeader.biWidth = 2;
    VAR_14.bmiHeader.biHeight = -2;
    VAR_14.bmiHeader.biPlanes = 1;
    VAR_14.bmiHeader.biBitCount = 16;
    VAR_14.bmiHeader.biCompression = VAR_1;
    VAR_14.bmiHeader.biSizeImage = 0;
    VAR_14.bmiHeader.biXPelsPerMeter = 1;
    VAR_14.bmiHeader.biYPelsPerMeter = 1;
    VAR_14.bmiHeader.biClrUsed = 0;
    VAR_14.bmiHeader.biClrImportant = 0;
    VAR_13 = FUNC_0(VAR_10, (LPBITMAPINFO)&VAR_14, VAR_6, &VAR_15, ((void*)0), 0);
    FUNC_9(VAR_13 != 0, "CreateDIBSection failed\n");
    FUNC_8(VAR_15, 0x55555555, 8 * 8 * 2);

    FUNC_3(VAR_10, VAR_13);

    VAR_16 = FUNC_2(VAR_10, 0, 0);
    VAR_17 = FUNC_7(VAR_2, 0x5555);
    FUNC_9(VAR_16 == VAR_17, "expected %lx, got %lx\n", VAR_17, VAR_16);

    VAR_17 = 0x123456;
    FUNC_4(VAR_10, 0, 0, VAR_17);
    VAR_17 = FUNC_6(VAR_2, VAR_17);
    VAR_16 = *(volatile WORD*)VAR_15;
    FUNC_9(VAR_16 == VAR_17, "expected %lx, got %lx\n", VAR_17, VAR_16);

    FUNC_5(VAR_2, VAR_13, VAR_15);

    FUNC_1(VAR_13);


    VAR_14.bmiHeader.biCompression = VAR_0;
    VAR_14.bmiHeader.biClrUsed = 3;
    VAR_14.bmiHeader.biClrImportant = 3;
    VAR_14.bmiColors[0] = 0xF800;
    VAR_14.bmiColors[1] = 0x7E0;
    VAR_14.bmiColors[2] = 0x1F;
    VAR_13 = FUNC_0(VAR_10, (LPBITMAPINFO)&VAR_14, VAR_6, &VAR_15, ((void*)0), 0);
    FUNC_9(VAR_13 != 0, "CreateDIBSection failed\n");
    FUNC_3(VAR_10, VAR_13);

    FUNC_5(VAR_3, VAR_13, VAR_15);

    FUNC_1(VAR_13);


    VAR_14.bmiHeader.biBitCount = 32;
    VAR_14.bmiHeader.biCompression = VAR_1;
    VAR_14.bmiHeader.biClrUsed = 0;
    VAR_14.bmiHeader.biClrImportant = 0;
    VAR_13 = FUNC_0(VAR_10, (LPBITMAPINFO)&VAR_14, VAR_6, &VAR_15, ((void*)0), 0);
    FUNC_9(VAR_13 != 0, "CreateDIBSection failed\n");
    FUNC_3(VAR_10, VAR_13);

    FUNC_5(VAR_5, VAR_13, VAR_15);

    FUNC_1(VAR_13);

}
