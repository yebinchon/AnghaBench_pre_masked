
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dr_helper {int thread_lock; int dr_in_flight; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    struct dr_helper *VAR_1 = VAR_0;



    FUNC_0(FUNC_1(&VAR_1->dr_in_flight) == 0);

    FUNC_2(&VAR_1->thread_lock);
}
