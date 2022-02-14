
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_12__ {int * crColor; scalar_t__ bFlatMenus; } ;
struct TYPE_11__ {int left; int right; scalar_t__ bottom; int top; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_1__* LPRECT ;
typedef int INT ;
typedef int HWND ;
typedef int HPEN ;
typedef int HMENU ;
typedef int HGDIOBJ ;
typedef int HFONT ;
typedef int HDC ;
typedef int HBRUSH ;
typedef int DWORD ;
typedef TYPE_3__ COLOR_SCHEME ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_4 (int ,int *,int,TYPE_1__*,int) ;
 int FUNC_5 (int ,TYPE_1__*,int ) ;
 int FUNC_6 (int ,TYPE_1__*,int ) ;
 int FUNC_7 (int ,int,int *,int,int ) ;
 int FUNC_8 (TYPE_1__*,int,int) ;
 int FUNC_9 (int ,int,scalar_t__) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 (int ,int,scalar_t__,int *) ;
 int VAR_18 ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int VAR_19 ;
 int VAR_20 ;

DWORD
FUNC_15(HWND VAR_21, HDC VAR_22, LPRECT VAR_23, HMENU VAR_24, HFONT VAR_25, COLOR_SCHEME *VAR_26)
{
    HBRUSH VAR_27;
    HPEN VAR_28;
    HGDIOBJ VAR_29, VAR_30;
    BOOL VAR_31;
    INT VAR_32, VAR_33, VAR_34;
    RECT VAR_35;
    WCHAR VAR_36[128];
    UINT VAR_37 = VAR_13 | VAR_15 | VAR_14;

    VAR_31 = VAR_26->bFlatMenus;

    if (VAR_31)
        VAR_27 = FUNC_1(VAR_26->crColor[VAR_9]);
    else
        VAR_27 = FUNC_1(VAR_26->crColor[VAR_8]);
    FUNC_5(VAR_22, VAR_23, VAR_27);
    FUNC_2(VAR_27);

    VAR_28 = FUNC_0(VAR_18, 0, VAR_26->crColor[VAR_2]);
    VAR_29 = FUNC_11(VAR_22, VAR_28);
    FUNC_10(VAR_22, VAR_23->left, VAR_23->bottom - 1, ((void*)0));
    FUNC_9(VAR_22, VAR_23->right, VAR_23->bottom - 1);
    FUNC_11(VAR_22, VAR_29);
    FUNC_2(VAR_28);

    VAR_33 = (VAR_31 ? VAR_9 : VAR_8);
    VAR_34 = VAR_23->left;
    VAR_30 = FUNC_11(VAR_22, VAR_25);
    for (VAR_32 = 0; VAR_32 < 3; VAR_32++)
    {
        FUNC_7(VAR_24, VAR_32, VAR_36, 128, VAR_17);

        VAR_35.left = VAR_35.right = VAR_34;
        VAR_35.top = VAR_23->top;
        VAR_35.bottom = VAR_23->bottom;
        FUNC_4(VAR_22, VAR_36, -1, &VAR_35, VAR_14 | VAR_12);
        VAR_35.bottom = VAR_23->bottom;
        VAR_35.right += VAR_16;
        VAR_34 += VAR_35.right - VAR_35.left;

        if (VAR_32 == 2)
        {
            if (VAR_31)
            {
                FUNC_14(VAR_22, VAR_26->crColor[VAR_7]);
                FUNC_12(VAR_22, VAR_26->crColor[VAR_6]);

                FUNC_8 (&VAR_35, -1, -1);
                VAR_27 = FUNC_1(VAR_26->crColor[VAR_10]);
                FUNC_5(VAR_22, &VAR_35, VAR_27);
                FUNC_2(VAR_27);

                FUNC_8 (&VAR_35, 1, 1);
                VAR_27 = FUNC_1(VAR_26->crColor[VAR_6]);
                FUNC_6(VAR_22, &VAR_35, VAR_27);
                FUNC_2(VAR_27);
            }
            else
            {
                FUNC_14(VAR_22, VAR_26->crColor[VAR_11]);
                FUNC_12(VAR_22, VAR_26->crColor[VAR_8]);
                FUNC_3(VAR_22, &VAR_35, VAR_0, VAR_1);
            }
        }
        else
        {
            if (VAR_32 == 1)
                FUNC_14(VAR_22, VAR_26->crColor[VAR_5]);
            else
                FUNC_14(VAR_22, VAR_26->crColor[VAR_11]);

            FUNC_12(VAR_22, VAR_26->crColor[VAR_33]);
            VAR_27 = FUNC_1(VAR_26->crColor[VAR_33]);
            FUNC_5(VAR_22, &VAR_35, VAR_27);
            FUNC_2(VAR_27);
        }

        FUNC_13(VAR_22, VAR_19);

        VAR_35.left += VAR_16 / 2;
        VAR_35.right -= VAR_16 / 2;

        if (VAR_32 == 1)
        {
            ++VAR_35.left; ++VAR_35.top; ++VAR_35.right; ++VAR_35.bottom;
            FUNC_14(VAR_22, VAR_26->crColor[VAR_3]);
            FUNC_4(VAR_22, VAR_36, -1, &VAR_35, VAR_37);
            --VAR_35.left; --VAR_35.top; --VAR_35.right; --VAR_35.bottom;
            FUNC_14(VAR_22, VAR_26->crColor[VAR_4]);
        }
        FUNC_4(VAR_22, VAR_36, -1, &VAR_35, VAR_37);
    }
    FUNC_11(VAR_22, VAR_30);

    return VAR_20;
}
