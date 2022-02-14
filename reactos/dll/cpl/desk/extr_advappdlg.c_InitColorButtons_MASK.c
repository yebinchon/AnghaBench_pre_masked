
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_11__ {int * crColor; } ;
struct TYPE_10__ {scalar_t__* hbmpColor; TYPE_4__ SchemeAdv; } ;
struct TYPE_9__ {int member_0; int member_1; } ;
struct TYPE_8__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;
typedef scalar_t__ HPEN ;
typedef scalar_t__ HGDIOBJ ;
typedef int HDC ;
typedef scalar_t__ HBRUSH ;
typedef TYPE_3__ GLOBALS ;
typedef TYPE_4__ COLOR_SCHEME ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,TYPE_1__*,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int ,int,int,int *) ;
 int VAR_10 ;
 int FUNC_12 (int ,TYPE_2__ const*,int) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ,scalar_t__) ;
 int FUNC_15 (int ,int ,int ,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int VAR_11 ;

__attribute__((used)) static VOID
FUNC_17(HWND VAR_12, GLOBALS* VAR_13)
{
    INT VAR_14;
    HDC VAR_15, VAR_16;
    RECT VAR_17;
    HBRUSH VAR_18;
    HPEN VAR_19;
    HWND VAR_20;
    HGDIOBJ VAR_21;
    COLOR_SCHEME *VAR_22 = &VAR_13->SchemeAdv;

    const POINT VAR_23[3] = {{29,6},{33,6},{31,8}};

    VAR_20 = FUNC_8(VAR_12, VAR_6);
    VAR_15 = FUNC_7(VAR_20);
    for (VAR_14 = 0; VAR_14 <= 2; VAR_14++)
    {

        VAR_16 = FUNC_1(VAR_15);


        VAR_13->hbmpColor[VAR_14] = FUNC_0(VAR_15, 36, 15);


        VAR_21 = FUNC_14(VAR_16, VAR_13->hbmpColor[VAR_14]);


        VAR_17.left = 0;
        VAR_17.top = 0;
        VAR_17.right = 36;
        VAR_17.bottom = 15;
        VAR_18 = FUNC_3(VAR_22->crColor[VAR_2]);
        FUNC_6(VAR_16, &VAR_17, VAR_18);
        FUNC_5(VAR_18);


        VAR_17.left = 1;
        VAR_17.top = 1;
        VAR_17.right = 23;
        VAR_17.bottom = 14;
        VAR_18 = FUNC_3(VAR_22->crColor[VAR_5]);
        FUNC_6(VAR_16, &VAR_17, VAR_18);
        FUNC_5(VAR_18);


        VAR_19 = FUNC_2(VAR_10, 1, VAR_22->crColor[VAR_4]);
        FUNC_14(VAR_16, VAR_19);
        FUNC_11(VAR_16, 26, 1, ((void*)0));
        FUNC_10(VAR_16, 26, 14);
        FUNC_14(VAR_16, FUNC_9(VAR_0));
        FUNC_5(VAR_19);


        VAR_19 = FUNC_2(VAR_10, 1, VAR_22->crColor[VAR_3]);
        FUNC_14(VAR_16,VAR_19);
        FUNC_11(VAR_16, 27, 1, ((void*)0));
        FUNC_10(VAR_16, 27, 14);
        FUNC_14(VAR_16, FUNC_9(VAR_0));
        FUNC_5(VAR_19);


        VAR_19 = FUNC_2(VAR_10, 1, VAR_22->crColor[VAR_5]);
        VAR_18 = FUNC_3(VAR_22->crColor[VAR_5]);
        FUNC_14(VAR_16, VAR_19);
        FUNC_14(VAR_16, VAR_18);
        FUNC_16(VAR_16, VAR_11);


        FUNC_12(VAR_16, VAR_23, 3);


        FUNC_14(VAR_16,VAR_21);
        FUNC_4(VAR_16);
        FUNC_5(VAR_19);
        FUNC_5(VAR_18);
    }

    FUNC_13(VAR_20, VAR_15);


    FUNC_15(VAR_12, VAR_6, VAR_1, (WPARAM)VAR_9, (LPARAM)VAR_13->hbmpColor[0]);
    FUNC_15(VAR_12, VAR_7, VAR_1, (WPARAM)VAR_9, (LPARAM)VAR_13->hbmpColor[1]);
    FUNC_15(VAR_12, VAR_8, VAR_1, (WPARAM)VAR_9, (LPARAM)VAR_13->hbmpColor[2]);
}
