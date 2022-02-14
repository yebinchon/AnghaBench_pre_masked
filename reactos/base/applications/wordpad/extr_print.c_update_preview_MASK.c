
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ right; scalar_t__ bottom; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_11__ {int cy; int cx; } ;
struct TYPE_12__ {int right; int bottom; int top; int left; } ;
struct TYPE_14__ {int pages_shown; scalar_t__ page; void* hdc2; TYPE_2__ bmSize; void* hdc; int textlength; TYPE_3__ rcPage; } ;
struct TYPE_10__ {int cpMax; scalar_t__ cpMin; } ;
struct TYPE_13__ {int hdcTarget; TYPE_3__ rcPage; void* hdc; TYPE_1__ chrg; TYPE_3__ rc; } ;
typedef TYPE_3__ RECT ;
typedef int HWND ;
typedef int HDC ;
typedef int HBITMAP ;
typedef TYPE_4__ FORMATRANGE ;


 int FUNC_0 (int ,int ,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_9 (int ,TYPE_4__*,TYPE_3__*,scalar_t__) ;
 int FUNC_10 () ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(HWND VAR_5)
{
    RECT VAR_6;
    HWND VAR_7 = FUNC_4(VAR_5, VAR_1);
    HWND VAR_8 = FUNC_4(VAR_5, VAR_2);
    HBITMAP VAR_9;
    FORMATRANGE VAR_10;
    HDC VAR_11 = FUNC_3(VAR_8);

    VAR_10.hdcTarget = FUNC_10();
    VAR_10.rc = VAR_10.rcPage = VAR_4.rcPage;
    VAR_10.rc.left += VAR_3.left;
    VAR_10.rc.top += VAR_3.top;
    VAR_10.rc.bottom -= VAR_3.bottom;
    VAR_10.rc.right -= VAR_3.right;

    VAR_10.chrg.cpMin = 0;
    VAR_10.chrg.cpMax = VAR_4.textlength;

    FUNC_8(&VAR_6, 0, 0, VAR_4.bmSize.cx, VAR_4.bmSize.cy);

    if (!VAR_4.hdc) {
        VAR_4.hdc = FUNC_1(VAR_11);
        VAR_9 = FUNC_0(VAR_11, VAR_4.bmSize.cx, VAR_4.bmSize.cy);
        FUNC_7(VAR_4.hdc, VAR_9);
    }

    VAR_10.hdc = VAR_4.hdc;
    FUNC_9(VAR_7, &VAR_10, &VAR_6, VAR_4.page);

    if(VAR_4.pages_shown > 1)
    {
        if (!VAR_4.hdc2)
        {
            VAR_4.hdc2 = FUNC_1(VAR_11);
            VAR_9 = FUNC_0(VAR_11,
                                                    VAR_4.bmSize.cx,
                                                    VAR_4.bmSize.cy);
            FUNC_7(VAR_4.hdc2, VAR_9);
        }

        VAR_10.hdc = VAR_4.hdc2;
        FUNC_9(VAR_7, &VAR_10, &VAR_10.rcPage, VAR_4.page + 1);
    }
    FUNC_2(VAR_10.hdcTarget);
    FUNC_6(VAR_8, VAR_11);

    FUNC_5(VAR_8, ((void*)0), VAR_0);
    FUNC_11(VAR_5);
    FUNC_12(VAR_5);
}
