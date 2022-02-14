
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {float right; float left; float bottom; float top; } ;
typedef TYPE_1__ RECT ;
typedef float LONG ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;

BOOL FUNC_3(const RECT *VAR_2, RECT *VAR_3, RECT *VAR_4)
{
    RECT VAR_5 = *VAR_3;
    float VAR_6 = (float)(VAR_5.right - VAR_5.left) / (float)(VAR_4->right - VAR_4->left);
    float VAR_7 = (float)(VAR_5.bottom - VAR_5.top) / (float)(VAR_4->bottom - VAR_4->top);

    FUNC_0(VAR_3, VAR_3, VAR_2);

    if (FUNC_1(VAR_3))
    {
        FUNC_2(VAR_4);
        return VAR_0;
    }

    VAR_4->left += (LONG)((VAR_3->left - VAR_5.left) / VAR_6);
    VAR_4->top += (LONG)((VAR_3->top - VAR_5.top) / VAR_7);
    VAR_4->right -= (LONG)((VAR_5.right - VAR_3->right) / VAR_6);
    VAR_4->bottom -= (LONG)((VAR_5.bottom - VAR_3->bottom) / VAR_7);

    return VAR_1;
}
