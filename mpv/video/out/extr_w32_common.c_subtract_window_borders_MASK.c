
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bottom; scalar_t__ right; scalar_t__ top; scalar_t__ left; int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(HWND VAR_0, RECT *VAR_1)
{
    RECT VAR_2 = { 0, 0, 0, 0 };
    FUNC_0(VAR_0, &VAR_2);
    VAR_1->left -= VAR_2.left;
    VAR_1->top -= VAR_2.top;
    VAR_1->right -= VAR_2.right;
    VAR_1->bottom -= VAR_2.bottom;
}
