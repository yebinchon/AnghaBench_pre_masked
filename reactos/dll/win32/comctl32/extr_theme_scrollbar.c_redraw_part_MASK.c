
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int si ;
typedef enum SCROLL_HITTEST { ____Placeholder_SCROLL_HITTEST } SCROLL_HITTEST ;
struct TYPE_12__ {unsigned int left; unsigned int top; unsigned int bottom; unsigned int right; } ;
struct TYPE_11__ {int cbSize; int fMask; } ;
struct TYPE_10__ {unsigned int cy; unsigned int cx; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ SCROLLINFO ;
typedef TYPE_3__ RECT ;
typedef int HWND ;
typedef int HTHEME ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (int ,int *,int ,int ,int *,int ,TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (int ,TYPE_3__*,int ) ;
 int FUNC_6 (TYPE_3__*,unsigned int,unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (unsigned int,TYPE_2__*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_9(HWND VAR_18, HTHEME VAR_19, enum SCROLL_HITTEST VAR_20)
{
    DWORD VAR_21 = FUNC_3(VAR_18, VAR_4);
    BOOL VAR_22 = VAR_21 & VAR_6;
    SIZE VAR_23;
    RECT VAR_24, VAR_25;
    unsigned int VAR_26, VAR_27, VAR_28;

    if (VAR_20 == VAR_11) {
        FUNC_5(VAR_18, ((void*)0), VAR_16);
        return;
    }

    FUNC_4(VAR_18, &VAR_24);
    FUNC_6(&VAR_24, -VAR_24.left, -VAR_24.top);

    if (VAR_22) {
        VAR_26 = VAR_24.bottom;

        if (FUNC_0(FUNC_2(VAR_19, ((void*)0), VAR_5, VAR_3, ((void*)0), VAR_17, &VAR_23))) {
            FUNC_7("Could not get up arrow size.\n");
            VAR_27 = 0;
        } else
            VAR_27 = VAR_23.cy;

        if (FUNC_0(FUNC_2(VAR_19, ((void*)0), VAR_5, VAR_0, ((void*)0), VAR_17, &VAR_23))) {
            FUNC_7("Could not get down arrow size.\n");
            VAR_28 = 0;
        } else
            VAR_28 = VAR_23.cy;
    } else {
        VAR_26 = VAR_24.right;

        if (FUNC_0(FUNC_2(VAR_19, ((void*)0), VAR_5, VAR_1, ((void*)0), VAR_17, &VAR_23))) {
            FUNC_7("Could not get left arrow size.\n");
            VAR_27 = 0;
        } else
            VAR_27 = VAR_23.cx;

        if (FUNC_0(FUNC_2(VAR_19, ((void*)0), VAR_5, VAR_2, ((void*)0), VAR_17, &VAR_23))) {
            FUNC_7("Could not get right arrow size.\n");
            VAR_28 = 0;
        } else
            VAR_28 = VAR_23.cx;
    }

    if (VAR_26 < VAR_10 + VAR_27 + VAR_28)
        VAR_27 = VAR_28 = (VAR_26 - VAR_10)/2;

    VAR_25 = VAR_24;

    if (VAR_20 == VAR_13) {
        if (VAR_22)
            VAR_25.bottom = VAR_25.top + VAR_27;
        else
            VAR_25.right = VAR_25.left + VAR_27;
    } else if (VAR_20 == VAR_8) {
        if (VAR_22)
            VAR_25.top = VAR_25.bottom - VAR_28;
        else
            VAR_25.left = VAR_25.right - VAR_28;
    } else {
        unsigned int VAR_29, VAR_30;
        SCROLLINFO VAR_31;

        VAR_31.cbSize = sizeof(VAR_31);
        VAR_31.fMask = VAR_15;
        if (!FUNC_1(VAR_18, VAR_7, &VAR_31)) {
            FUNC_7("GetScrollInfo failed.\n");
            return;
        }

        FUNC_8(VAR_26 - VAR_27 - VAR_28, &VAR_31, &VAR_29, &VAR_30);

        if (VAR_20 == VAR_14) {
            if (VAR_22) {
                VAR_25.top = VAR_24.top + VAR_27;
                VAR_25.bottom = VAR_25.top + VAR_29;
            } else {
                VAR_25.left = VAR_24.left + VAR_27;
                VAR_25.right = VAR_25.left + VAR_29;
            }
        } else if (VAR_20 == VAR_12) {
            if (VAR_22) {
                VAR_25.top = VAR_24.top + VAR_27 + VAR_29;
                VAR_25.bottom = VAR_25.top + VAR_30;
            } else {
                VAR_25.left = VAR_24.left + VAR_27 + VAR_29;
                VAR_25.right = VAR_25.left + VAR_30;
            }
        } else if (VAR_20 == VAR_9) {
            if (VAR_22) {
                VAR_25.top = VAR_24.top + VAR_27 + VAR_29 + VAR_30;
                VAR_25.bottom = VAR_24.bottom - VAR_28;
            } else {
                VAR_25.left = VAR_24.left + VAR_27 + VAR_29 + VAR_30;
                VAR_25.right = VAR_24.right - VAR_28;
            }
        }
    }

    FUNC_5(VAR_18, &VAR_25, VAR_16);
}
