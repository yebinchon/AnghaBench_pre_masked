
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int seed; int nelem; int cache; } ;
typedef int QUERY ;
typedef TYPE_1__ IMPL_CACHE_FLUSH ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(QUERY *VAR_0, IMPL_CACHE_FLUSH *VAR_1)
{
    uint32_t VAR_2;
    VAR_2 = VAR_1->seed;
    VAR_2 ^= VAR_2 << 13;
    VAR_2 ^= VAR_2 >> 17;
    VAR_2 ^= VAR_2 << 5;
    VAR_1->seed = VAR_2;

    if ((VAR_2 & 1) != 0)
        FUNC_0(FUNC_1(VAR_1->cache, VAR_0));
    else
        VAR_1->nelem++;
}
