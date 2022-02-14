
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_thread {int handle; void* arg; int * routine; } ;
typedef int sigset_t ;
typedef int nn_thread_routine ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *,int ,void*) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5 (struct nn_thread *VAR_3,
    nn_thread_routine *VAR_4, void *VAR_5)
{
    int VAR_6;
    sigset_t VAR_7;
    sigset_t VAR_8;




    VAR_6 = FUNC_4 (&VAR_7);
    FUNC_0 (VAR_6 == 0);
    VAR_6 = FUNC_3 (VAR_0, &VAR_7, &VAR_8);
    FUNC_1 (VAR_6 == 0, VAR_6);

    VAR_3->routine = VAR_4;
    VAR_3->arg = VAR_5;
    VAR_6 = FUNC_2 (&VAR_3->handle, ((void*)0), VAR_2,
        (void*) VAR_3);
    FUNC_1 (VAR_6 == 0, VAR_6);


    VAR_6 = FUNC_3 (VAR_1, &VAR_8, ((void*)0));
    FUNC_1 (VAR_6 == 0, VAR_6);
}
