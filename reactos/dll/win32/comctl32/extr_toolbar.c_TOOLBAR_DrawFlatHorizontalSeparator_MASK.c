
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ clrBtnShadow; scalar_t__ clrBtnHighlight; } ;
struct TYPE_10__ {int top; int bottom; int right; int left; } ;
struct TYPE_9__ {scalar_t__ clrBtnShadow; scalar_t__ clrBtnHighlight; } ;
typedef TYPE_1__ TOOLBAR_INFO ;
typedef TYPE_2__ RECT ;
typedef int HDC ;
typedef scalar_t__ COLORREF ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 TYPE_4__ VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5 (const RECT *VAR_3, HDC VAR_4,
                             const TOOLBAR_INFO *VAR_5)
{
    RECT VAR_6;
    COLORREF VAR_7, VAR_8;

    VAR_6.left = VAR_3->left;
    VAR_6.right = VAR_3->right;
    VAR_6.top = VAR_3->top + (VAR_3->bottom - VAR_3->top - 2)/2;
    VAR_6.bottom = VAR_6.top + 1;

    FUNC_1 (&VAR_6, -2, 0);

    FUNC_3("rect=(%s)\n", FUNC_4(&VAR_6));

    VAR_8 = (VAR_5->clrBtnShadow == VAR_0) ?
         VAR_2.clrBtnShadow : VAR_5->clrBtnShadow;
    VAR_7 = FUNC_2 (VAR_4, VAR_8);
    FUNC_0 (VAR_4, 0, 0, VAR_1, &VAR_6, 0, 0, 0);

    VAR_6.top = VAR_6.bottom;
    VAR_6.bottom = VAR_6.top + 1;

    VAR_8 = (VAR_5->clrBtnHighlight == VAR_0) ?
         VAR_2.clrBtnHighlight : VAR_5->clrBtnHighlight;
    FUNC_2 (VAR_4, VAR_8);
    FUNC_0 (VAR_4, 0, 0, VAR_1, &VAR_6, 0, 0, 0);

    FUNC_2 (VAR_4, VAR_7);
}
