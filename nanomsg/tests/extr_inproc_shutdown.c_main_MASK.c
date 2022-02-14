
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nn_thread*,int ,int *) ;
 int FUNC_1 (struct nn_thread*) ;
 int VAR_4 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5 ()
{
    int VAR_5;
    int VAR_6;
    int VAR_7;
    struct nn_thread VAR_8 [VAR_3];



    VAR_5 = FUNC_4 (VAR_0, VAR_1);
    FUNC_2 (VAR_5, VAR_2);

    for (VAR_7 = 0; VAR_7 != 10; ++VAR_7) {
        for (VAR_6 = 0; VAR_6 != VAR_3; ++VAR_6)
            FUNC_0 (&VAR_8 [VAR_6], VAR_4, ((void*)0));
        for (VAR_6 = 0; VAR_6 != VAR_3; ++VAR_6)
            FUNC_1 (&VAR_8 [VAR_6]);
    }

    FUNC_3 (VAR_5);

    return 0;
}
