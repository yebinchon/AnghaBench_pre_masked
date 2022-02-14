
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int bottom; int right; int top; int left; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;
typedef int HDC ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

VOID
FUNC_6(HWND VAR_1)
{
    HDC VAR_2;
    RECT VAR_3;

    FUNC_2(VAR_1,
                   ((void*)0),
                   VAR_0);
    FUNC_5(VAR_1);

    VAR_2 = FUNC_1(VAR_1);

    FUNC_0(VAR_1,
                  &VAR_3);

    FUNC_3(VAR_2,
              VAR_3.left,
              VAR_3.top,
              VAR_3.right,
              VAR_3.bottom);

    FUNC_4(VAR_1,
              VAR_2);

}
