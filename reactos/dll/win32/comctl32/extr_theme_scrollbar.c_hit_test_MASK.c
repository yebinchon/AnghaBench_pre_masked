
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int si ;
typedef enum SCROLL_HITTEST { ____Placeholder_SCROLL_HITTEST } SCROLL_HITTEST ;
struct TYPE_14__ {unsigned int y; unsigned int x; } ;
struct TYPE_13__ {unsigned int bottom; unsigned int right; int top; int left; } ;
struct TYPE_12__ {int cbSize; int fMask; } ;
struct TYPE_11__ {unsigned int cy; unsigned int cx; } ;
typedef TYPE_1__ SIZE ;
typedef TYPE_2__ SCROLLINFO ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__ POINT ;
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
 int FUNC_5 (TYPE_3__*,int ,int ) ;
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
 int FUNC_6 (char*) ;
 int FUNC_7 (unsigned int,TYPE_2__*,unsigned int*,unsigned int*) ;

__attribute__((used)) static enum SCROLL_HITTEST FUNC_8(HWND VAR_17, HTHEME VAR_18, POINT VAR_19)
{
    RECT VAR_20;
    DWORD VAR_21 = FUNC_3(VAR_17, VAR_4);
    BOOL VAR_22 = VAR_21 & VAR_6;
    SIZE VAR_23;
    SCROLLINFO VAR_24;
    unsigned int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;

    FUNC_4(VAR_17, &VAR_20);
    FUNC_5(&VAR_20, -VAR_20.left, -VAR_20.top);

    if (VAR_22) {
        VAR_25 = VAR_19.y;
        VAR_26 = VAR_20.bottom;

        if (FUNC_0(FUNC_2(VAR_18, ((void*)0), VAR_5, VAR_3, ((void*)0), VAR_16, &VAR_23))) {
            FUNC_6("Could not get up arrow size.\n");
            VAR_27 = 0;
        } else
            VAR_27 = VAR_23.cy;

        if (FUNC_0(FUNC_2(VAR_18, ((void*)0), VAR_5, VAR_0, ((void*)0), VAR_16, &VAR_23))) {
            FUNC_6("Could not get down arrow size.\n");
            VAR_28 = 0;
        } else
            VAR_28 = VAR_23.cy;
    } else {
        VAR_25 = VAR_19.x;
        VAR_26 = VAR_20.right;

        if (FUNC_0(FUNC_2(VAR_18, ((void*)0), VAR_5, VAR_1, ((void*)0), VAR_16, &VAR_23))) {
            FUNC_6("Could not get left arrow size.\n");
            VAR_27 = 0;
        } else
            VAR_27 = VAR_23.cx;

        if (FUNC_0(FUNC_2(VAR_18, ((void*)0), VAR_5, VAR_2, ((void*)0), VAR_16, &VAR_23))) {
            FUNC_6("Could not get right arrow size.\n");
            VAR_28 = 0;
        } else
            VAR_28 = VAR_23.cx;
    }

    if (VAR_19.x < 0 || VAR_19.x > VAR_20.right || VAR_19.y < 0 || VAR_19.y > VAR_20.bottom)
        return VAR_11;

    if (VAR_26 < VAR_10 + VAR_27 + VAR_28)
        VAR_27 = VAR_28 = (VAR_26 - VAR_10)/2;

    if (VAR_25 < VAR_27)
        return VAR_13;

    if (VAR_25 > VAR_26 - VAR_28)
        return VAR_8;

    VAR_24.cbSize = sizeof(VAR_24);
    VAR_24.fMask = VAR_15;
    if (!FUNC_1(VAR_17, VAR_7, &VAR_24)) {
        FUNC_6("GetScrollInfo failed.\n");
        return VAR_11;
    }

    FUNC_7(VAR_26 - VAR_27 - VAR_28, &VAR_24, &VAR_29, &VAR_30);

    if (VAR_25 < VAR_27 + VAR_29)
        return VAR_14;
    else if (VAR_25 < VAR_27 + VAR_29 + VAR_30)
        return VAR_12;
    else
        return VAR_9;
}
