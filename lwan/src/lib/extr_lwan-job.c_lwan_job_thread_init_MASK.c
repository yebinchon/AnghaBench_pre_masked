
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,struct sched_param*) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_7(void)
{
    FUNC_0(!VAR_3);

    FUNC_3("Initializing low priority job thread");

    FUNC_1(&VAR_2);

    VAR_3 = 1;
    if (FUNC_5(&VAR_4, ((void*)0), VAR_1, ((void*)0)) < 0)
        FUNC_2("pthread_create");
}
