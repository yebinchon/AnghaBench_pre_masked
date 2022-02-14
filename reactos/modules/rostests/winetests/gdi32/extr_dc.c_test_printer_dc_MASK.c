
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HDC ;
typedef int * HBITMAP ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int,int,int *,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int,int,int,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 int VAR_5 ;
 int * FUNC_10 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_11 (int,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int,char*,...) ;
 int FUNC_14 (int *,int *,char*,int) ;

__attribute__((used)) static void FUNC_15(void)
{
    HDC VAR_8, VAR_9, VAR_10;
    HBITMAP VAR_11, VAR_12;
    DWORD VAR_13;
    HDC VAR_14, VAR_15;

    VAR_14 = FUNC_11(100, VAR_4);
    VAR_15 = FUNC_11(200, VAR_4);

    if (!VAR_14 || !VAR_15) return;

    FUNC_14( VAR_14, VAR_15, "printer dc", FUNC_12(VAR_14) ? 2 : 1 );
    FUNC_5( VAR_15 );

    VAR_15 = FUNC_11(200, VAR_7);
    FUNC_14( VAR_14, VAR_15, "printer dc", FUNC_12(VAR_14) ? 2 : 1 );
    FUNC_5( VAR_15 );

    VAR_8 = FUNC_3( VAR_14 );
    VAR_9 = FUNC_3( 0 );

    FUNC_13( VAR_8 != ((void*)0), "CreateCompatibleDC failed for printer\n" );
    FUNC_13( VAR_9 != ((void*)0), "CreateCompatibleDC failed for screen\n" );

    VAR_13 = FUNC_8( VAR_14, VAR_6 );
    FUNC_13( VAR_13 == VAR_3, "wrong type %u\n", VAR_13 );

    VAR_13 = FUNC_8( VAR_8, VAR_6 );
    FUNC_13( VAR_13 == VAR_3, "wrong type %u\n", VAR_13 );

    VAR_13 = FUNC_8( VAR_9, VAR_6 );
    FUNC_13( VAR_13 == VAR_2, "wrong type %u\n", VAR_13 );

    VAR_12 = FUNC_2( 100, 100, 1, FUNC_8( VAR_14, VAR_0 ), ((void*)0) );
    VAR_11 = FUNC_10( VAR_8, VAR_12 );
    FUNC_13( VAR_11 != ((void*)0), "SelectObject failed\n" );
    FUNC_13( FUNC_0( VAR_14, 10, 10, 20, 20, VAR_8, 0, 0, VAR_5 ), "BitBlt failed\n" );

    FUNC_14( VAR_8, VAR_14, "printer dc", 1 );

    FUNC_13( !FUNC_10( VAR_9, VAR_12 ), "SelectObject succeeded\n" );
    FUNC_10( VAR_8, VAR_11 );
    FUNC_7( VAR_12 );

    VAR_12 = FUNC_2( 100, 100, 1, 1, ((void*)0) );
    VAR_11 = FUNC_10( VAR_9, VAR_12 );
    FUNC_13( VAR_11 != ((void*)0), "SelectObject failed\n" );
    FUNC_13( !FUNC_10( VAR_8, VAR_12 ), "SelectObject succeeded\n" );
    FUNC_13( FUNC_0( VAR_14, 10, 10, 20, 20, VAR_9, 0, 0, VAR_5 ), "BitBlt failed\n" );
    FUNC_13( FUNC_0( VAR_8, 10, 10, 20, 20, VAR_9, 0, 0, VAR_5 ), "BitBlt failed\n" );
    FUNC_13( FUNC_0( VAR_9, 10, 10, 20, 20, VAR_8, 0, 0, VAR_5 ), "BitBlt failed\n" );

    VAR_13 = FUNC_9( VAR_14, 0, 0 );
    FUNC_13( VAR_13 == VAR_1, "wrong pixel value %x\n", VAR_13 );

    VAR_10 = FUNC_4( VAR_14, ((void*)0), ((void*)0), ((void*)0) );
    FUNC_13(VAR_10 != 0, "CreateEnhMetaFileA failed\n");
    FUNC_14( VAR_10, VAR_14, "enhmetafile printer dc", 1 );
    FUNC_6( FUNC_1( VAR_10 ));

    VAR_10 = FUNC_4( VAR_14, ((void*)0), ((void*)0), ((void*)0) );
    FUNC_13(VAR_10 != 0, "CreateEnhMetaFileA failed\n");
    FUNC_14( VAR_10, VAR_14, "enhmetafile printer dc", 1 );
    FUNC_6( FUNC_1( VAR_10 ));

    FUNC_5( VAR_8 );
    FUNC_5( VAR_9 );
    FUNC_5( VAR_14 );
    FUNC_7( VAR_12 );
}
