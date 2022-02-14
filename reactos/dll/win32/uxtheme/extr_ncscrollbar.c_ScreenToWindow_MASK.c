
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int y; int x; } ;
struct TYPE_5__ {scalar_t__ top; scalar_t__ left; } ;
typedef TYPE_1__ RECT ;
typedef TYPE_2__ POINT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( HWND VAR_0, POINT* VAR_1)
{
    RECT VAR_2;
    FUNC_0(VAR_0, &VAR_2);
    VAR_1->x -= VAR_2.left;
    VAR_1->y -= VAR_2.top;
}
