
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vaddr_t ;
struct TYPE_6__ {int proc; int addr; } ;
typedef TYPE_1__ ppc_map_t ;
struct TYPE_7__ {int addr; int proc; size_t phys; void* flags; } ;
typedef TYPE_2__ ppc_map_info_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int) ;

void FUNC_2(ppc_map_info_t *VAR_3, int VAR_4)
{
    int VAR_5;
    ppc_map_t *VAR_6;

    for( VAR_5 = 0; VAR_5 < VAR_4; VAR_5++ )
    {
 if(!VAR_3[VAR_5].addr && !VAR_3[VAR_5].proc)
 {
     VAR_6 = &((ppc_map_t*)VAR_1)[VAR_3[VAR_5].phys];
            VAR_3[VAR_5].proc = VAR_6->proc;
            VAR_3[VAR_5].addr = VAR_6->addr;
            VAR_3[VAR_5].flags = VAR_0;
 } else {
     vaddr_t VAR_7 = VAR_3[VAR_5].addr;
     int VAR_8 = ((VAR_7 >> 28) & 15) | (VAR_3[VAR_5].proc << 4);
     VAR_6 = FUNC_1(VAR_3[VAR_5].addr);
     if(!VAR_6)
  VAR_3[VAR_5].phys = 0;
     else
     {
  VAR_3[VAR_5].phys = FUNC_0(VAR_6 - VAR_2);
  VAR_3[VAR_5].flags = VAR_0;
     }
 }
    }
}
