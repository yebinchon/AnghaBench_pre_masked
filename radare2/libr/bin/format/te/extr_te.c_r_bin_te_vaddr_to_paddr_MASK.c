
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r_bin_te_obj_t {TYPE_2__* section_header; TYPE_1__* header; } ;
struct TYPE_4__ {scalar_t__ VirtualAddress; int VirtualSize; scalar_t__ PointerToRawData; } ;
struct TYPE_3__ {int NumberOfSections; } ;
typedef scalar_t__ TE_DWord ;



__attribute__((used)) static TE_DWord FUNC_0(struct r_bin_te_obj_t* VAR_0, TE_DWord VAR_1) {
 TE_DWord VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0->header->NumberOfSections; VAR_3++) {
  VAR_2 = VAR_0->section_header[VAR_3].VirtualAddress;
  VAR_4 = VAR_0->section_header[VAR_3].VirtualSize;
  if (VAR_1 >= VAR_2 && VAR_1 < VAR_2 + VAR_4) {
   return VAR_0->section_header[VAR_3].PointerToRawData + (VAR_1 - VAR_2);
  }
 }
 return 0;
}
