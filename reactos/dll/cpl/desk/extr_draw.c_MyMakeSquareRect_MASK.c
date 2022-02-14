
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int right; int left; int bottom; int top; } ;
typedef TYPE_1__* LPRECT ;



__attribute__((used)) static int
FUNC_0(LPRECT VAR_0, LPRECT VAR_1)
{
    int VAR_2 = VAR_0->right - VAR_0->left;
    int VAR_3 = VAR_0->bottom - VAR_0->top;
    int VAR_4 = VAR_2 > VAR_3 ? VAR_3 : VAR_2;

    *VAR_1 = *VAR_0;


    if (VAR_2 < VAR_3)
    {
        VAR_1->top += (VAR_3-VAR_2)/2;
        VAR_1->bottom = VAR_1->top + VAR_4;
    }
    else if (VAR_2 > VAR_3)
    {
        VAR_1->left += (VAR_2-VAR_3)/2;
        VAR_1->right = VAR_1->left + VAR_4;
    }

    return VAR_4;
}
