
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hdc; } ;
struct TYPE_8__ {int clrBtnFace; int clrBtnHighlight; int hbrMonoDither; TYPE_1__ nmcd; } ;
struct TYPE_7__ {int right; int left; int bottom; int top; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ NMTBCUSTOMDRAW ;
typedef int INT ;
typedef int HDC ;
typedef int HBRUSH ;
typedef int COLORREF ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5 (const RECT *VAR_3, const NMTBCUSTOMDRAW *VAR_4)
{
    HDC VAR_5 = VAR_4->nmcd.hdc;
    HBRUSH VAR_6 = FUNC_2 (VAR_5, VAR_4->hbrMonoDither);
    COLORREF VAR_7;
    COLORREF VAR_8;
    INT VAR_9 = VAR_3->right - VAR_3->left;
    INT VAR_10 = VAR_3->bottom - VAR_3->top;
    INT VAR_11 = FUNC_0(VAR_1);
    INT VAR_12 = FUNC_0(VAR_2);
    VAR_7 = FUNC_4(VAR_5, VAR_4->clrBtnHighlight);
    VAR_8 = FUNC_3(VAR_5, VAR_4->clrBtnFace);
    FUNC_1 (VAR_5, VAR_3->left + VAR_11, VAR_3->top + VAR_12,
            VAR_9 - (2 * VAR_11), VAR_10 - (2 * VAR_12), VAR_0);
    FUNC_3(VAR_5, VAR_8);
    FUNC_4(VAR_5, VAR_7);
    FUNC_2 (VAR_5, VAR_6);
}
