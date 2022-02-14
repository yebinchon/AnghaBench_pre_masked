
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_18__ {int clrWindowText; int clrWindow; int clrActiveCaption; int clrGrayText; } ;
struct TYPE_14__ {int right; } ;
struct TYPE_16__ {int bottom; int left; int right; int top; } ;
struct TYPE_17__ {int dwStyle; int nrFields; int select; int nCharsEntered; scalar_t__ bCalDepressed; int calbutton; int charsEntered; scalar_t__ haveFocus; TYPE_3__* fieldRect; TYPE_1__ checkbox; int hFont; TYPE_3__ rcDraw; scalar_t__ dateValid; } ;
struct TYPE_15__ {int cy; int cx; } ;
typedef TYPE_2__ SIZE ;
typedef int SHORT ;
typedef TYPE_3__ RECT ;
typedef int INT ;
typedef int HFONT ;
typedef int HDC ;
typedef int HBRUSH ;
typedef TYPE_4__ DATETIME_INFO ;
typedef int COLORREF ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int ,int,int*) ;
 int FUNC_3 (TYPE_4__*,int,scalar_t__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ,int) ;
 int FUNC_6 (int ,scalar_t__*,int ,TYPE_3__*,int) ;
 int FUNC_7 (int ,TYPE_3__*,int ) ;
 int FUNC_8 (int ,scalar_t__*,int ,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,int,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_3__*,int ,int ,int,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_5__ VAR_11 ;
 int FUNC_15 (scalar_t__*,int ,int) ;
 int FUNC_16 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_17 (DATETIME_INFO *VAR_12, HDC VAR_13)
{
    FUNC_14("\n");

    if (VAR_12->dateValid) {
        int VAR_14, VAR_15;
        RECT *VAR_16;
        RECT *VAR_17 = &VAR_12->rcDraw;
        SIZE VAR_18;
        COLORREF VAR_19;
        SHORT VAR_20 = 0;
        HFONT VAR_21 = FUNC_10 (VAR_13, VAR_12->hFont);
        INT VAR_22 = FUNC_11 (VAR_13, VAR_9);
        WCHAR VAR_23[80];

        FUNC_3 (VAR_12, 0, VAR_23, FUNC_0(VAR_23));
        FUNC_8 (VAR_13, VAR_23, FUNC_16(VAR_23), &VAR_18);
        VAR_17->bottom = VAR_18.cy + 2;

        VAR_15 = VAR_12->checkbox.right = ((VAR_12->dwStyle & VAR_4) ? 18 : 2);

        for (VAR_14 = 0; VAR_14 < VAR_12->nrFields; VAR_14++) {
            FUNC_3 (VAR_12, VAR_14, VAR_23, FUNC_0(VAR_23));
            FUNC_8 (VAR_13, VAR_23, FUNC_16(VAR_23), &VAR_18);
            FUNC_2 (VAR_12, VAR_13, VAR_14, &VAR_20);
            VAR_16 = &VAR_12->fieldRect[VAR_14];
            VAR_16->left = VAR_15;
            VAR_16->right = VAR_15 + VAR_20;
            VAR_16->top = VAR_17->top;
            VAR_16->bottom = VAR_17->bottom;
            VAR_15 = VAR_16->right;

            if (VAR_12->dwStyle & VAR_10)
                VAR_19 = FUNC_13 (VAR_13, VAR_11.clrGrayText);
            else if ((VAR_12->haveFocus) && (VAR_14 == VAR_12->select)) {
                RECT VAR_24;


                HBRUSH VAR_25 = FUNC_1 (VAR_11.clrActiveCaption);

                if (VAR_12->nCharsEntered)
                {
                    FUNC_15(VAR_23, VAR_12->charsEntered, VAR_12->nCharsEntered * sizeof(WCHAR));
                    VAR_23[VAR_12->nCharsEntered] = 0;
                    FUNC_8 (VAR_13, VAR_23, FUNC_16(VAR_23), &VAR_18);
                }

                FUNC_12(&VAR_24, 0, 0, VAR_18.cx, VAR_18.cy);

                FUNC_9(&VAR_24, (VAR_16->right + VAR_16->left - VAR_18.cx)/2,
                                       (VAR_16->bottom - VAR_18.cy)/2);

                FUNC_7(VAR_13, &VAR_24, VAR_25);
                FUNC_4 (VAR_25);
                VAR_19 = FUNC_13 (VAR_13, VAR_11.clrWindow);
            }
            else
                VAR_19 = FUNC_13 (VAR_13, VAR_11.clrWindowText);


            FUNC_6 (VAR_13, VAR_23, FUNC_16(VAR_23), VAR_16, VAR_6 | VAR_8 | VAR_7);
            FUNC_13 (VAR_13, VAR_19);
        }
        FUNC_11 (VAR_13, VAR_22);
        FUNC_10 (VAR_13, VAR_21);
    }

    if (!(VAR_12->dwStyle & VAR_5)) {
        FUNC_5(VAR_13, &VAR_12->calbutton, VAR_3,
                         VAR_2 | (VAR_12->bCalDepressed ? VAR_1 : 0) |
                         (VAR_12->dwStyle & VAR_10 ? VAR_0 : 0) );
    }
}
