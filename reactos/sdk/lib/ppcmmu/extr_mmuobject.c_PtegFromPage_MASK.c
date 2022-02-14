
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ppc_pteg_t ;
struct TYPE_3__ {int addr; int proc; } ;
typedef TYPE_1__ ppc_map_t ;


 int * VAR_0 ;
 size_t FUNC_0 (int ,int) ;

ppc_pteg_t *FUNC_1(ppc_map_t *VAR_1, int VAR_2)
{
    if(!VAR_1->proc && !VAR_1->addr) return 0;
    return &VAR_0[FUNC_0(VAR_1->addr, VAR_2)];
}
