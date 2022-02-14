
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sock {scalar_t__ holds; int relesem; } ;


 int FUNC_0 (int *) ;

void FUNC_1 (struct nn_sock *VAR_0)
{
    VAR_0->holds--;
    if (VAR_0->holds == 0) {
        FUNC_0 (&VAR_0->relesem);
    }
}
