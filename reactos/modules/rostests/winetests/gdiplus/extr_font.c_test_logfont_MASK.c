
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lfa2 ;
typedef int lfa ;
typedef int Unit ;
typedef int UINT16 ;
struct TYPE_5__ {scalar_t__ lfHeight; int lfWidth; int lfEscapement; int lfOrientation; int lfWeight; int lfItalic; int lfUnderline; int lfStrikeOut; scalar_t__ lfCharSet; int lfOutPrecision; int lfClipPrecision; int lfQuality; int lfPitchAndFamily; int lfFaceName; } ;
typedef int REAL ;
typedef TYPE_1__ LOGFONTA ;
typedef int INT ;
typedef int HDC ;
typedef int GpStatus ;
typedef int GpGraphics ;
typedef int GpFontFamily ;
typedef int GpFont ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*,int **) ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int*) ;
 int FUNC_6 (int *,int **) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,int*) ;
 int FUNC_11 (int *,int ,int*) ;
 int FUNC_12 (int *,int *,TYPE_1__*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int VAR_5 ;
 int FUNC_15 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (double,int ) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (TYPE_1__*,int,int) ;
 int FUNC_20 (int,char*,...) ;

__attribute__((used)) static void FUNC_21(void)
{
    LOGFONTA VAR_8, VAR_9;
    GpFont *VAR_10;
    GpFontFamily *VAR_11;
    GpStatus VAR_12;
    GpGraphics *VAR_13;
    HDC VAR_14 = FUNC_13(0);
    INT VAR_15;
    REAL VAR_16;
    UINT16 VAR_17, VAR_18;
    Unit VAR_19;

    VAR_12 = FUNC_1(VAR_14, &VAR_13);
    FUNC_16(VAR_5, VAR_12);

    FUNC_19(&VAR_8, 0, sizeof(LOGFONTA));
    FUNC_19(&VAR_9, 0xff, sizeof(LOGFONTA));
    FUNC_18(VAR_8.lfFaceName, "Tahoma");

    VAR_12 = FUNC_0(VAR_14, &VAR_8, &VAR_10);
    FUNC_16(VAR_5, VAR_12);
    VAR_12 = FUNC_12(VAR_10, VAR_13, &VAR_9);
    FUNC_16(VAR_5, VAR_12);

    FUNC_20(VAR_9 < 0, "Expected negative height\n");
    FUNC_16(0, VAR_9);
    FUNC_16(0, VAR_9);
    FUNC_16(0, VAR_9);
    FUNC_20((VAR_9 >= 100) && (VAR_9 <= 900), "Expected weight to be set\n");
    FUNC_16(0, VAR_9);
    FUNC_16(0, VAR_9);
    FUNC_16(0, VAR_9);
    FUNC_20(VAR_9 == FUNC_14(VAR_14) || VAR_9 == VAR_0,
        "Expected %x or %x, got %x\n", FUNC_14(VAR_14), VAR_0, VAR_9);
    FUNC_16(0, VAR_9);
    FUNC_16(0, VAR_9);
    FUNC_16(0, VAR_9);
    FUNC_16(0, VAR_9);

    FUNC_2(VAR_10);

    FUNC_19(&VAR_8, 0, sizeof(LOGFONTA));
    VAR_8.lfHeight = 25;
    VAR_8.lfWidth = 25;
    VAR_8.lfEscapement = VAR_8.lfOrientation = 50;
    VAR_8.lfItalic = VAR_8.lfUnderline = VAR_8.lfStrikeOut = VAR_6;

    FUNC_19(&VAR_9, 0xff, sizeof(LOGFONTA));
    FUNC_18(VAR_8.lfFaceName, "Tahoma");

    VAR_12 = FUNC_0(VAR_14, &VAR_8, &VAR_10);
    FUNC_16(VAR_5, VAR_12);
    VAR_12 = FUNC_12(VAR_10, VAR_13, &VAR_9);
    FUNC_16(VAR_5, VAR_12);

    FUNC_20(VAR_9 < 0, "Expected negative height\n");
    FUNC_16(0, VAR_9);
    FUNC_16(0, VAR_9);
    FUNC_16(0, VAR_9);
    FUNC_20((VAR_9 >= 100) && (VAR_9 <= 900), "Expected weight to be set\n");
    FUNC_16(VAR_6, VAR_9);
    FUNC_16(VAR_6, VAR_9);
    FUNC_16(VAR_6, VAR_9);
    FUNC_20(VAR_9 == FUNC_14(VAR_14) || VAR_9 == VAR_0,
        "Expected %x or %x, got %x\n", FUNC_14(VAR_14), VAR_0, VAR_9);
    FUNC_16(0, VAR_9);
    FUNC_16(0, VAR_9);
    FUNC_16(0, VAR_9);
    FUNC_16(0, VAR_9);

    VAR_12 = FUNC_9(VAR_10, &VAR_15);
    FUNC_16(VAR_5, VAR_12);
    FUNC_20 (VAR_15 == (VAR_1 | VAR_4 | VAR_3),
            "Expected , got %d\n", VAR_15);

    VAR_12 = FUNC_10(VAR_10, &VAR_19);
    FUNC_16(VAR_5, VAR_12);
    FUNC_16(VAR_7, VAR_19);

    VAR_12 = FUNC_7(VAR_10, VAR_13, &VAR_16);
    FUNC_16(VAR_5, VAR_12);
    FUNC_17(25.347656, VAR_16);
    VAR_12 = FUNC_8(VAR_10, &VAR_16);
    FUNC_16(VAR_5, VAR_12);
    FUNC_17(21.0, VAR_16);

    VAR_12 = FUNC_6(VAR_10, &VAR_11);
    FUNC_16(VAR_5, VAR_12);
    VAR_12 = FUNC_5(VAR_11, VAR_2, &VAR_17);
    FUNC_16(VAR_5, VAR_12);
    FUNC_16(2048, VAR_17);
    VAR_12 = FUNC_11(VAR_11, VAR_2, &VAR_18);
    FUNC_16(VAR_5, VAR_12);
    FUNC_16(2472, VAR_18);
    FUNC_3(VAR_11);

    FUNC_2(VAR_10);

    FUNC_19(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.lfHeight = -25;
    FUNC_18(VAR_8.lfFaceName, "Tahoma");
    VAR_12 = FUNC_0(VAR_14, &VAR_8, &VAR_10);
    FUNC_16(VAR_5, VAR_12);
    FUNC_19(&VAR_9, 0xff, sizeof(VAR_9));
    VAR_12 = FUNC_12(VAR_10, VAR_13, &VAR_9);
    FUNC_16(VAR_5, VAR_12);
    FUNC_16(VAR_8.lfHeight, VAR_9);

    VAR_12 = FUNC_10(VAR_10, &VAR_19);
    FUNC_16(VAR_5, VAR_12);
    FUNC_16(VAR_7, VAR_19);

    VAR_12 = FUNC_7(VAR_10, VAR_13, &VAR_16);
    FUNC_16(VAR_5, VAR_12);
    FUNC_17(30.175781, VAR_16);
    VAR_12 = FUNC_8(VAR_10, &VAR_16);
    FUNC_16(VAR_5, VAR_12);
    FUNC_17(25.0, VAR_16);

    VAR_12 = FUNC_6(VAR_10, &VAR_11);
    FUNC_16(VAR_5, VAR_12);
    VAR_12 = FUNC_5(VAR_11, VAR_2, &VAR_17);
    FUNC_16(VAR_5, VAR_12);
    FUNC_16(2048, VAR_17);
    VAR_12 = FUNC_11(VAR_11, VAR_2, &VAR_18);
    FUNC_16(VAR_5, VAR_12);
    FUNC_16(2472, VAR_18);
    FUNC_3(VAR_11);

    FUNC_2(VAR_10);

    FUNC_4(VAR_13);
    FUNC_15(0, VAR_14);
}
