
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_xsub {int trie; int fq; int sockbase; } ;
struct nn_sockbase_vfptr {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct nn_sockbase_vfptr const*,void*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3 (struct nn_xsub *VAR_0,
    const struct nn_sockbase_vfptr *VAR_1, void *VAR_2)
{
    FUNC_1 (&VAR_0->sockbase, VAR_1, VAR_2);
    FUNC_0 (&VAR_0->fq);
    FUNC_2 (&VAR_0->trie);
}
