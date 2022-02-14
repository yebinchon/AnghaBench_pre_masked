
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vaddr_t ;
typedef int ppc_map_t ;
struct TYPE_5__ {TYPE_1__** tree; } ;
struct TYPE_4__ {int ** leaves; } ;
typedef TYPE_1__ MmuVsidTree ;
typedef TYPE_2__ MmuVsidInfo ;


 TYPE_2__** VAR_0 ;

ppc_map_t *FUNC_0(vaddr_t VAR_1)
{
    int VAR_2 = (VAR_1 >> 28) & 15;
    MmuVsidInfo *VAR_3 = VAR_0[VAR_2];
    MmuVsidTree *VAR_4 = 0;
    if(!VAR_3) return 0;
    VAR_4 = VAR_3->tree[(VAR_1 >> 20) & 255];
    if(!VAR_4) return 0;
    return VAR_4->leaves[(VAR_1 >> 12) & 255];
}
