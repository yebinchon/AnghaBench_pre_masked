
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int bmih ;
typedef int bm ;
struct TYPE_9__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; scalar_t__ biSizeImage; void* biCompression; } ;
struct TYPE_10__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; TYPE_1__ bmiHeader; void* biCompression; } ;
typedef int INT ;
typedef int HDC ;
typedef int * HBITMAP ;
typedef int DWORD ;
typedef TYPE_2__ BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,TYPE_2__*,int ,int*,TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int ,int,int*,TYPE_2__*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int * FUNC_9 (int ,int *) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (int *,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_13(void)
{
    HDC VAR_4, VAR_5;
    BITMAPINFOHEADER VAR_6;
    BITMAPINFO VAR_7;
    HBITMAP VAR_8, VAR_9, VAR_10;
    INT VAR_11;
    DWORD VAR_12;

    VAR_4 = FUNC_5(0);
    VAR_11 = FUNC_7(VAR_4, VAR_0);
    FUNC_10(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.biSize = sizeof(VAR_6);
    VAR_6.biWidth = 10;
    VAR_6.biHeight = 10;
    VAR_6.biPlanes = 1;
    VAR_6.biBitCount = 32;
    VAR_6.biCompression = VAR_1;

    VAR_8 = FUNC_2(VAR_4, ((void*)0), VAR_2, ((void*)0), ((void*)0), 0);
    FUNC_11(VAR_8 == ((void*)0), "CreateDIBitmap should fail\n");
    VAR_8 = FUNC_2(VAR_4, ((void*)0), 0, ((void*)0), ((void*)0), 0);
    FUNC_11(VAR_8 == ((void*)0), "CreateDIBitmap should fail\n");






    VAR_8 = FUNC_2(VAR_4, &VAR_6, 0, ((void*)0), ((void*)0), 0);
    FUNC_11(VAR_8 != ((void*)0), "CreateDIBitmap failed\n");
    FUNC_12(VAR_8, VAR_11, &VAR_6);
    FUNC_4(VAR_8);


    VAR_6.biBitCount = 16;
    VAR_8 = FUNC_2(VAR_4, &VAR_6, 0, ((void*)0), ((void*)0), 0);
    FUNC_11(VAR_8 != ((void*)0), "CreateDIBitmap failed\n");
    FUNC_12(VAR_8, VAR_11, &VAR_6);
    FUNC_4(VAR_8);


    VAR_6.biBitCount = 1;
    VAR_8 = FUNC_2(VAR_4, &VAR_6, 0, ((void*)0), ((void*)0), 0);
    FUNC_11(VAR_8 != ((void*)0), "CreateDIBitmap failed\n");
    FUNC_12(VAR_8, VAR_11, &VAR_6);
    FUNC_4(VAR_8);


    VAR_5 = FUNC_1(VAR_4);


    VAR_6.biBitCount = 32;
    VAR_8 = FUNC_2(VAR_5, &VAR_6, 0, ((void*)0), ((void*)0), 0);
    FUNC_11(VAR_8 != ((void*)0), "CreateDIBitmap failed\n");
    FUNC_12(VAR_8, 1, &VAR_6);
    FUNC_4(VAR_8);


    VAR_6.biBitCount = 16;
    VAR_8 = FUNC_2(VAR_5, &VAR_6, 0, ((void*)0), ((void*)0), 0);
    FUNC_11(VAR_8 != ((void*)0), "CreateDIBitmap failed\n");
    FUNC_12(VAR_8, 1, &VAR_6);
    FUNC_4(VAR_8);


    VAR_6.biBitCount = 1;
    VAR_8 = FUNC_2(VAR_5, &VAR_6, 0, ((void*)0), ((void*)0), 0);
    FUNC_11(VAR_8 != ((void*)0), "CreateDIBitmap failed\n");
    FUNC_12(VAR_8, 1, &VAR_6);
    FUNC_4(VAR_8);



    VAR_9 = FUNC_0(VAR_4, VAR_6.biWidth, VAR_6.biHeight);
    FUNC_12(VAR_9, VAR_11, &VAR_6);
    VAR_10 = FUNC_9(VAR_5, VAR_9);


    VAR_6.biBitCount = 32;
    VAR_8 = FUNC_2(VAR_5, &VAR_6, 0, ((void*)0), ((void*)0), 0);
    FUNC_11(VAR_8 != ((void*)0), "CreateDIBitmap failed\n");
    FUNC_12(VAR_8, VAR_11, &VAR_6);
    FUNC_4(VAR_8);


    VAR_6.biBitCount = 16;
    VAR_8 = FUNC_2(VAR_5, &VAR_6, 0, ((void*)0), ((void*)0), 0);
    FUNC_11(VAR_8 != ((void*)0), "CreateDIBitmap failed\n");
    FUNC_12(VAR_8, VAR_11, &VAR_6);
    FUNC_4(VAR_8);


    VAR_6.biBitCount = 1;
    VAR_8 = FUNC_2(VAR_5, &VAR_6, 0, ((void*)0), ((void*)0), 0);
    FUNC_11(VAR_8 != ((void*)0), "CreateDIBitmap failed\n");
    FUNC_12(VAR_8, VAR_11, &VAR_6);
    FUNC_4(VAR_8);

    FUNC_9(VAR_5, VAR_10);
    FUNC_4(VAR_9);
    FUNC_3(VAR_5);

    VAR_6.biBitCount = 32;
    VAR_8 = FUNC_2(0, &VAR_6, 0, ((void*)0), ((void*)0), 0);
    FUNC_11(VAR_8 != ((void*)0), "CreateDIBitmap failed\n");
    FUNC_12(VAR_8, 1, &VAR_6);
    FUNC_4(VAR_8);


    VAR_12 = 0xffffffff;
    VAR_6.biBitCount = 1;
    VAR_6.biWidth = 1;
    VAR_6.biHeight = 1;

    FUNC_10(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.bmiHeader.biSize = sizeof(VAR_7.bmiHeader);
    VAR_7.bmiHeader.biWidth = 1;
    VAR_7.bmiHeader.biHeight = 1;
    VAR_7.bmiHeader.biPlanes = 1;
    VAR_7.bmiHeader.biBitCount= 24;
    VAR_7.bmiHeader.biCompression= VAR_1;
    VAR_7.bmiHeader.biSizeImage = 0;
    VAR_8 = FUNC_2(VAR_4, &VAR_6, VAR_2, &VAR_12, &VAR_7, VAR_3);
    FUNC_11(VAR_8 != ((void*)0), "CreateDIBitmap failed\n");

    VAR_12 = 0xdeadbeef;
    VAR_7.bmiHeader.biBitCount= 32;
    FUNC_6(VAR_4, VAR_8, 0, 1, &VAR_12, &VAR_7, VAR_3);
    FUNC_11(VAR_12 == 0x00ffffff, "Reading a 32 bit pixel from a DDB returned %08x\n", VAR_12);
    FUNC_4(VAR_8);

    FUNC_8(0, VAR_4);
}
