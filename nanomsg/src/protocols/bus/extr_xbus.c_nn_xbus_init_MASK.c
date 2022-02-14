
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_xbus {int inpipes; int outpipes; int sockbase; } ;
struct nn_sockbase_vfptr {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct nn_sockbase_vfptr const*,void*) ;

void FUNC_3 (struct nn_xbus *VAR_0,
    const struct nn_sockbase_vfptr *VAR_1, void *VAR_2)
{
    FUNC_2 (&VAR_0->sockbase, VAR_1, VAR_2);
    FUNC_0 (&VAR_0->outpipes);
    FUNC_1 (&VAR_0->inpipes);
}
