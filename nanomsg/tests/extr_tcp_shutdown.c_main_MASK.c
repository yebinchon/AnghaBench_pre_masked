
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nn_thread {int dummy; } ;
typedef int ms ;
struct TYPE_4__ {scalar_t__ n; } ;


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
 TYPE_1__ VAR_10 ;
 int FUNC_0 (int,char const**) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,char*,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct nn_thread*,int ,struct nn_thread*) ;
 int FUNC_6 (struct nn_thread*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ,int ) ;
 int VAR_13 ;
 int FUNC_8 (int ,char*,char*,int ) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int ,int ,int*,int) ;
 int FUNC_12 (int ,int ) ;

int FUNC_13 (int VAR_14, const char *VAR_15[])
{
    int VAR_16;
    int VAR_17;
    int VAR_18;
    struct nn_thread VAR_19 [VAR_9];

    FUNC_8(VAR_13, "tcp", "127.0.0.1",
            FUNC_0(VAR_14, VAR_15));







    VAR_16 = FUNC_12 (VAR_0, VAR_1);
    FUNC_9 (VAR_16, VAR_13);

    for (VAR_18 = 0; VAR_18 != VAR_8; ++VAR_18) {
        for (VAR_17 = 0; VAR_17 != VAR_9; ++VAR_17)
            FUNC_5 (&VAR_19 [VAR_17], VAR_11, ((void*)0));
        for (VAR_17 = 0; VAR_17 != VAR_9; ++VAR_17) {
            FUNC_6 (&VAR_19 [VAR_17]);
 }
    }

    FUNC_10 (VAR_16);



    VAR_16 = FUNC_12 (VAR_0, VAR_2);
    FUNC_9 (VAR_16, VAR_13);

    for (VAR_18 = 0; VAR_18 != VAR_8; ++VAR_18) {
 int VAR_20;
        FUNC_1(&VAR_10, VAR_7);
        for (VAR_17 = 0; VAR_17 != VAR_7; ++VAR_17)
            FUNC_5 (&VAR_19 [VAR_17], VAR_12, &VAR_19[VAR_17]);

 FUNC_4(100);
 VAR_20 = 200;
 FUNC_11 (VAR_16, VAR_4, VAR_3, &VAR_20, sizeof (VAR_20));
        while (VAR_10.n) {
            (void) FUNC_3 (VAR_16, "hello", 5, 0);
        }

        for (VAR_17 = 0; VAR_17 != VAR_7; ++VAR_17)
            FUNC_6 (&VAR_19 [VAR_17]);
        FUNC_2(&VAR_10);
    }

    FUNC_10 (VAR_16);

    return 0;
}
