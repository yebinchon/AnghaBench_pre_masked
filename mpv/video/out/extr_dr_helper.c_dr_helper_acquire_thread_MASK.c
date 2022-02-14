
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dr_helper {int thread_valid; int thread_lock; int thread; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

void FUNC_4(struct dr_helper *VAR_0)
{
    FUNC_1(&VAR_0->thread_lock);
    FUNC_0(!VAR_0->thread_valid);
    VAR_0->thread_valid = 1;
    VAR_0->thread = FUNC_3();
    FUNC_2(&VAR_0->thread_lock);
}
