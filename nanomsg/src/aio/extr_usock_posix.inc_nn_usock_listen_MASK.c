
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_usock {int fsm; int s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct nn_usock*,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4 (struct nn_usock *VAR_3, int VAR_4)
{
    int VAR_5;


    FUNC_1 (VAR_3, VAR_1);


    VAR_5 = FUNC_0 (VAR_3->s, VAR_4);
    if (FUNC_3 (VAR_5 != 0))
        return -VAR_2;


    FUNC_2 (&VAR_3->fsm, VAR_0);

    return 0;
}
