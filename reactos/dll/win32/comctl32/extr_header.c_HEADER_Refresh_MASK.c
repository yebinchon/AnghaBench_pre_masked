
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_18__ {scalar_t__ uNumItem; int iHotItem; int dwStyle; int iHotDivider; scalar_t__ bDragging; TYPE_1__* items; scalar_t__ hFont; int hwndSelf; int bRectsValid; } ;
struct TYPE_17__ {scalar_t__ left; scalar_t__ right; } ;
struct TYPE_16__ {TYPE_2__ rect; } ;
typedef TYPE_2__ RECT ;
typedef int LRESULT ;
typedef scalar_t__ INT ;
typedef int * HTHEME ;
typedef scalar_t__ HFONT ;
typedef TYPE_3__ HEADER_INFO ;
typedef int HDC ;
typedef int HBRUSH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,TYPE_2__*,int ,int) ;
 int FUNC_1 (int *,int ,int ,int ,TYPE_2__*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*,int ,int,int,int) ;
 int FUNC_9 (TYPE_3__*,scalar_t__) ;
 int FUNC_10 (TYPE_3__*,int ,int ,TYPE_2__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,TYPE_2__*) ;
 int VAR_16 ;
 scalar_t__ FUNC_14 (int ,scalar_t__) ;
 int VAR_17 ;

__attribute__((used)) static void
FUNC_15 (HEADER_INFO *VAR_18, HDC VAR_19)
{
    HFONT VAR_20, VAR_21;
    RECT VAR_22, VAR_23;
    HBRUSH VAR_24;
    UINT VAR_25;
    INT VAR_26;
    LRESULT VAR_27;
    HTHEME VAR_28 = FUNC_6 (VAR_18->hwndSelf);

    if (!VAR_18->bRectsValid)
        FUNC_11(VAR_18);


    FUNC_3 (VAR_18->hwndSelf, &VAR_22);
    VAR_27 = FUNC_10(VAR_18, VAR_6, VAR_19, &VAR_22);

    if (VAR_18->bDragging)
 FUNC_12(VAR_11);

    VAR_20 = VAR_18->hFont ? VAR_18->hFont : FUNC_4 (VAR_16);
    VAR_21 = FUNC_14 (VAR_19, VAR_20);


    if (VAR_18->uNumItem == 0 && VAR_28 == ((void*)0)) {
        VAR_24 = FUNC_5(VAR_8);
        FUNC_2(VAR_19, &VAR_22, VAR_24);
    }

    VAR_26 = VAR_22.left;
    for (VAR_25 = 0; VAR_26 <= VAR_22.right && VAR_25 < VAR_18->uNumItem; VAR_25++) {
        int VAR_29 = FUNC_9(VAR_18,VAR_25);
        if (FUNC_13(VAR_19, &VAR_18->items[VAR_29].rect))
            FUNC_8(VAR_18, VAR_19, VAR_29, VAR_18->iHotItem == VAR_29, VAR_27);
        VAR_26 = VAR_18->items[VAR_29].rect.right;
    }

    VAR_23 = VAR_22;
    VAR_23.left = VAR_26;
    if ((VAR_26 <= VAR_22.right) && FUNC_13(VAR_19, &VAR_23) && (VAR_18->uNumItem > 0)) {
        if (VAR_28 != ((void*)0)) {
            FUNC_1(VAR_28, VAR_19, VAR_15, VAR_14, &VAR_23, ((void*)0));
        }
        else if (VAR_18->dwStyle & VAR_13) {
            VAR_24 = FUNC_5(VAR_8);
            FUNC_2(VAR_19, &VAR_23, VAR_24);
        }
        else
        {
            if (VAR_18->dwStyle & VAR_12)
                FUNC_0 (VAR_19, &VAR_23, VAR_10, VAR_4|VAR_1|VAR_0|VAR_3|VAR_2);
            else
                FUNC_0 (VAR_19, &VAR_23, VAR_9, VAR_0|VAR_2);
        }
    }

    if (VAR_18->iHotDivider != -1)
        FUNC_7(VAR_18, VAR_19);

    if (VAR_18->bDragging)
 FUNC_12(VAR_17);
    FUNC_14 (VAR_19, VAR_21);

    if (VAR_27 & VAR_7)
        FUNC_10(VAR_18, VAR_5, VAR_19, &VAR_22);
}
