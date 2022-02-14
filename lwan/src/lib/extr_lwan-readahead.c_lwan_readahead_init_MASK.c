
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_param {int sched_priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int ,...) ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__*,int) ;
 scalar_t__ FUNC_5 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,struct sched_param*) ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;

void FUNC_7(void)
{
    int VAR_9;

    if (VAR_7[0] != VAR_7[1])
        return;

    FUNC_2("Initializing low priority readahead thread");

    if (FUNC_4(VAR_7, VAR_2 | VAR_4) < 0)
        FUNC_1("pipe2");


    VAR_9 = FUNC_0(VAR_7[1], VAR_0);
    if (VAR_9 < 0)
        FUNC_1("fcntl");
    if (FUNC_0(VAR_7[1], VAR_1, VAR_9 | VAR_3) < 0)
        FUNC_1("fcntl");

    if (FUNC_5(&VAR_8, ((void*)0), VAR_6, ((void*)0)))
        FUNC_1("pthread_create");






}
