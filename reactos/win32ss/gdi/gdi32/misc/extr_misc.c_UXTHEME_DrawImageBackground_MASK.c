
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ cyTopHeight; scalar_t__ cyBottomHeight; scalar_t__ cxLeftWidth; scalar_t__ cxRightWidth; } ;
struct TYPE_9__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_8__ {scalar_t__ right; scalar_t__ left; scalar_t__ bottom; scalar_t__ top; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef TYPE_3__ MARGINS ;
typedef int INT ;
typedef int HRESULT ;
typedef int * HGDIOBJ ;
typedef int * HDC ;
typedef int * HBITMAP ;
typedef int COLORREF ;
typedef int BOOL ;


 int * FUNC_0 (scalar_t__,scalar_t__,int,int,int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,scalar_t__,scalar_t__,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int,int,int *) ;
 int FUNC_10 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_11 (int *,int,int,int,int,int *,scalar_t__,int,int,int,int,int ,int ) ;
 int FUNC_12 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 void* FUNC_13 (scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_14(HDC VAR_4, HBITMAP VAR_5, RECT *VAR_6, INT VAR_7,
                                    COLORREF VAR_8, BOOL VAR_9, int VAR_10, MARGINS *VAR_11, RECT *VAR_12)
{
    HRESULT VAR_13 = VAR_3;
    HBITMAP VAR_14 = ((void*)0);
    HGDIOBJ VAR_15;
    HDC VAR_16, VAR_17 = ((void*)0);
    RECT VAR_18;
    POINT VAR_19;
    POINT VAR_20;
    RECT VAR_21;
    MARGINS VAR_22;

    VAR_18 = *VAR_12;
    VAR_21 = *VAR_6;
    VAR_22 = *VAR_11;

    VAR_16 = FUNC_1(VAR_4);
    if(!VAR_16) {
        VAR_13 = FUNC_5(FUNC_4());
        return VAR_13;
    }
    VAR_15 = FUNC_8(VAR_16, VAR_5);

    VAR_19.x = VAR_18.right-VAR_18.left;
    VAR_19.y = VAR_18.bottom-VAR_18.top;
    VAR_20.x = VAR_21.right-VAR_21.left;
    VAR_20.y = VAR_21.bottom-VAR_21.top;

    if(VAR_10 == VAR_2) {
        if(!FUNC_12(VAR_4, VAR_18.left, VAR_18.top, VAR_19.x, VAR_19.y,
                                VAR_16, VAR_21.left, VAR_21.top, VAR_20.x, VAR_20.y,
                                VAR_7, VAR_8))
            VAR_13 = FUNC_5(FUNC_4());
    }
    else {
        HDC VAR_23 = ((void*)0);
        POINT VAR_24;

        VAR_19.x = FUNC_13(VAR_19.x);
        VAR_19.y = FUNC_13(VAR_19.y);





        if (VAR_22.cyTopHeight + VAR_22.cyBottomHeight > VAR_19.y || VAR_22.cxLeftWidth + VAR_22.cxRightWidth > VAR_19.x) {
            if (VAR_22.cyTopHeight + VAR_22.cyBottomHeight > VAR_19.y) {
                VAR_22.cyTopHeight = FUNC_6(VAR_22.cyTopHeight, VAR_19.y, VAR_20.y);
                VAR_22.cyBottomHeight = VAR_19.y - VAR_22.cyTopHeight;
                VAR_20.y = VAR_19.y;
            }

            if (VAR_22.cxLeftWidth + VAR_22.cxRightWidth > VAR_19.x) {
                VAR_22.cxLeftWidth = FUNC_6(VAR_22.cxLeftWidth, VAR_19.x, VAR_20.x);
                VAR_22.cxRightWidth = VAR_19.x - VAR_22.cxLeftWidth;
                VAR_20.x = VAR_19.x;
            }

            VAR_17 = VAR_16;
            VAR_16 = FUNC_1(((void*)0));
            VAR_14 = FUNC_0(VAR_20.x, VAR_20.y, 1, 32, ((void*)0));
            FUNC_8(VAR_16, VAR_14);

            FUNC_12(VAR_16, 0, 0, VAR_20.x, VAR_20.y, VAR_17, VAR_21.left, VAR_21.top,
                               VAR_21.right - VAR_21.left, VAR_21.bottom - VAR_21.top, VAR_7, VAR_8);

            VAR_21.left = 0;
            VAR_21.top = 0;
            VAR_21.right = VAR_20.x;
            VAR_21.bottom = VAR_20.y;
        }


        VAR_23 = VAR_4;
        FUNC_7(VAR_23, VAR_18.left, VAR_18.top, &VAR_24);


        if(!FUNC_10(VAR_23, 0, 0, VAR_22.cxLeftWidth, VAR_22.cyTopHeight,
                        VAR_16, VAR_21.left, VAR_21.top,
                        VAR_7, VAR_8)) {
            VAR_13 = FUNC_5(FUNC_4());
            goto draw_error;
        }

        if(!FUNC_10 (VAR_23, VAR_19.x-VAR_22.cxRightWidth, 0,
                         VAR_22.cxRightWidth, VAR_22.cyTopHeight,
                         VAR_16, VAR_21.right-VAR_22.cxRightWidth, VAR_21.top,
                         VAR_7, VAR_8)) {
            VAR_13 = FUNC_5(FUNC_4());
            goto draw_error;
        }

        if(!FUNC_10 (VAR_23, 0, VAR_19.y-VAR_22.cyBottomHeight,
                         VAR_22.cxLeftWidth, VAR_22.cyBottomHeight,
                         VAR_16, VAR_21.left, VAR_21.bottom-VAR_22.cyBottomHeight,
                         VAR_7, VAR_8)) {
            VAR_13 = FUNC_5(FUNC_4());
            goto draw_error;
        }

        if(!FUNC_10 (VAR_23, VAR_19.x-VAR_22.cxRightWidth, VAR_19.y-VAR_22.cyBottomHeight,
                         VAR_22.cxRightWidth, VAR_22.cyBottomHeight,
                         VAR_16, VAR_21.right-VAR_22.cxRightWidth, VAR_21.bottom-VAR_22.cyBottomHeight,
                         VAR_7, VAR_8)) {
            VAR_13 = FUNC_5(FUNC_4());
            goto draw_error;
        }

        if ((VAR_10 == VAR_0) || (VAR_10 == VAR_1)) {
            int VAR_25 = VAR_19.x - (VAR_22.cxLeftWidth + VAR_22.cxRightWidth);
            int VAR_26 = VAR_20.x - (VAR_22.cxLeftWidth + VAR_22.cxRightWidth);
            int VAR_27 = VAR_19.y - (VAR_22.cyTopHeight + VAR_22.cyBottomHeight);
            int VAR_28 = VAR_20.y - (VAR_22.cyTopHeight + VAR_22.cyBottomHeight);

            if(VAR_25 > 0) {

                if(!FUNC_11 (VAR_23, VAR_22.cxLeftWidth, 0,
                                      VAR_25, VAR_22.cyTopHeight,
                                      VAR_16, VAR_21.left+VAR_22.cxLeftWidth, VAR_21.top,
                                      VAR_26, VAR_22.cyTopHeight,
                                      VAR_10, VAR_7, VAR_8)) {
                    VAR_13 = FUNC_5(FUNC_4());
                    goto draw_error;
                }

                if(!FUNC_11 (VAR_23, VAR_22.cxLeftWidth, VAR_19.y-VAR_22.cyBottomHeight,
                                      VAR_25, VAR_22.cyBottomHeight,
                                      VAR_16, VAR_21.left+VAR_22.cxLeftWidth, VAR_21.bottom-VAR_22.cyBottomHeight,
                                      VAR_26, VAR_22.cyBottomHeight,
                                      VAR_10, VAR_7, VAR_8)) {
                    VAR_13 = FUNC_5(FUNC_4());
                    goto draw_error;
                }
            }
            if(VAR_27 > 0) {

                if(!FUNC_11 (VAR_23, 0, VAR_22.cyTopHeight,
                                      VAR_22.cxLeftWidth, VAR_27,
                                      VAR_16, VAR_21.left, VAR_21.top+VAR_22.cyTopHeight,
                                      VAR_22.cxLeftWidth, VAR_28,
                                      VAR_10,
                                      VAR_7, VAR_8)) {
                    VAR_13 = FUNC_5(FUNC_4());
                    goto draw_error;
                }

                if(!FUNC_11 (VAR_23, VAR_19.x-VAR_22.cxRightWidth, VAR_22.cyTopHeight,
                                      VAR_22.cxRightWidth, VAR_27,
                                      VAR_16, VAR_21.right-VAR_22.cxRightWidth, VAR_21.top+VAR_22.cyTopHeight,
                                      VAR_22.cxRightWidth, VAR_28,
                                      VAR_10, VAR_7, VAR_8)) {
                    VAR_13 = FUNC_5(FUNC_4());
                    goto draw_error;
                }
            }
            if(VAR_27 > 0 && VAR_25 > 0) {
                if(!VAR_9) {

                    if(!FUNC_11 (VAR_23, VAR_22.cxLeftWidth, VAR_22.cyTopHeight,
                                          VAR_25, VAR_27,
                                          VAR_16, VAR_21.left+VAR_22.cxLeftWidth, VAR_21.top+VAR_22.cyTopHeight,
                                          VAR_26, VAR_28,
                                          VAR_10, VAR_7, VAR_8)) {
                        VAR_13 = FUNC_5(FUNC_4());
                        goto draw_error;
                    }
                }
            }
        }

draw_error:
        FUNC_9 (VAR_23, VAR_24.x, VAR_24.y, ((void*)0));
    }
    FUNC_8(VAR_16, VAR_15);
    FUNC_2(VAR_16);
    if (VAR_14) FUNC_3(VAR_14);
    if (VAR_17) FUNC_2(VAR_17);
    *VAR_12 = VAR_18;
    return VAR_13;
}
