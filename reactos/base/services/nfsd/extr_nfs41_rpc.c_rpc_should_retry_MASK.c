
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ version; int lock; } ;
typedef TYPE_1__ nfs41_rpc_clnt ;
typedef int bool_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool_t FUNC_2(nfs41_rpc_clnt *VAR_0, uint32_t VAR_1)
{
    bool_t VAR_2 = 0;
    FUNC_0(&VAR_0->lock);
    if (VAR_0->version > VAR_1)
        VAR_2 = 1;
    FUNC_1(&VAR_0->lock);
    return VAR_2;
}
