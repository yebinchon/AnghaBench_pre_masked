
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int right; int left; } ;
typedef TYPE_1__ RECT ;



void FUNC_0( const RECT *VAR_0, RECT *VAR_1 )
{
    int VAR_2 = VAR_0->right - VAR_0->left;
    int VAR_3 = VAR_1->left;
    VAR_1->left = VAR_2 - VAR_1->right;
    VAR_1->right = VAR_2 - VAR_3;
}
