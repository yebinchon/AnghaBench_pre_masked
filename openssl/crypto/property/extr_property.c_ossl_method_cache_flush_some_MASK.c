
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int seed; scalar_t__ nelem; } ;
struct TYPE_5__ {scalar_t__ nelem; int algs; scalar_t__ need_flush; } ;
typedef TYPE_1__ OSSL_METHOD_STORE ;
typedef TYPE_2__ IMPL_CACHE_FLUSH ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(OSSL_METHOD_STORE *VAR_1)
{
    IMPL_CACHE_FLUSH VAR_2;

    VAR_2.nelem = 0;
    if ((VAR_2.seed = FUNC_0()) == 0)
        VAR_2.seed = 1;
    VAR_1->need_flush = 0;
    FUNC_1(VAR_1->algs, &VAR_0, &VAR_2);
    VAR_1->nelem = VAR_2.nelem;
}
