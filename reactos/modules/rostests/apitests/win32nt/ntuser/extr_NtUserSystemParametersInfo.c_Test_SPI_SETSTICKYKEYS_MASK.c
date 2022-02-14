
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cbSize; int dwFlags; } ;
typedef TYPE_1__ STICKYKEYS ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;

void
FUNC_3(void)
{
    STICKYKEYS VAR_2, VAR_3;


    VAR_2.cbSize = sizeof(STICKYKEYS);
    FUNC_0(FUNC_1(VAR_0, 0, &VAR_2, 0) == 1);

    VAR_3.cbSize = sizeof(STICKYKEYS)+1;
    FUNC_2(FUNC_1(VAR_0, 0, &VAR_3, 0) == 0);

    VAR_3.cbSize = sizeof(STICKYKEYS)-1;
    FUNC_2(FUNC_1(VAR_0, 0, &VAR_3, 0) == 0);

    VAR_3.cbSize = sizeof(STICKYKEYS);
    FUNC_2(FUNC_1(VAR_0, 1, &VAR_3, 0) == 0);
    FUNC_2(FUNC_1(VAR_0, -1, &VAR_3, 0) == 0);
    FUNC_2(FUNC_1(VAR_0, VAR_3.cbSize, &VAR_3, 0) == 1);
    FUNC_2(FUNC_1(VAR_0, VAR_3.cbSize-1, &VAR_3, 0) == 0);
    FUNC_2(FUNC_1(VAR_0, VAR_3.cbSize+1, &VAR_3, 0) == 0);

    VAR_3 = VAR_2;
    VAR_3.dwFlags = (VAR_2.dwFlags ^ 1);
    FUNC_2(FUNC_1(VAR_1, VAR_3.cbSize+1, &VAR_3, 0) == 0);
    FUNC_2(FUNC_1(VAR_1, VAR_3.cbSize-1, &VAR_3, 0) == 0);
    FUNC_2(FUNC_1(VAR_1, VAR_3.cbSize, &VAR_3, 0) == 1);

    VAR_3 = VAR_2;
    FUNC_2(FUNC_1(VAR_0, 0, &VAR_3, 0) == 1);
    FUNC_2(VAR_3.dwFlags == (VAR_2.dwFlags ^ 1));


    VAR_2.cbSize = sizeof(STICKYKEYS);
    FUNC_0(FUNC_1(VAR_1, 0, &VAR_2, 0) == 1);

}
