
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {int cache_nr; TYPE_1__** cache; } ;
struct TYPE_2__ {int ce_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct index_state *VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_3->cache_nr; VAR_4++)
        VAR_3->cache[VAR_4]->ce_flags &= ~(VAR_2 | VAR_0 | VAR_1);
}
