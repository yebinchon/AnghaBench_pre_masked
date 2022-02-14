
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int hWnd; } ;
struct TYPE_7__ {int bottom; int right; int top; int left; } ;
struct TYPE_6__ {scalar_t__ top; scalar_t__ bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__* PRECT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(HWND VAR_3, PRECT VAR_4)
{
    RECT VAR_5;
    if (FUNC_1(VAR_2))
    {
        FUNC_3(VAR_3, VAR_0);
        FUNC_0(VAR_2, &VAR_5);
        VAR_4->bottom -= VAR_5.bottom - VAR_5.top;
    }
    FUNC_2(VAR_1->hWnd, VAR_4->left, VAR_4->top, VAR_4->right, VAR_4->bottom, VAR_0);
}
