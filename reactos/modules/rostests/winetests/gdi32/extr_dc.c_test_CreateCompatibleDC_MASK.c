
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dmScale; } ;
struct TYPE_8__ {TYPE_1__ s1; } ;
struct TYPE_9__ {int dmFields; TYPE_2__ u1; } ;
typedef int * INT ;
typedef int * HDC ;
typedef int HBITMAP ;
typedef TYPE_3__ DEVMODEA ;
typedef int * BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int,int,int,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (char*,int *,int *,TYPE_3__*) ;
 int * FUNC_5 (int *,int *,int *,int *) ;
 int * FUNC_6 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_3 ;
 int * FUNC_11 (int *,int ,TYPE_3__*) ;
 int * FUNC_12 (int ) ;
 int * FUNC_13 (int *,int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_16 (int *,int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_17 (int,char*,...) ;
 int FUNC_18 (int *,int *,char*,int) ;

__attribute__((used)) static void FUNC_19(void)
{
    BOOL VAR_6;
    HDC VAR_7, VAR_8, VAR_9, VAR_10;
    HBITMAP VAR_11;
    INT VAR_12;
    DEVMODEA VAR_13;

    VAR_11 = FUNC_2( 10, 10, 1, 1, ((void*)0) );

    VAR_6 = FUNC_11(((void*)0), VAR_3, &VAR_13);
    FUNC_17(*VAR_6, "EnumDisplaySettingsEx failed\n");
    VAR_13.u1.s1.dmScale = 200;
    VAR_13.dmFields |= VAR_0;
    VAR_7 = FUNC_4( "DISPLAY", ((void*)0), ((void*)0), &VAR_13 );

    VAR_10 = FUNC_4( "DISPLAY", ((void*)0), ((void*)0), ((void*)0) );
    FUNC_18( VAR_7, VAR_10, "display dc", 1 );
    FUNC_15( VAR_7, &VAR_13 );
    FUNC_18( VAR_7, VAR_10, "display dc", 1 );
    FUNC_7( VAR_7 );


    VAR_7 = FUNC_3(((void*)0));
    FUNC_17(VAR_7 != ((void*)0), "CreateCompatibleDC returned %p\n", VAR_7);
    FUNC_17( FUNC_16( VAR_7, VAR_11 ) != 0, "SelectObject failed\n" );
    VAR_12 = FUNC_13( VAR_7, VAR_4 );
    FUNC_17( VAR_12 == VAR_2, "wrong caps %u\n", VAR_12 );

    FUNC_18( VAR_7, VAR_10, "display dc", 1 );


    VAR_6 = FUNC_7(VAR_7);
    FUNC_17(VAR_6 == VAR_5, "DeleteDC returned %u\n", VAR_6);


    VAR_8 = FUNC_3(VAR_7);
    FUNC_17(VAR_8 == ((void*)0), "CreateCompatibleDC returned %p\n", VAR_8);

    VAR_7 = FUNC_12( 0 );
    VAR_9 = FUNC_5(VAR_7, ((void*)0), ((void*)0), ((void*)0));
    FUNC_17(VAR_9 != 0, "CreateEnhMetaFileA failed\n");
    VAR_8 = FUNC_3( VAR_9 );
    FUNC_17(VAR_8 != ((void*)0), "CreateCompatibleDC failed\n");
    FUNC_17( FUNC_16( VAR_8, VAR_11 ) != 0, "SelectObject failed\n" );
    VAR_12 = FUNC_13( VAR_9, VAR_4 );
    FUNC_17( VAR_12 == VAR_2, "wrong caps %u\n", VAR_12 );
    FUNC_18( VAR_9, VAR_7, "enhmetafile dc", 1 );
    FUNC_15( VAR_9, &VAR_13 );
    FUNC_18( VAR_9, VAR_7, "enhmetafile dc", 1 );
    FUNC_7( VAR_8 );
    FUNC_8( FUNC_0( VAR_9 ));
    FUNC_14( 0, VAR_7 );

    VAR_9 = FUNC_6(((void*)0));
    FUNC_17(VAR_9 != 0, "CreateEnhMetaFileA failed\n");
    VAR_8 = FUNC_3( VAR_9 );
    FUNC_17(VAR_8 == ((void*)0), "CreateCompatibleDC succeeded\n");
    VAR_12 = FUNC_13( VAR_9, VAR_4 );
    FUNC_17( VAR_12 == VAR_1, "wrong caps %u\n", VAR_12 );
    FUNC_18( VAR_9, VAR_10, "metafile dc", 1 );
    FUNC_15( VAR_9, &VAR_13 );
    FUNC_18( VAR_9, VAR_10, "metafile dc", 1 );
    FUNC_9( FUNC_1( VAR_9 ));

    FUNC_10( VAR_11 );
    FUNC_7( VAR_10 );
}
