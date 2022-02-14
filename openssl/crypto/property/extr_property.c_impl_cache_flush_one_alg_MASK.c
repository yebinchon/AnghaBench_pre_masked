
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ossl_uintmax_t ;
struct TYPE_6__ {int cache; } ;
struct TYPE_5__ {int cache; } ;
typedef TYPE_1__ IMPL_CACHE_FLUSH ;
typedef TYPE_2__ ALGORITHM ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(ossl_uintmax_t VAR_1, ALGORITHM *VAR_2,
                                     void *VAR_3)
{
    IMPL_CACHE_FLUSH *VAR_4 = (IMPL_CACHE_FLUSH *)VAR_3;

    VAR_4->cache = VAR_2->cache;
    FUNC_0(VAR_4->cache, &VAR_0,
                                    VAR_4);
}
