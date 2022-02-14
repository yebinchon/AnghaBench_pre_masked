
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vaddr_t ;
struct TYPE_3__ {int pteh; } ;
typedef TYPE_1__ ppc_pte_t ;



int FUNC_0(vaddr_t VAR_0, ppc_pte_t VAR_1)
{
    int VAR_2 = (VAR_1.pteh >> 7) & 15, VAR_3 = VAR_1.pteh & 63;
    return
 (((VAR_0 >> 28) & 15) == VAR_2) &&
 (((VAR_0 >> 22) & 63) == VAR_3);
}
