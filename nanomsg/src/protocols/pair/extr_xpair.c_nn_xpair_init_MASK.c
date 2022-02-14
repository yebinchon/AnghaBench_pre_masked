
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_xpair {int excl; int sockbase; } ;
struct nn_sockbase_vfptr {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct nn_sockbase_vfptr const*,void*) ;

__attribute__((used)) static void FUNC_2 (struct nn_xpair *VAR_0,
    const struct nn_sockbase_vfptr *VAR_1, void *VAR_2)
{
    FUNC_1 (&VAR_0->sockbase, VAR_1, VAR_2);
    FUNC_0 (&VAR_0->excl);
}
