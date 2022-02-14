
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_thread {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct nn_thread*,int ,int *) ;
 int FUNC_7 (struct nn_thread*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;

int FUNC_10 ()
{
    int VAR_4;
    int VAR_5;
    struct nn_thread VAR_6;


    VAR_5 = FUNC_9 (VAR_0, VAR_2);
    FUNC_8 (VAR_5);


    FUNC_6 (&VAR_6, VAR_3, ((void*)0));
    FUNC_3 (100);
    FUNC_5 ();


    VAR_4 = FUNC_4 (VAR_0, VAR_2);
    FUNC_1 (VAR_4 == -1);
    FUNC_0 (FUNC_2 () == VAR_1);


    FUNC_7 (&VAR_6);

    return 0;
}
