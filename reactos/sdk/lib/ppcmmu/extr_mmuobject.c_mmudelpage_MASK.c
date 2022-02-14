
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* block; } ;
typedef TYPE_1__ ppc_pteg_t ;
struct TYPE_13__ {int ptel; int member_0; } ;
typedef TYPE_2__ ppc_pte_t ;
struct TYPE_14__ {int addr; int proc; } ;
typedef TYPE_3__ ppc_map_t ;
struct TYPE_15__ {int phys; int flags; int addr; int proc; } ;
typedef TYPE_4__ ppc_map_info_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,TYPE_2__) ;
 TYPE_3__* VAR_1 ;
 TYPE_1__* FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ) ;

void FUNC_5(ppc_map_info_t *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;
    ppc_map_t *VAR_8;
    ppc_pteg_t *VAR_9;
    ppc_pte_t VAR_10 = { 0 };

    for(VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
 if (VAR_2[VAR_4].phys)
 {
     VAR_7 = VAR_2[VAR_4].phys;
     VAR_8 = &VAR_1[VAR_7];
     VAR_2[VAR_4].proc = VAR_8->proc;
     VAR_2[VAR_4].addr = VAR_8->addr;
 }
 else
 {
     VAR_8 = FUNC_4(VAR_2[VAR_4].addr);
     VAR_7 = FUNC_0(VAR_8 - VAR_1);
 }

 for(VAR_5 = 0; VAR_5 < 2; VAR_5++)
 {
     VAR_9 = FUNC_2(VAR_8, VAR_5);
     for(VAR_6 = 0; VAR_6 < 8; VAR_6++)
     {
  if(FUNC_1(VAR_7, VAR_9->block[VAR_6]))
  {
      if(VAR_9->block[VAR_6].ptel & 0x100)
   VAR_2[VAR_4].flags |= VAR_0;
      VAR_9->block[VAR_6] = VAR_10;
  }
     }
 }
 FUNC_3(VAR_8);
 __asm__("tlbie %0\n\tsync\n\tisync" : : "r" (VAR_2[VAR_4].addr));
    }
}
