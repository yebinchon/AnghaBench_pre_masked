
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,char*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nn_thread*,int ,int *) ;
 int FUNC_3 (struct nn_thread*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8 ()
{


    int VAR_13;
    int VAR_14;
    int VAR_15;
    struct nn_thread VAR_16 [VAR_9];







    VAR_13 = FUNC_7 (VAR_0, VAR_2);
    FUNC_5 (VAR_13, VAR_6);

    for (VAR_15 = 0; VAR_15 != VAR_8; ++VAR_15) {
        for (VAR_14 = 0; VAR_14 != VAR_9; ++VAR_14)
            FUNC_2 (&VAR_16 [VAR_14], VAR_11, ((void*)0));
        for (VAR_14 = 0; VAR_14 != VAR_9; ++VAR_14)
            FUNC_3 (&VAR_16 [VAR_14]);
    }

    FUNC_6 (VAR_13);



    VAR_13 = FUNC_7 (VAR_0, VAR_3);
    FUNC_5 (VAR_13, VAR_6);

    for (VAR_15 = 0; VAR_15 != VAR_8; ++VAR_15) {
        for (VAR_14 = 0; VAR_14 != VAR_7; ++VAR_14)
            FUNC_2 (&VAR_16 [VAR_14], VAR_12, ((void*)0));
        VAR_10 = VAR_7;

        while (VAR_10) {
            (void) FUNC_0 (VAR_13, "hello", 5, VAR_1);
            FUNC_1 (0);
        }

        for (VAR_14 = 0; VAR_14 != VAR_7; ++VAR_14)
            FUNC_3 (&VAR_16 [VAR_14]);
    }

    FUNC_6 (VAR_13);


    return 0;
}
