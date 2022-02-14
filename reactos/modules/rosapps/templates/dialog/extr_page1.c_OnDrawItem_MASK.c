
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int top; int bottom; scalar_t__ left; scalar_t__ right; } ;
struct TYPE_10__ {int itemID; int itemAction; int itemState; int hDC; TYPE_1__ rcItem; int hwndItem; } ;
struct TYPE_9__ {int top; int bottom; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_8__ {int tmHeight; } ;
typedef TYPE_2__ TEXTMETRIC ;
typedef int TCHAR ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__* LPDRAWITEMSTRUCT ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef int HDC ;
typedef int HBITMAP ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int,scalar_t__,int,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int,scalar_t__) ;
 int FUNC_7 (int ,int ,int,int *,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_9(HWND VAR_9, LPARAM VAR_10)
{

    TCHAR VAR_11[VAR_0];

    TEXTMETRIC VAR_12;
    int VAR_13;
    HDC VAR_14;
    LPDRAWITEMSTRUCT VAR_15;
    RECT VAR_16;

    VAR_15 = (LPDRAWITEMSTRUCT)VAR_10;

    if (VAR_15->itemID != -1) {

        switch (VAR_15->itemAction) {
        case 128:
        case 130:

            VAR_8 = (HBITMAP)FUNC_6(VAR_15->hwndItem, VAR_1, VAR_15->itemID, (LPARAM)0);
            VAR_14 = FUNC_1(VAR_15->hDC);
            VAR_7 = FUNC_5(VAR_14, VAR_8);
            FUNC_0(VAR_15->hDC,
                   VAR_15->rcItem.left, VAR_15->rcItem.top,
                   VAR_15->rcItem.right - VAR_15->rcItem.left,
                   VAR_15->rcItem.bottom - VAR_15->rcItem.top,
                   VAR_14, 0, 0, VAR_4);

            FUNC_6(VAR_15->hwndItem, VAR_2, VAR_15->itemID, (LPARAM)VAR_11);
            FUNC_4(VAR_15->hDC, &VAR_12);
            VAR_13 = (VAR_15->rcItem.bottom + VAR_15->rcItem.top - VAR_12.tmHeight) / 2;
            FUNC_7(VAR_15->hDC, VAR_5 + 6, VAR_13, VAR_11, FUNC_8(VAR_11));
            FUNC_5(VAR_14, VAR_7);
            FUNC_2(VAR_14);

            if (VAR_15->itemState & VAR_3) {

                VAR_16.left = VAR_15->rcItem.left;
                VAR_16.top = VAR_15->rcItem.top;
                VAR_16.right = VAR_15->rcItem.left + VAR_5;
                VAR_16.bottom = VAR_15->rcItem.top + VAR_6;

                FUNC_3(VAR_15->hDC, &VAR_16);
            }
            break;
        case 129:


            break;
        }
    }
}
