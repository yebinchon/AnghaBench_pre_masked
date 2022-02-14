
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_thread {int arg; int (* routine ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void *FUNC_1 (void *VAR_0)
{
    struct nn_thread *VAR_1;

    VAR_1 = (struct nn_thread*) VAR_0;


    VAR_1->routine (VAR_1->arg);
    return ((void*)0);
}
