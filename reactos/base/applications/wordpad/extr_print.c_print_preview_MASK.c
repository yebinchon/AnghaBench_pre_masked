
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int bottom; int right; int top; int left; } ;
struct TYPE_13__ {int cy; int cx; } ;
struct TYPE_12__ {int cx; scalar_t__ cy; } ;
struct TYPE_11__ {int cx; int cy; } ;
struct TYPE_15__ {int pages_shown; TYPE_4__ window; int zoomratio; TYPE_3__ bmSize; int hdc2; TYPE_2__ bmScaledSize; TYPE_1__ spacing; int page; int hdc; } ;
typedef TYPE_4__ RECT ;
typedef int PAINTSTRUCT ;
typedef int LRESULT ;
typedef int HWND ;
typedef int HRGN ;
typedef int HPEN ;
typedef int HDC ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,TYPE_4__*,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_8 (int ,TYPE_4__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_4__*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_13 (int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_4__*,int,int,int,scalar_t__) ;
 int FUNC_16 (int ,int ,int ,int ,int ) ;
 int FUNC_17 (int ,int,int,int,scalar_t__,int ,int ,int ,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_18 (int ,int,int,int ) ;
 int FUNC_19 (int ) ;
 TYPE_5__ VAR_8 ;

__attribute__((used)) static LRESULT FUNC_20(HWND VAR_9)
{
    HPEN VAR_10, VAR_11;
    HDC VAR_12;
    HRGN VAR_13, VAR_14;
    RECT VAR_15, VAR_16;
    PAINTSTRUCT VAR_17;
    int VAR_18, VAR_19;

    VAR_12 = FUNC_0(VAR_9, &VAR_17);
    FUNC_8(VAR_9, &VAR_15);
    VAR_13 = FUNC_3(&VAR_15);

    VAR_18 = VAR_8.spacing.cx - FUNC_9(VAR_9, VAR_4);
    VAR_19 = VAR_8.spacing.cy - FUNC_9(VAR_9, VAR_5);


    VAR_10 = FUNC_2(VAR_2|VAR_1, 2, FUNC_12(0,0,0));
    VAR_11 = FUNC_14(VAR_12, VAR_10);
    FUNC_15(&VAR_16, VAR_18 - 2, VAR_19 - 2, VAR_18 + VAR_8.bmScaledSize.cx + 2,
            VAR_19 + VAR_8.bmScaledSize.cy + 2);
    FUNC_13(VAR_12, VAR_16.left, VAR_16.top,
              VAR_16.right, VAR_16.bottom);
    VAR_14 = FUNC_3(&VAR_16);
    FUNC_1(VAR_13, VAR_13, VAR_14, VAR_3);
    if(VAR_8.pages_shown > 1)
    {
        VAR_16.left += VAR_8.bmScaledSize.cx + VAR_8.spacing.cx;
        VAR_16.right += VAR_8.bmScaledSize.cx + VAR_8.spacing.cx;
        FUNC_13(VAR_12, VAR_16.left, VAR_16.top,
                  VAR_16.right, VAR_16.bottom);
        FUNC_16(VAR_14, VAR_16.left, VAR_16.top,
                   VAR_16.right, VAR_16.bottom);
        FUNC_1(VAR_13, VAR_13, VAR_14, VAR_3);
    }
    FUNC_14(VAR_12, VAR_11);
    FUNC_4(VAR_10);
    FUNC_7(VAR_12, VAR_13, FUNC_10(VAR_0));
    FUNC_4(VAR_14);
    FUNC_4(VAR_13);

    FUNC_17(VAR_12, VAR_18, VAR_19, VAR_8.bmScaledSize.cx, VAR_8.bmScaledSize.cy,
               VAR_8.hdc, 0, 0, VAR_8.bmSize.cx, VAR_8.bmSize.cy, VAR_6);

    FUNC_18(VAR_12, VAR_18, VAR_19, VAR_8.zoomratio);

    if(VAR_8.pages_shown > 1)
    {
        if (!FUNC_19(VAR_8.page)) {
            VAR_18 += VAR_8.spacing.cx + VAR_8.bmScaledSize.cx;
            FUNC_17(VAR_12, VAR_18, VAR_19,
                       VAR_8.bmScaledSize.cx, VAR_8.bmScaledSize.cy,
                       VAR_8.hdc2, 0, 0,
                       VAR_8.bmSize.cx, VAR_8.bmSize.cy, VAR_6);

            FUNC_18(VAR_12, VAR_18, VAR_19, VAR_8.zoomratio);
        } else {
            FUNC_11(&VAR_16, -2, -2);
            FUNC_6(VAR_12, &VAR_16, FUNC_10(VAR_7));
        }
    }

    VAR_8.window = VAR_15;

    FUNC_5(VAR_9, &VAR_17);

    return 0;
}
