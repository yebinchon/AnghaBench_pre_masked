
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int,int,int,int) ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static void FUNC_2(void)
{
    RECT VAR_0;
    BOOL VAR_1;

    VAR_1 = FUNC_0(((void*)0), 0, 0, 0, 0);
    FUNC_1(!VAR_1, "got %d\n", VAR_1);

    VAR_1 = FUNC_0(&VAR_0, 1, 2, 3, 4);
    FUNC_1(VAR_1, "got %d\n", VAR_1);
    FUNC_1(VAR_0.left == 1 && VAR_0.top == 2 && VAR_0.right == 3 && VAR_0.bottom == 4,
        "got wrong rectangle\n");

    VAR_1 = FUNC_0(&VAR_0, 10, 10, 5, 5);
    FUNC_1(VAR_1, "got %d\n", VAR_1);
    FUNC_1(VAR_0.left == 10 && VAR_0.top == 10 && VAR_0.right == 5 && VAR_0.bottom == 5,
        "got wrong rectangle\n");
}
