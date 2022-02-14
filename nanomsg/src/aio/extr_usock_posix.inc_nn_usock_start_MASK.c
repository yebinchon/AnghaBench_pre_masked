
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_usock {int fsm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct nn_usock*,int) ;
 int FUNC_3 (int,int,int) ;

int FUNC_4 (struct nn_usock *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6;
    VAR_6 = FUNC_3 (VAR_3, VAR_4, VAR_5);
    if (FUNC_1 (VAR_6 < 0))
       return -VAR_1;

    FUNC_2 (VAR_2, VAR_6);


    FUNC_0 (&VAR_2->fsm);

    return 0;
}
