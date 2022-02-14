
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ right; scalar_t__ left; } ;
typedef TYPE_1__ RECTL ;


 int FUNC_0 (int) ;

__attribute__((used)) static __inline int
FUNC_1(
    const RECTL *VAR_0,
    const RECTL *VAR_1)
{
    int VAR_2;

    if (VAR_0->top < VAR_1->top)
    {
        VAR_2 = -1;
    }
    else if (VAR_1->top < VAR_0->top)
    {
        VAR_2 = +1;
    }
    else
    {
        FUNC_0(VAR_0->bottom == VAR_1->bottom);
        if (VAR_0->right < VAR_1->right)
        {
            VAR_2 = +1;
        }
        else if (VAR_1->right < VAR_0->right)
        {
            VAR_2 = -1;
        }
        else
        {
            FUNC_0(VAR_0->left == VAR_1->left);
            VAR_2 = 0;
        }
    }

    return VAR_2;
}
