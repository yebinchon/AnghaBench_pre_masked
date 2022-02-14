
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int lf ;
typedef int g_buf ;
struct TYPE_27__ {int member_1; int member_0; } ;
struct TYPE_26__ {int member_1; int member_0; } ;
struct TYPE_25__ {int member_1; int member_0; } ;
struct TYPE_24__ {int member_1; int member_0; } ;
struct TYPE_32__ {TYPE_4__ member_3; TYPE_3__ member_2; TYPE_2__ member_1; TYPE_1__ member_0; } ;
struct TYPE_31__ {int x; int y; } ;
struct TYPE_30__ {int tmPitchAndFamily; } ;
struct TYPE_29__ {int x; int y; } ;
struct TYPE_28__ {int biBitCount; } ;
struct TYPE_23__ {TYPE_5__ bmiHeader; } ;
struct TYPE_22__ {int gmBlackBoxX; int gmBlackBoxY; scalar_t__ gmCellIncY; scalar_t__ gmCellIncX; TYPE_6__ gmptGlyphOrigin; } ;
struct TYPE_21__ {int lfHeight; int lfQuality; int lfFaceName; } ;
typedef TYPE_7__ TEXTMETRICA ;
typedef TYPE_8__ POINT ;
typedef TYPE_9__ MAT2 ;
typedef TYPE_10__ LOGFONTA ;
typedef int HFONT ;
typedef int HDC ;
typedef TYPE_11__ GLYPHMETRICS ;
typedef int DWORD ;
typedef int COLORREF ;
typedef int BYTE ;
typedef int BOOL ;
typedef TYPE_12__ BITMAPINFO ;


 int VAR_0 ;
 int FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int ,int *,char const*,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char const,int,TYPE_11__*,int,int*,TYPE_9__ const*) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_7__*) ;
 int FUNC_8 (int ,int ,char*) ;
 int VAR_5 ;
 int FUNC_9 (int,int,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int,int,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (TYPE_12__ const*) ;
 char* FUNC_17 (TYPE_12__ const*,int*) ;
 int* VAR_9 ;
 int FUNC_18 (TYPE_10__*,int ,int) ;
 int FUNC_19 (int,char*,int ) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (int ,char*) ;
 int FUNC_23 (char const*) ;

__attribute__((used)) static void FUNC_24( HDC VAR_10, const BITMAPINFO *VAR_11, BYTE *VAR_12, BOOL VAR_13 )
{
    DWORD VAR_14 = FUNC_16(VAR_11), VAR_15;
    LOGFONTA VAR_16;
    HFONT VAR_17;
    GLYPHMETRICS VAR_18;
    BYTE VAR_19[10000];
    int VAR_20, VAR_21, VAR_22, VAR_23;
    static const MAT2 VAR_24 = { {0,1}, {0,0}, {0,0}, {0,1} };
    char *VAR_25 = ((void*)0), *VAR_26 = ((void*)0);
    static const char VAR_27[] = "Hello Wine";
    POINT VAR_28, VAR_29;
    static const BYTE VAR_30[4] = { 0x00, 0x00, 0x00, 0x00 };
    TEXTMETRICA VAR_31;
    COLORREF VAR_32;

    for(VAR_20 = 0; VAR_20 < VAR_14; VAR_20++)
        VAR_12[VAR_20] = VAR_30[VAR_20 % 4];

    FUNC_18( &VAR_16, 0, sizeof(VAR_16) );
    FUNC_22( VAR_16.lfFaceName, "Tahoma" );
    VAR_16.lfHeight = 24;
    VAR_16.lfQuality = VAR_13 ? VAR_0 : VAR_5;

    VAR_17 = FUNC_0( &VAR_16 );
    VAR_17 = FUNC_10( VAR_10, VAR_17 );

    FUNC_7( VAR_10, &VAR_31 );
    if (!(VAR_31.tmPitchAndFamily & VAR_7))
    {
        FUNC_20( "skipping as a bitmap font has been selected for Tahoma.\n" );
        FUNC_1( FUNC_10( VAR_10, VAR_17 ) );
        return;
    }

    FUNC_14( VAR_10, FUNC_9(0xff, 0x00, 0x00) );
    FUNC_13( VAR_10, VAR_6 );
    FUNC_11( VAR_10, VAR_8 );
    VAR_28.x = 10;
    VAR_28.y = 100;

    FUNC_2( VAR_10, VAR_28.x, VAR_28.y, 0, ((void*)0), VAR_27, FUNC_23(VAR_27), ((void*)0) );
    VAR_25 = FUNC_17( VAR_11, VAR_12 );

    for(VAR_20 = 0; VAR_20 < VAR_14; VAR_20++)
        VAR_12[VAR_20] = VAR_30[VAR_20 % 4];

    if (VAR_11->bmiHeader.biBitCount <= 8) VAR_13 = VAR_1;

    VAR_32 = FUNC_6( VAR_10 );
    for (VAR_20 = 0; VAR_20 < FUNC_23(VAR_27); VAR_20++)
    {
        DWORD VAR_33 = VAR_13 ? VAR_4 : VAR_3;

        VAR_15 = FUNC_3( VAR_10, VAR_27[VAR_20], VAR_33, &VAR_18, 0, ((void*)0), &VAR_24 );

        if (VAR_15 == VAR_2) continue;

        if (VAR_15) FUNC_3( VAR_10, VAR_27[VAR_20], VAR_33, &VAR_18, sizeof(VAR_19), VAR_19, &VAR_24 );

        VAR_29.x = VAR_28.x + VAR_18.gmptGlyphOrigin.x;
        VAR_29.y = VAR_28.y - VAR_18.gmptGlyphOrigin.y;

        VAR_28.x += VAR_18.gmCellIncX;
        VAR_28.y += VAR_18.gmCellIncY;

        if (!VAR_15) continue;

        if (VAR_13)
        {
            VAR_21 = (VAR_18.gmBlackBoxX + 3) & ~3;

            for (VAR_23 = 0; VAR_23 < VAR_18.gmBlackBoxY; VAR_23++)
            {
                BYTE *VAR_34 = VAR_19 + VAR_23 * VAR_21;
                COLORREF VAR_35;

                for (VAR_22 = 0; VAR_22 < VAR_18.gmBlackBoxX; VAR_22++)
                {
                    if (VAR_34[VAR_22] <= 1) continue;
                    if (VAR_34[VAR_22] >= 16) VAR_35 = VAR_32;
                    else
                    {
                        VAR_35 = FUNC_4( VAR_10, VAR_29.x + VAR_22, VAR_29.y + VAR_23 );
                        VAR_35 = FUNC_15( VAR_35, VAR_32, VAR_34[VAR_22] );
                    }
                    FUNC_12( VAR_10, VAR_29.x + VAR_22, VAR_29.y + VAR_23, VAR_35 );
                }
            }
        }
        else
        {
            VAR_21 = ((VAR_18.gmBlackBoxX + 31) >> 3) & ~3;

            for (VAR_23 = 0; VAR_23 < VAR_18.gmBlackBoxY; VAR_23++)
            {
                BYTE *VAR_36 = VAR_19 + VAR_23 * VAR_21;
                for (VAR_22 = 0; VAR_22 < VAR_18.gmBlackBoxX; VAR_22++)
                {
                    if (VAR_36[VAR_22 / 8] & VAR_9[VAR_22 % 8])
                        FUNC_12( VAR_10, VAR_29.x + VAR_22, VAR_29.y + VAR_23, VAR_32 );
                }
            }
        }
    }

    VAR_26 = FUNC_17( VAR_11, VAR_12 );
    FUNC_19( !FUNC_21( VAR_25, VAR_26 ), "hash mismatch - aa %d\n", VAR_13 );

    FUNC_8( FUNC_5(), 0, VAR_26 );
    FUNC_8( FUNC_5(), 0, VAR_25 );

    VAR_17 = FUNC_10( VAR_10, VAR_17 );
    FUNC_1( VAR_17 );
}
