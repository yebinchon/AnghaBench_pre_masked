
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwStyle; } ;
struct TYPE_5__ {int bottom; int top; int right; int left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ REBAR_INFO ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const REBAR_INFO *VAR_1, const RECT *VAR_2)
{
    if (VAR_1->dwStyle & VAR_0)
        return VAR_2->bottom - VAR_2->top;
    return VAR_2->right - VAR_2->left;
}
