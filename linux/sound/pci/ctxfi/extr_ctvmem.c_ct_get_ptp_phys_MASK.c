
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ct_vm {TYPE_1__* ptp; } ;
typedef unsigned long dma_addr_t ;
struct TYPE_2__ {unsigned long addr; } ;


 int VAR_0 ;

__attribute__((used)) static dma_addr_t
FUNC_0(struct ct_vm *VAR_1, int VAR_2)
{
 return (VAR_2 >= VAR_0) ? ~0UL : VAR_1->ptp[VAR_2].addr;
}
