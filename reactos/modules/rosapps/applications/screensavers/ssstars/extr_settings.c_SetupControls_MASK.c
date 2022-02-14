
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int lf ;
typedef size_t UINT ;
struct TYPE_10__ {size_t bmHeight; } ;
struct TYPE_9__ {int lfHeight; int lfFaceName; int lfQuality; int lfCharSet; int lfWeight; } ;
struct TYPE_8__ {size_t cy; } ;
typedef int TCHAR ;
typedef int Strings ;
typedef TYPE_1__ SIZE ;
typedef int LPARAM ;
typedef TYPE_2__ LOGFONT ;
typedef int HWND ;
typedef scalar_t__ HINSTANCE ;
typedef scalar_t__ HGDIOBJ ;
typedef scalar_t__ HFONT ;
typedef int HDC ;
typedef scalar_t__ HBITMAP ;
typedef TYPE_3__ BITMAP ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int,TYPE_3__*) ;
 int FUNC_6 (int ,int *,size_t,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (scalar_t__,int ,int ,int ,int ,int) ;
 size_t FUNC_9 (scalar_t__,int ,int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (int,int,int) ;
 size_t VAR_17 ;
 int FUNC_13 (int ,int ) ;
 int * VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (int ,int ,int ,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_18 (int ,int,size_t,int *,size_t) ;
 int FUNC_19 (TYPE_2__*,int) ;
 int * FUNC_20 (char*) ;
 int FUNC_21 (int ,int *) ;

__attribute__((used)) static void FUNC_22(HWND VAR_22)
{
    TCHAR VAR_23[256];
    HINSTANCE VAR_24;
    UINT VAR_25, VAR_26;
    LOGFONT VAR_27;
    HFONT VAR_28;
    HBITMAP VAR_29;
    HDC VAR_30, VAR_31;
    HGDIOBJ VAR_32, VAR_33;
    SIZE VAR_34;
    SIZE VAR_35;
    BITMAP VAR_36;

    VAR_24 = (HINSTANCE)FUNC_7(VAR_22, VAR_4);

    FUNC_15(VAR_22, VAR_8, VAR_20, VAR_2, FUNC_11(VAR_15, VAR_14));

    FUNC_15(VAR_22, VAR_9, VAR_20, VAR_2, FUNC_11(1, 100));

    for (VAR_25 = 0; VAR_25 < VAR_17; VAR_25++)
    {
        FUNC_9(VAR_24, VAR_18[VAR_25], VAR_23, sizeof(VAR_23)/sizeof(TCHAR));
        FUNC_15(VAR_22, VAR_6, VAR_1, 0, (LPARAM)VAR_23);
    }

    VAR_29 = FUNC_8(VAR_24, FUNC_10(VAR_5), VAR_11, 0, 0, VAR_12 | VAR_13);

    VAR_30 = FUNC_4(VAR_22);
    VAR_31 = FUNC_0(VAR_30);


    FUNC_19(&VAR_27, sizeof(VAR_27));

    VAR_27.lfWeight = VAR_3;
    VAR_27.lfCharSet = VAR_0;
    VAR_27.lfQuality = VAR_16;
    VAR_27.lfHeight = 36;
    FUNC_21(VAR_27.lfFaceName, FUNC_20("Tahoma"));

    VAR_28 = FUNC_1(&VAR_27);

    VAR_32 = FUNC_14(VAR_31, VAR_29);
    VAR_33 = FUNC_14(VAR_31, VAR_28);

    FUNC_16(VAR_31, VAR_21);
    FUNC_17(VAR_31, FUNC_12(0xFF, 0xFF, 0xFF));

    VAR_25 = FUNC_9(VAR_24, VAR_10, VAR_23, sizeof(VAR_23)/sizeof(TCHAR));

    FUNC_6(VAR_31, FUNC_20("ReactOS"), 7, &VAR_34);
    FUNC_6(VAR_31, VAR_23, VAR_25, &VAR_35);

    FUNC_5(VAR_29, sizeof(BITMAP), &VAR_36);

    VAR_26 = VAR_36.bmHeight - VAR_34.cy - VAR_35.cy;

    FUNC_18(VAR_31, 16, VAR_26 * 2 / 5, FUNC_20("ReactOS"), 7);
    FUNC_18(VAR_31, 16, VAR_26 * 3 / 5 + VAR_34.cy, VAR_23, VAR_25);

    FUNC_14(VAR_31, VAR_32);
    FUNC_14(VAR_31, VAR_33);

    FUNC_3(VAR_28);

    FUNC_2(VAR_31);
    FUNC_13(VAR_22, VAR_30);

    FUNC_15(VAR_22, VAR_7, VAR_19, VAR_11, (LPARAM)VAR_29);
}
