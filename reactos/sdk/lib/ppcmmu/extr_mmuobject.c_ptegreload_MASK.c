
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vaddr_t ;
typedef int ppc_trap_frame_t ;
struct TYPE_6__ {int pteh; int ptel; } ;
struct TYPE_7__ {TYPE_1__ pte; } ;
typedef TYPE_2__ ppc_map_t ;
struct TYPE_8__ {TYPE_1__* block; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int ,int ,int,int,int,int ) ;
 TYPE_2__* FUNC_3 (int ) ;

int FUNC_4(ppc_trap_frame_t *VAR_3, vaddr_t VAR_4)
{
    int VAR_5 = (VAR_0 >> 3) & 1, VAR_6 = FUNC_1(VAR_4, VAR_5);
    ppc_map_t *VAR_7 = FUNC_3(VAR_4);
    if(!VAR_7) return 0;
    VAR_7->pte.pteh = (VAR_7->pte.pteh & ~64) | (VAR_5 << 6);
    VAR_1[VAR_6].block[VAR_0 & 7] = VAR_7->pte;






    VAR_0++;
    __asm__("tlbie %0\n\tsync\n\tisync" : : "r" (VAR_4));
    return 1;
}
