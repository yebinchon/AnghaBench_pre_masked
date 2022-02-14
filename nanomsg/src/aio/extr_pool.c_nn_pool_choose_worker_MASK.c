
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_worker {int dummy; } ;
struct nn_pool {struct nn_worker worker; } ;



struct nn_worker *FUNC_0 (struct nn_pool *VAR_0)
{
    return &VAR_0->worker;
}
