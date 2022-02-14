
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nn_thread*,int ,void*) ;
 int FUNC_1 (struct nn_thread*) ;
 int VAR_2 ;

int FUNC_2()
{
    int VAR_3;
    struct nn_thread VAR_4;
    struct nn_thread VAR_5[VAR_0];

    FUNC_0(&VAR_4, VAR_2, ((void*)0));

    for (VAR_3 = 0; VAR_3 != VAR_0; ++VAR_3)
        FUNC_0(&VAR_5[VAR_3], VAR_1, (void *)(intptr_t)VAR_3);
    for (VAR_3 = 0; VAR_3 != VAR_0; ++VAR_3)
        FUNC_1(&VAR_5[VAR_3]);

    return 0;
}
