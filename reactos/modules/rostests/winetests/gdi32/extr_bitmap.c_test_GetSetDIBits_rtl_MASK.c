
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bits_1 ;
struct TYPE_5__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biCompression; } ;
struct TYPE_6__ {TYPE_1__ bmiHeader; } ;
typedef int HDC ;
typedef int HBITMAP ;
typedef int DWORD ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int,int*,TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int,int*,TYPE_2__*,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int*,int*,int) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    HDC VAR_4, VAR_5;
    HBITMAP VAR_6, VAR_7;
    BITMAPINFO VAR_8;
    int VAR_9;
    DWORD VAR_10[8 * 8], VAR_11[8 * 8];

    if(!&FUNC_13)
    {
        FUNC_14("Don't have SetLayout\n");
        return;
    }

    VAR_4 = FUNC_4( ((void*)0) );
    VAR_5 = FUNC_1( VAR_4 );
    FUNC_13( VAR_5, VAR_2 );

    VAR_6 = FUNC_0( VAR_4, 8, 8 );
    VAR_7 = FUNC_8( VAR_5, VAR_6 );
    FUNC_10( VAR_5, 0, 0, FUNC_6(0xff, 0, 0) );
    FUNC_8( VAR_5, VAR_7 );

    VAR_8.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_8.bmiHeader.biWidth = 8;
    VAR_8.bmiHeader.biHeight = 8;
    VAR_8.bmiHeader.biPlanes = 1;
    VAR_8.bmiHeader.biBitCount = 32;
    VAR_8.bmiHeader.biCompression = VAR_0;



    VAR_9 = FUNC_5( VAR_5, VAR_6, 0, 8, VAR_10, &VAR_8, VAR_1 );
    FUNC_12(VAR_9 == 8, "got %d\n", VAR_9);
    FUNC_12(VAR_10[56] == 0xff0000, "got %08x\n", VAR_10[56]);

    FUNC_13( VAR_5, VAR_3 );

    VAR_9 = FUNC_5( VAR_5, VAR_6, 0, 8, VAR_11, &VAR_8, VAR_1 );
    FUNC_12(VAR_9 == 8, "got %d\n", VAR_9);

    FUNC_12(!FUNC_11( VAR_10, VAR_11, sizeof(VAR_10) ), "bits differ\n");




    FUNC_13( VAR_5, VAR_2 );

    VAR_9 = FUNC_9( VAR_5, VAR_6, 0, 8, VAR_10, &VAR_8, VAR_1 );
    FUNC_12(VAR_9 == 8, "got %d\n", VAR_9);
    VAR_9 = FUNC_5( VAR_5, VAR_6, 0, 8, VAR_11, &VAR_8, VAR_1 );
    FUNC_12(VAR_9 == 8, "got %d\n", VAR_9);
    FUNC_12(!FUNC_11( VAR_10, VAR_11, sizeof(VAR_10) ), "bits differ\n");

    FUNC_13( VAR_5, VAR_3 );

    VAR_9 = FUNC_9( VAR_5, VAR_6, 0, 8, VAR_10, &VAR_8, VAR_1 );
    FUNC_12(VAR_9 == 8, "got %d\n", VAR_9);
    VAR_9 = FUNC_5( VAR_5, VAR_6, 0, 8, VAR_11, &VAR_8, VAR_1 );
    FUNC_12(VAR_9 == 8, "got %d\n", VAR_9);
    FUNC_12(!FUNC_11( VAR_10, VAR_11, sizeof(VAR_10) ), "bits differ\n");

    FUNC_3( VAR_6 );
    FUNC_2( VAR_5 );
    FUNC_7( ((void*)0), VAR_4 );
}
