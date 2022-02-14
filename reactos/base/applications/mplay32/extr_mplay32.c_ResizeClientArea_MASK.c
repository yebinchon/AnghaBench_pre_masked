
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_5__ {scalar_t__ top; scalar_t__ left; scalar_t__ bottom; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;

void FUNC_3(HWND VAR_1, int VAR_2, int VAR_3)
{
    RECT VAR_4;
    RECT VAR_5;
    POINT VAR_6;

    FUNC_0(VAR_1, &VAR_4);
    FUNC_1(VAR_1, &VAR_5);
    VAR_6.x = (VAR_5.right - VAR_5.left) - VAR_4.right;
    VAR_6.y = (VAR_5.bottom - VAR_5.top) - VAR_4.bottom;
    FUNC_2(VAR_1, VAR_5.left, VAR_5.top, VAR_2 + VAR_6.x, VAR_3 + VAR_6.y, VAR_0);
}
