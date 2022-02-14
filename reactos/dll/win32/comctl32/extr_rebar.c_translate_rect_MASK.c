
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dwStyle; } ;
struct TYPE_6__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ REBAR_INFO ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(const REBAR_INFO *VAR_1, RECT *VAR_2, const RECT *VAR_3)
{
    if (VAR_1->dwStyle & VAR_0) {
        int VAR_4;
        VAR_4 = VAR_3->left;
        VAR_2->left = VAR_3->top;
        VAR_2->top = VAR_4;

        VAR_4 = VAR_3->right;
        VAR_2->right = VAR_3->bottom;
        VAR_2->bottom = VAR_4;
    } else {
        *VAR_2 = *VAR_3;
    }
}
