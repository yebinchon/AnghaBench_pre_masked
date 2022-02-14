
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {scalar_t__ top; scalar_t__ left; scalar_t__ bottom; scalar_t__ right; } ;
struct TYPE_8__ {TYPE_1__ rcPaint; } ;
struct TYPE_7__ {int hDCMem; scalar_t__ hBitmap; } ;
typedef TYPE_2__* PEDIT_WND_INFO ;
typedef TYPE_3__* LPPAINTSTRUCT ;
typedef int HDC ;
typedef scalar_t__ HBITMAP ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static VOID
FUNC_2(PEDIT_WND_INFO VAR_1,
                    HDC VAR_2,
                    LPPAINTSTRUCT VAR_3)
{
    HBITMAP VAR_4;

    if (VAR_1->hBitmap)
    {
        VAR_4 = (HBITMAP) FUNC_1(VAR_1->hDCMem,
                                            VAR_1->hBitmap);

        FUNC_0(VAR_2,
               VAR_3->rcPaint.left,
               VAR_3->rcPaint.top,
               VAR_3->rcPaint.right - VAR_3->rcPaint.left,
               VAR_3->rcPaint.bottom - VAR_3->rcPaint.top,
               VAR_1->hDCMem,
               VAR_3->rcPaint.left,
               VAR_3->rcPaint.top,
               VAR_0);

        VAR_1->hBitmap = FUNC_1(VAR_1->hDCMem, VAR_4);
    }
}
