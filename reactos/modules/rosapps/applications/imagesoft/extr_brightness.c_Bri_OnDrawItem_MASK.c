
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {scalar_t__ CtlID; int hDC; } ;
struct TYPE_5__ {int bottom; int right; int top; int left; } ;
struct TYPE_6__ {TYPE_1__ ImageRect; int hPreviewBitmap; } ;
typedef TYPE_2__* PIMAGEADJUST ;
typedef TYPE_3__* LPDRAWITEMSTRUCT ;
typedef scalar_t__ LPARAM ;
typedef int HDC ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static VOID
FUNC_4(PIMAGEADJUST VAR_2,
           LPARAM VAR_3)
{
    LPDRAWITEMSTRUCT VAR_4;
    HDC VAR_5;

    VAR_4 = (LPDRAWITEMSTRUCT)VAR_3;

    VAR_5 = FUNC_1(VAR_4->hDC);

    if(VAR_4->CtlID == VAR_0)
    {
        FUNC_3(VAR_5,
                     VAR_2->hPreviewBitmap);

        FUNC_0(VAR_4->hDC,
               VAR_2->ImageRect.left,
               VAR_2->ImageRect.top,
               VAR_2->ImageRect.right,
               VAR_2->ImageRect.bottom,
               VAR_5,
               0,
               0,
               VAR_1);

        FUNC_2(VAR_5);
    }
}
