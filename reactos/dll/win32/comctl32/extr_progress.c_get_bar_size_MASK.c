
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bottom; int top; int right; int left; } ;
typedef TYPE_1__ RECT ;
typedef int LONG ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0( LONG VAR_1, const RECT* VAR_2 )
{
    if (VAR_1 & VAR_0)
        return VAR_2->bottom - VAR_2->top;
    else
        return VAR_2->right - VAR_2->left;
}
