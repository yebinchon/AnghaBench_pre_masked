
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_xrespondent {int inpipes; int outpipes; int next_key; int sockbase; } ;
struct nn_sockbase_vfptr {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct nn_sockbase_vfptr const*,void*) ;

void FUNC_4 (struct nn_xrespondent *VAR_0,
    const struct nn_sockbase_vfptr *VAR_1, void *VAR_2)
{
    FUNC_3 (&VAR_0->sockbase, VAR_1, VAR_2);


    FUNC_2 (&VAR_0->next_key, sizeof (VAR_0->next_key));
    FUNC_1 (&VAR_0->outpipes);
    FUNC_0 (&VAR_0->inpipes);
}
