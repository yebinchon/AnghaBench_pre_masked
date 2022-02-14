
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_4__ {int biSize; int biHeight; int biWidth; int biBitCount; int biPlanes; int biCompression; } ;
struct TYPE_5__ {TYPE_1__ bmiHeader; } ;
typedef int RGBQUAD ;
typedef scalar_t__ HRGN ;
typedef int HDC ;
typedef scalar_t__ HBITMAP ;
typedef int BYTE ;
typedef int BOOL ;
typedef TYPE_2__ BITMAPINFO ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,int ,void**,int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *,int *,int ) ;
 int FUNC_12 (int ,int,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_3 ;
 int FUNC_14 (int ,int,int,int,int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 scalar_t__ FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (int *,int ,int) ;
 int FUNC_25 (int,char*,...) ;

__attribute__((used)) static void FUNC_26(void)
{
    BYTE VAR_4[sizeof(BITMAPINFO) + 256 * sizeof(RGBQUAD)];
    BITMAPINFO *VAR_5 = (BITMAPINFO *)VAR_4;
    HDC VAR_6;
    HRGN VAR_7;
    HBITMAP VAR_8, VAR_9;
    void *VAR_10;
    BOOL VAR_11;

    VAR_6 = FUNC_3( 0 );
    FUNC_24( VAR_4, 0, sizeof(VAR_4) );
    VAR_5->bmiHeader.biSize = sizeof(VAR_5->bmiHeader);
    VAR_5->bmiHeader.biHeight = 256;
    VAR_5->bmiHeader.biWidth = 256;
    VAR_5->bmiHeader.biBitCount = 32;
    VAR_5->bmiHeader.biPlanes = 1;
    VAR_5->bmiHeader.biCompression = VAR_0;
    VAR_9 = FUNC_4( 0, VAR_5, VAR_1, (void**)&VAR_10, ((void*)0), 0 );
    VAR_8 = FUNC_18( VAR_6, VAR_9 );

    FUNC_1( VAR_6 );
    FUNC_12( VAR_6, 100, 100 );
    VAR_11 = FUNC_22( VAR_6 );
    FUNC_25( !VAR_11, "WidenPath succeeded\n" );


    FUNC_18( VAR_6, VAR_8 );
    VAR_11 = FUNC_22( VAR_6 );
    FUNC_25( !VAR_11, "WidenPath succeeded\n" );

    FUNC_18( VAR_6, VAR_9 );
    VAR_11 = FUNC_22( VAR_6 );
    FUNC_25( !VAR_11, "WidenPath succeeded\n" );

    VAR_11 = FUNC_7( VAR_6 );
    FUNC_25( VAR_11, "EndPath failed error %u\n", FUNC_10() );
    VAR_11 = FUNC_22( VAR_6 );
    FUNC_25( VAR_11, "WidenPath failed error %u\n", FUNC_10() );

    FUNC_18( VAR_6, VAR_8 );
    VAR_11 = FUNC_22( VAR_6 );
    FUNC_25( VAR_11, "WidenPath failed error %u\n", FUNC_10() );

    FUNC_1( VAR_6 );
    FUNC_12( VAR_6, 100, 100 );
    VAR_11 = FUNC_22( VAR_6 );
    FUNC_25( !VAR_11, "WidenPath succeeded\n" );
    FUNC_16( VAR_6 );
    FUNC_18( VAR_6, VAR_9 );
    VAR_11 = FUNC_7( VAR_6 );
    FUNC_25( VAR_11, "EndPath failed error %u\n", FUNC_10() );
    VAR_11 = FUNC_22( VAR_6 );
    FUNC_25( VAR_11, "WidenPath failed error %u\n", FUNC_10() );


    FUNC_15( VAR_6, -1 );
    VAR_11 = FUNC_22( VAR_6 );
    FUNC_25( !VAR_11, "WidenPath succeeded\n" );
    VAR_11 = FUNC_7( VAR_6 );
    FUNC_25( VAR_11, "EndPath failed error %u\n", FUNC_10() );

    FUNC_16( VAR_6 );
    FUNC_1( VAR_6 );
    FUNC_15( VAR_6, -1 );
    VAR_11 = FUNC_22( VAR_6 );
    FUNC_25( VAR_11, "WidenPath failed error %u\n", FUNC_10() );


    FUNC_0( VAR_6 );
    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_22( VAR_6 );
    FUNC_25( !VAR_11, "WidenPath succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_9( VAR_6 );
    FUNC_25( !VAR_11, "FlattenPath succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_21( VAR_6 );
    FUNC_25( !VAR_11, "StrokePath succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_8( VAR_6 );
    FUNC_25( !VAR_11, "FillPath succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_20( VAR_6 );
    FUNC_25( !VAR_11, "StrokeAndFillPath succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_17( VAR_6, VAR_3 );
    FUNC_25( !VAR_11, "SelectClipPath succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_19( 0xdeadbeef );
    VAR_7 = FUNC_13( VAR_6 );
    FUNC_25( !VAR_7, "PathToRegion succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_7( VAR_6 );
    FUNC_25( !VAR_11, "SelectClipPath succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_2( VAR_6 );
    FUNC_25( !VAR_11, "CloseFigure succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );


    FUNC_0( VAR_6 );
    FUNC_1( VAR_6 );
    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_22( VAR_6 );
    FUNC_25( !VAR_11, "WidenPath succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_0( VAR_6 );
    FUNC_1( VAR_6 );
    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_9( VAR_6 );
    FUNC_25( !VAR_11, "FlattenPath succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_0( VAR_6 );
    FUNC_1( VAR_6 );
    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_21( VAR_6 );
    FUNC_25( !VAR_11, "StrokePath succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_0( VAR_6 );
    FUNC_1( VAR_6 );
    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_8( VAR_6 );
    FUNC_25( !VAR_11, "FillPath succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_0( VAR_6 );
    FUNC_1( VAR_6 );
    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_20( VAR_6 );
    FUNC_25( !VAR_11, "StrokeAndFillPath succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_0( VAR_6 );
    FUNC_1( VAR_6 );
    FUNC_14( VAR_6, 1, 1, 10, 10 );
    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_17( VAR_6, VAR_3 );
    FUNC_25( !VAR_11, "SelectClipPath succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_0( VAR_6 );
    FUNC_1( VAR_6 );
    FUNC_14( VAR_6, 1, 1, 10, 10 );
    FUNC_19( 0xdeadbeef );
    VAR_7 = FUNC_13( VAR_6 );
    FUNC_25( !VAR_7, "PathToRegion succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_0( VAR_6 );
    FUNC_1( VAR_6 );
    VAR_11 = FUNC_2( VAR_6 );
    FUNC_25( VAR_11, "CloseFigure failed\n" );


    FUNC_0( VAR_6 );
    FUNC_1( VAR_6 );
    FUNC_7( VAR_6 );
    VAR_11 = FUNC_22( VAR_6 );
    FUNC_25( VAR_11, "WidenPath failed\n" );
    FUNC_25( FUNC_11( VAR_6, ((void*)0), ((void*)0), 0 ) != -1, "path deleted\n" );

    FUNC_0( VAR_6 );
    FUNC_1( VAR_6 );
    FUNC_7( VAR_6 );
    VAR_11 = FUNC_9( VAR_6 );
    FUNC_25( VAR_11, "FlattenPath failed\n" );
    FUNC_25( FUNC_11( VAR_6, ((void*)0), ((void*)0), 0 ) != -1, "path deleted\n" );

    FUNC_0( VAR_6 );
    FUNC_1( VAR_6 );
    FUNC_7( VAR_6 );
    VAR_11 = FUNC_21( VAR_6 );
    FUNC_25( VAR_11, "StrokePath failed\n" );
    FUNC_25( FUNC_11( VAR_6, ((void*)0), ((void*)0), 0 ) == -1, "path not deleted\n" );

    FUNC_1( VAR_6 );
    FUNC_7( VAR_6 );
    VAR_11 = FUNC_8( VAR_6 );
    FUNC_25( VAR_11, "FillPath failed\n" );
    FUNC_25( FUNC_11( VAR_6, ((void*)0), ((void*)0), 0 ) == -1, "path not deleted\n" );

    FUNC_1( VAR_6 );
    FUNC_7( VAR_6 );
    VAR_11 = FUNC_20( VAR_6 );
    FUNC_25( VAR_11, "StrokeAndFillPath failed\n" );
    FUNC_25( FUNC_11( VAR_6, ((void*)0), ((void*)0), 0 ) == -1, "path not deleted\n" );

    FUNC_1( VAR_6 );
    FUNC_14( VAR_6, 1, 1, 10, 10 );
    FUNC_7( VAR_6 );
    VAR_11 = FUNC_17( VAR_6, VAR_3 );
    FUNC_25( VAR_11, "SelectClipPath failed\n" );
    FUNC_25( FUNC_11( VAR_6, ((void*)0), ((void*)0), 0 ) == -1, "path not deleted\n" );

    FUNC_1( VAR_6 );
    FUNC_7( VAR_6 );
    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_17( VAR_6, VAR_3 );
    FUNC_25( !VAR_11, "SelectClipPath succeeded on empty path\n" );
    FUNC_25( FUNC_10() == 0xdeadbeef, "wrong error %u\n", FUNC_10() );
    FUNC_25( FUNC_11( VAR_6, ((void*)0), ((void*)0), 0 ) == -1, "path not deleted\n" );

    FUNC_1( VAR_6 );
    FUNC_14( VAR_6, 1, 1, 10, 10 );
    FUNC_7( VAR_6 );
    VAR_7 = FUNC_13( VAR_6 );
    FUNC_25( VAR_7 != 0, "PathToRegion failed\n" );
    FUNC_6( VAR_7 );
    FUNC_25( FUNC_11( VAR_6, ((void*)0), ((void*)0), 0 ) == -1, "path not deleted\n" );

    FUNC_1( VAR_6 );
    FUNC_7( VAR_6 );
    FUNC_19( 0xdeadbeef );
    VAR_7 = FUNC_13( VAR_6 );
    FUNC_25( !VAR_7, "PathToRegion succeeded on empty path\n" );
    FUNC_25( FUNC_10() == 0xdeadbeef, "wrong error %u\n", FUNC_10() );
    FUNC_6( VAR_7 );
    FUNC_25( FUNC_11( VAR_6, ((void*)0), ((void*)0), 0 ) == -1, "path not deleted\n" );

    FUNC_1( VAR_6 );
    FUNC_7( VAR_6 );
    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_2( VAR_6 );
    FUNC_25( !VAR_11, "CloseFigure succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_0( VAR_6 );
    FUNC_1( VAR_6 );
    FUNC_7( VAR_6 );
    FUNC_19( 0xdeadbeef );
    VAR_11 = FUNC_7( VAR_6 );
    FUNC_25( !VAR_11, "EndPath succeeded\n" );
    FUNC_25( FUNC_10() == VAR_2 || FUNC_23(FUNC_10() == 0xdeadbeef),
        "wrong error %u\n", FUNC_10() );

    FUNC_5( VAR_6 );
    FUNC_6( VAR_9 );
}
