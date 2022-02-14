
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int random_seed; } ;
typedef TYPE_1__ thread_data_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;

int
FUNC_1(void)
{
    thread_data_t *VAR_1 = FUNC_0();



    VAR_1->random_seed = VAR_1->random_seed * 214013 + 2531011;
    return (VAR_1->random_seed >> 16) & VAR_0;
}
