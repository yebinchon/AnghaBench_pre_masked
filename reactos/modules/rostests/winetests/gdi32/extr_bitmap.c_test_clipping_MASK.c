
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int biSize; int biWidth; int biHeight; int biPlanes; int biCompression; int biBitCount; } ;
struct TYPE_5__ {int member_0; } ;
struct TYPE_7__ {TYPE_2__ bmiHeader; TYPE_1__ member_0; } ;
typedef int LPVOID ;
typedef int * HRGN ;
typedef int HDC ;
typedef int * HBITMAP ;
typedef int BOOL ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_3__ BITMAPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int,int ,int,int,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,TYPE_3__*,int ,int *,int *,int ) ;
 int * FUNC_3 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    HBITMAP VAR_4;
    HBITMAP VAR_5;
    HRGN VAR_6;
    LPVOID VAR_7;
    BOOL VAR_8;

    HDC VAR_9 = FUNC_1( ((void*)0) );
    HDC VAR_10 = FUNC_1( ((void*)0) );

    BITMAPINFO VAR_11={{0}};
    VAR_11.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_11.bmiHeader.biWidth = 100;
    VAR_11.bmiHeader.biHeight = 100;
    VAR_11.bmiHeader.biPlanes = 1;
    VAR_11.bmiHeader.biBitCount = FUNC_6( VAR_9, VAR_0 );
    VAR_11.bmiHeader.biCompression = VAR_1;

    VAR_4 = FUNC_2( VAR_9, &VAR_11, VAR_2, &VAR_7, ((void*)0), 0 );
    FUNC_9(VAR_4 != ((void*)0), "Couldn't create destination bitmap\n");
    FUNC_8( VAR_9, VAR_4 );

    VAR_5 = FUNC_2( VAR_10, &VAR_11, VAR_2, &VAR_7, ((void*)0), 0 );
    FUNC_9(VAR_5 != ((void*)0), "Couldn't create source bitmap\n");
    FUNC_8( VAR_10, VAR_5 );

    VAR_8 = FUNC_0( VAR_9, 0, 0, 100, 100, VAR_10, 100, 100, VAR_3 );
    FUNC_9(VAR_8, "BitBlt failed\n");

    VAR_6 = FUNC_3( 0,0,0,0 );
    FUNC_7( VAR_9, VAR_6 );

    VAR_8 = FUNC_0( VAR_9, 0, 0, 100, 100, VAR_10, 0, 0, VAR_3 );
    FUNC_9(VAR_8, "BitBlt failed\n");

    FUNC_5( VAR_4 );
    FUNC_5( VAR_5 );
    FUNC_5( VAR_6 );
    FUNC_4( VAR_9 );
    FUNC_4( VAR_10 );
}
