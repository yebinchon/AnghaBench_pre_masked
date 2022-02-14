
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ left; scalar_t__ right; scalar_t__ top; scalar_t__ bottom; } ;
typedef TYPE_1__* PRECTL ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (scalar_t__,scalar_t__) ;
 void* FUNC_1 (scalar_t__,scalar_t__) ;
 TYPE_1__ VAR_2 ;

BOOL FUNC_2(PRECTL VAR_3, PRECTL VAR_4, PRECTL VAR_5)
{
    VAR_3->left = FUNC_0(VAR_4->left, VAR_5->left);
    VAR_3->right = FUNC_1(VAR_4->right, VAR_5->right);

    if (VAR_3->left < VAR_3->right)
    {
        VAR_3->top = FUNC_0(VAR_4->top, VAR_5->top);
        VAR_3->bottom = FUNC_1(VAR_4->bottom, VAR_5->bottom);

       if (VAR_3->top < VAR_3->bottom)
           return VAR_1;
    }

    *VAR_3 = VAR_2;

    return VAR_0;
}
