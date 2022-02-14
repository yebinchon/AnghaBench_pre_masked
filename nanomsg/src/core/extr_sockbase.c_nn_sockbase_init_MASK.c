
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sockbase_vfptr {int dummy; } ;
struct nn_sockbase {struct nn_sock* sock; struct nn_sockbase_vfptr const* vfptr; } ;
struct nn_sock {int dummy; } ;



void FUNC_0 (struct nn_sockbase *VAR_0,
    const struct nn_sockbase_vfptr *VAR_1, void *VAR_2)
{
    VAR_0->vfptr = VAR_1;
    VAR_0->sock = (struct nn_sock*) VAR_2;
}
