
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int bi ;
struct TYPE_6__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biCompression; } ;
struct TYPE_7__ {TYPE_1__ bmiHeader; } ;
typedef int * HDC ;
typedef int * HBITMAP ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 int * FUNC_0 (int *,TYPE_2__*,int ,void**,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int,int,int*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void FUNC_7(int VAR_2)
{
    BITMAPINFO VAR_3;
    HBITMAP VAR_4, VAR_5;
    HDC VAR_6;
    int VAR_7[4];
    int *VAR_8;
    int VAR_9;

    FUNC_4( &VAR_3, 0, sizeof(VAR_3) );
    VAR_3.bmiHeader.biSize=sizeof(VAR_3.bmiHeader);
    VAR_3.bmiHeader.biWidth=2;
    VAR_3.bmiHeader.biHeight=2;
    VAR_3.bmiHeader.biPlanes=1;
    VAR_3.bmiHeader.biBitCount=VAR_2;
    VAR_3.bmiHeader.biCompression=VAR_0;


    VAR_6 = FUNC_2(((void*)0));
    FUNC_5(VAR_6 != ((void*)0), "Could not get a handle to a device context.\n");


    VAR_5 = FUNC_0(VAR_6, &VAR_3, VAR_1, (void**)&VAR_8, ((void*)0), 0);
    FUNC_5(VAR_5 != ((void*)0), "Could not create a DIB section.\n");

    FUNC_6((char*)VAR_8, VAR_2);

    VAR_3.bmiHeader.biHeight=-2;
    VAR_4 = FUNC_0(VAR_6, &VAR_3, VAR_1, (void**)&VAR_8, ((void*)0), 0);
    FUNC_5(VAR_4 != ((void*)0), "Could not create a DIB section.\n");

    FUNC_6((char*)VAR_8, VAR_2);

    VAR_3.bmiHeader.biWidth = 1;

    VAR_3.bmiHeader.biHeight = 2;
    VAR_9 = FUNC_3(VAR_6, VAR_5, 0, 1, VAR_7, &VAR_3, VAR_1);
    FUNC_5(VAR_9, "Failed to call GetDIBits. Status code: %d.\n", VAR_9);

    FUNC_5((char)VAR_7[0] == 0, "Bottom-up -> bottom-up: first pixel should be 0 but was %d.\n", (char)VAR_7[0]);
    VAR_9 = FUNC_3(VAR_6, VAR_4, 0, 1, VAR_7, &VAR_3, VAR_1);
    FUNC_5(VAR_9, "Failed to call GetDIBits. Status code: %d.\n", VAR_9);
    FUNC_5((char)VAR_7[0] == 2, "Top-down -> bottom-up: first pixel should be 2 but was %d.\n", (char)VAR_7[0]);

    VAR_9 = FUNC_3(VAR_6, VAR_4, 1, 1, VAR_7, &VAR_3, VAR_1);
    FUNC_5(VAR_9, "Failed to call GetDIBits. Status code: %d.\n", VAR_9);
    FUNC_5((char)VAR_7[0] == 0, "Top-down -> bottom-up: first pixel should be 0 but was %d.\n", (char)VAR_7[0]);
    VAR_9 = FUNC_3(VAR_6, VAR_5, 1, 1, VAR_7, &VAR_3, VAR_1);
    FUNC_5(VAR_9, "Failed to call GetDIBits. Status code: %d.\n", VAR_9);
    FUNC_5((char)VAR_7[0] == 2, "Bottom-up -> bottom-up: first pixel should be 2 but was %d.\n", (char)VAR_7[0]);

    VAR_9 = FUNC_3(VAR_6, VAR_4, 0, 2, VAR_7, &VAR_3, VAR_1);
    FUNC_5(VAR_9, "Failed to call GetDIBits. Status code: %d.\n", VAR_9);
    FUNC_5((char)VAR_7[0] == 2, "Top-down -> bottom-up: first scanline should be 2 but was %d.\n", (char)VAR_7[0]);
    FUNC_5((char)VAR_7[1] == 0, "Top-down -> bottom-up: second scanline should be 0 but was %d.\n", (char)VAR_7[0]);
    VAR_9 = FUNC_3(VAR_6, VAR_5, 0, 2, VAR_7, &VAR_3, VAR_1);
    FUNC_5(VAR_9, "Failed to call GetDIBits. Status code: %d.\n", VAR_9);
    FUNC_5((char)VAR_7[0] == 0, "Bottom up -> bottom-up: first scanline should be 0 but was %d.\n", (char)VAR_7[0]);
    FUNC_5((char)VAR_7[1] == 2, "Bottom up -> bottom-up: second scanline should be 2 but was %d.\n", (char)VAR_7[0]);


    VAR_3.bmiHeader.biHeight = -2;
    VAR_9 = FUNC_3(VAR_6, VAR_5, 0, 1, VAR_7, &VAR_3, VAR_1);
    FUNC_5(VAR_9, "Failed to call GetDIBits. Status code: %d.\n", VAR_9);
    FUNC_5((char)VAR_7[0] == 0, "Bottom-up -> top-down: first pixel should be 0 but was %d.\n", (char)VAR_7[0]);
    VAR_9 = FUNC_3(VAR_6, VAR_4, 0, 1, VAR_7, &VAR_3, VAR_1);
    FUNC_5(VAR_9, "Failed to call GetDIBits. Status code: %d.\n", VAR_9);
    FUNC_5((char)VAR_7[0] == 2, "Top-down -> top-down: first pixel should be 2 but was %d.\n", (char)VAR_7[0]);

    VAR_9 = FUNC_3(VAR_6, VAR_4, 1, 1, VAR_7, &VAR_3, VAR_1);
    FUNC_5(VAR_9, "Failed to call GetDIBits. Status code: %d.\n", VAR_9);
    FUNC_5((char)VAR_7[0] == 0, "Top-down -> bottom-up: first pixel should be 0 but was %d.\n", (char)VAR_7[0]);
    VAR_9 = FUNC_3(VAR_6, VAR_5, 1, 1, VAR_7, &VAR_3, VAR_1);
    FUNC_5(VAR_9, "Failed to call GetDIBits. Status code: %d.\n", VAR_9);
    FUNC_5((char)VAR_7[0] == 2, "Top-down -> bottom-up: first pixel should be 2 but was %d.\n", (char)VAR_7[0]);

    VAR_9 = FUNC_3(VAR_6, VAR_4, 0, 2, VAR_7, &VAR_3, VAR_1);
    FUNC_5(VAR_9, "Failed to call GetDIBits. Status code: %d.\n", VAR_9);
    FUNC_5((char)VAR_7[0] == 0, "Top-down -> top-down: first scanline should be 0 but was %d.\n", (char)VAR_7[0]);
    FUNC_5((char)VAR_7[1] == 2, "Top-down -> top-down: second scanline should be 2 but was %d.\n", (char)VAR_7[0]);
    VAR_9 = FUNC_3(VAR_6, VAR_5, 0, 2, VAR_7, &VAR_3, VAR_1);
    FUNC_5(VAR_9, "Failed to call GetDIBits. Status code: %d.\n", VAR_9);
    FUNC_5((char)VAR_7[0] == 2, "Bottom up -> top-down: first scanline should be 2 but was %d.\n", (char)VAR_7[0]);
    FUNC_5((char)VAR_7[1] == 0, "Bottom up -> top-down: second scanline should be 0 but was %d.\n", (char)VAR_7[0]);

    FUNC_1(VAR_5);
    FUNC_1(VAR_4);
}
