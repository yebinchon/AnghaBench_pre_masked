
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ clrBtnShadow; scalar_t__ clrBtnHighlight; } ;
struct TYPE_8__ {int left; int right; scalar_t__ bottom; scalar_t__ top; } ;
struct TYPE_7__ {scalar_t__ clrBtnShadow; scalar_t__ clrBtnHighlight; } ;
typedef TYPE_1__ TOOLBAR_INFO ;
typedef TYPE_2__ RECT ;
typedef int HDC ;
typedef scalar_t__ COLORREF ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,TYPE_2__*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void
FUNC_2 (const RECT *VAR_3, HDC VAR_4, const TOOLBAR_INFO *VAR_5)
{
    RECT VAR_6;
    COLORREF VAR_7, VAR_8;

    VAR_6.left = (VAR_3->left + VAR_3->right) / 2 - 1;
    VAR_6.right = VAR_6.left + 1;
    VAR_6.top = VAR_3->top + 2;
    VAR_6.bottom = VAR_3->bottom - 2;

    VAR_8 = (VAR_5->clrBtnShadow == VAR_0) ?
         VAR_2.clrBtnShadow : VAR_5->clrBtnShadow;
    VAR_7 = FUNC_1 (VAR_4, VAR_8);
    FUNC_0 (VAR_4, 0, 0, VAR_1, &VAR_6, 0, 0, 0);

    VAR_6.left = VAR_6.right;
    VAR_6.right = VAR_6.left + 1;

    VAR_8 = (VAR_5->clrBtnHighlight == VAR_0) ?
         VAR_2.clrBtnHighlight : VAR_5->clrBtnHighlight;
    FUNC_1 (VAR_4, VAR_8);
    FUNC_0 (VAR_4, 0, 0, VAR_1, &VAR_6, 0, 0, 0);

    FUNC_1 (VAR_4, VAR_7);
}
