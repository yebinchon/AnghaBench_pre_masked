
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xform ;
struct TYPE_11__ {float member_0; float member_1; float member_2; float member_3; float member_4; float member_5; } ;
typedef TYPE_1__ XFORM ;
struct TYPE_13__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_12__ {scalar_t__ left; scalar_t__ top; } ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__ POINT ;
typedef int HDC ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__ const*,int) ;
 int FUNC_6 (int,char*) ;

__attribute__((used)) static void FUNC_7(HDC VAR_1, const RECT *VAR_2)
{
    static const XFORM VAR_3 = { 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f };
    XFORM VAR_4;
    POINT VAR_5;
    RECT VAR_6;
    BOOL VAR_7;

    VAR_7 = FUNC_4(VAR_1, &VAR_4);
    FUNC_6(VAR_7, "Failed to get world transform\n");
    FUNC_6(!FUNC_5(&VAR_4, &VAR_3, sizeof(VAR_4)), "Unexpected world transform\n");

    VAR_7 = FUNC_2(VAR_1, &VAR_5);
    FUNC_6(VAR_7, "Failed to get vport origin\n");
    FUNC_6(VAR_5.x == 0 && VAR_5.y == 0, "Unexpected vport origin\n");

    VAR_7 = FUNC_3(VAR_1, &VAR_5);
    FUNC_6(VAR_7, "Failed to get vport origin\n");
    FUNC_6(VAR_5.x == VAR_2->left && VAR_5.y == VAR_2->top, "Unexpected window origin\n");

    VAR_7 = FUNC_0(VAR_1, &VAR_6);
    FUNC_6(VAR_7, "Failed to get clip box\n");
    FUNC_6(VAR_6.left == VAR_2->left && VAR_6.top == VAR_2->top, "Unexpected clip box\n");

    FUNC_6(FUNC_1(VAR_1) == VAR_0, "wrong graphics mode\n");
}
