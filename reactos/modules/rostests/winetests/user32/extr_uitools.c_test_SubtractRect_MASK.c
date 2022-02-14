
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int left; int top; int right; int bottom; } ;
typedef TYPE_1__ RECT ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int,int,int,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(void)
{
    RECT VAR_0;
    RECT VAR_1;
    RECT VAR_2;
    BOOL VAR_3;


    FUNC_0(&VAR_0, 50, 50, 150, 100);
    FUNC_0(&VAR_1, 250, 200, 1500, 1000);
    VAR_3 = FUNC_1(&VAR_2, &VAR_0, &VAR_1);
    FUNC_2(VAR_3, "SubtractRect returned FALSE but subtraction should not be empty\n");
    FUNC_2(VAR_3 && VAR_2.left == 50 && VAR_2.top == 50 && VAR_2.right ==150
       && VAR_2.bottom == 100, "wrong rect subtraction of SubtractRect (dest rect=%s)\n",
       FUNC_3(&VAR_2));


    FUNC_0(&VAR_0, 2431, 626, 3427, 1608);
    FUNC_0(&VAR_1, 2499, 626, 3427, 1608);
    VAR_3 = FUNC_1(&VAR_2, &VAR_0, &VAR_1);
    FUNC_2(VAR_3, "SubtractRect returned FALSE but subtraction should not be empty\n");
    FUNC_2(VAR_3 && VAR_2.left == 2431 && VAR_2.top == 626 && VAR_2.right == 2499
       && VAR_2.bottom == 1608, "wrong rect subtraction of SubtractRect (dest rect=%s)\n",
       FUNC_3(&VAR_2));


    FUNC_0(&VAR_0, 2431, 626, 3427, 1608);
    FUNC_0(&VAR_1, 2499, 626, 3427, 1608);
    VAR_3 = FUNC_1(&VAR_1, &VAR_0, &VAR_1);
    FUNC_2(VAR_3, "SubtractRect returned FALSE but subtraction should not be empty\n");
    FUNC_2(VAR_3 && VAR_2.left == 2431 && VAR_2.top == 626 && VAR_2.right == 2499
       && VAR_2.bottom == 1608, "wrong rect subtraction of SubtractRect (dest rect=%s)\n",
       FUNC_3(&VAR_2));


    FUNC_0(&VAR_0, 250, 250, 400, 500);
    FUNC_0(&VAR_1, 50, 50, 1500, 1000);
    VAR_3 = FUNC_1(&VAR_2, &VAR_0, &VAR_1);
    FUNC_2(!VAR_3, "SubtractRect returned TRUE but subtraction should be empty (dest rect=%s)\n",
       FUNC_3(&VAR_2));


    FUNC_0(&VAR_0, 250, 250, 400, 500);
    FUNC_0(&VAR_1, 50, 50, 1500, 1000);
    VAR_3 = FUNC_1(&VAR_1, &VAR_0, &VAR_1);
    FUNC_2(!VAR_3, "SubtractRect returned TRUE but subtraction should be empty (dest rect=%s)\n",
       FUNC_3(&VAR_1));
}
