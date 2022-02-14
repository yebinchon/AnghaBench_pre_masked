
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_sections; TYPE_1__* sections; } ;
struct TYPE_4__ {scalar_t__ vaddr; int vsize; scalar_t__ paddr; } ;
typedef TYPE_2__ RBinPEObj ;
typedef scalar_t__ PE_DWord ;



__attribute__((used)) static PE_DWord FUNC_0(RBinPEObj* VAR_0, PE_DWord VAR_1) {
 PE_DWord VAR_2;
 int VAR_3, VAR_4;
 for (VAR_3 = 0; VAR_3 < VAR_0->num_sections; VAR_3++) {
  VAR_2 = VAR_0->sections[VAR_3].vaddr;
  VAR_4 = VAR_0->sections[VAR_3].vsize;
  if (VAR_1 >= VAR_2 && VAR_1 < VAR_2 + VAR_4) {
   return VAR_0->sections[VAR_3].paddr + (VAR_1 - VAR_2);
  }
 }
 return VAR_1;
}
