
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int pteh; int ptel; } ;
struct TYPE_12__ {int proc; int addr; TYPE_1__ pte; } ;
typedef TYPE_2__ ppc_map_t ;
struct TYPE_13__ {int phys; int addr; int proc; int flags; } ;
typedef TYPE_3__ ppc_map_info_t ;
struct TYPE_15__ {TYPE_4__** tree; } ;
struct TYPE_14__ {TYPE_2__** leaves; } ;
typedef TYPE_4__ MmuVsidTree ;
typedef TYPE_5__ MmuVsidInfo ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t FUNC_1 (int) ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* FUNC_2 () ;
 TYPE_4__* FUNC_3 () ;
 TYPE_5__* FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;

int FUNC_6(ppc_map_info_t *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5 = 0, VAR_6, VAR_7, VAR_8;
    int VAR_9;
    int VAR_10, VAR_11, VAR_12;
    ppc_map_t *VAR_13;
    MmuVsidInfo *VAR_14;
    MmuVsidTree *VAR_15;

    for(VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
        VAR_2[VAR_4].phys &= ~VAR_0;
        VAR_2[VAR_4].addr &= ~VAR_0;

 VAR_8 = VAR_2[VAR_4].addr;
 VAR_6 = ((VAR_2[VAR_4].addr >> 28) & 15) | (VAR_2[VAR_4].proc << 4);
 VAR_14 = FUNC_4(VAR_6);

 if(!VAR_14) return -1;

 VAR_9 = (1 << 31) | (VAR_6 << 7) | ((VAR_8 >> 22) & 0x3f);

 if(VAR_2[VAR_4].phys) {
     VAR_13 = &VAR_1[FUNC_1(VAR_2[VAR_4].phys)];
 } else {
     VAR_13 = FUNC_2();
     if(!VAR_13)
     {
  return 0;
     }
 }

 VAR_7 = FUNC_0((VAR_13 - VAR_1));
 VAR_10 = VAR_7 & ~VAR_0;

        if (VAR_7 < 0x30000)
        {

            FUNC_5("Allocated physical: %x, logical %x\n", VAR_7, VAR_8);
            FUNC_5("PagePtr %x (page %d)\n", VAR_13, VAR_4);
            FUNC_5("info [ %x %x %x %x ]\n", VAR_2[VAR_4].proc, VAR_2[VAR_4].addr, VAR_2[VAR_4].flags, VAR_2[VAR_4].phys);
            while(1);
        }


 VAR_13->pte.pteh = VAR_9;
 VAR_13->pte.ptel = VAR_10;
 VAR_13->proc = VAR_2[VAR_4].proc;
 VAR_13->addr = VAR_8;

 VAR_11 = VAR_8 >> 20 & 255;
 VAR_12 = VAR_8 >> 12 & 255;

 if(!VAR_14->tree[VAR_11])
     VAR_14->tree[VAR_11] = FUNC_3();
 VAR_15 = VAR_14->tree[VAR_11];
 if(!VAR_15) return 0;
 VAR_15->leaves[VAR_12] = VAR_13;

 __asm__("tlbie %0\n\tsync\n\tisync" : : "r" (VAR_5));
    }
    return 1;
}
