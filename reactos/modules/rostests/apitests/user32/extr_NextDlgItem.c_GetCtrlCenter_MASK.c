
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {int left; int right; int top; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static POINT
FUNC_1(HWND VAR_0)
{
    RECT VAR_1;
    POINT VAR_2;

    FUNC_0(VAR_0, &VAR_1);
    VAR_2.x = (VAR_1.left + VAR_1.right) / 2;
    VAR_2.y = (VAR_1.top + VAR_1.bottom) / 2;
    return VAR_2;
}
