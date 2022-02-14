
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_thread {int handle; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2 (struct nn_thread *VAR_0)
{
    int VAR_1;

    VAR_1 = FUNC_1 (VAR_0->handle, ((void*)0));
    FUNC_0 (VAR_1 == 0, VAR_1);
}
