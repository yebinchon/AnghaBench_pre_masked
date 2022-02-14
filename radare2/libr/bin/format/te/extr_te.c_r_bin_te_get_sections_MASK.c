
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r_bin_te_section_t {int last; int flags; void* paddr; int vsize; int size; void* vaddr; int name; } ;
struct r_bin_te_obj_t {TYPE_1__* header; TYPE_2__* section_header; } ;
struct TYPE_4__ {void* VirtualAddress; void* PointerToRawData; int Characteristics; int VirtualSize; int SizeOfRawData; int Name; } ;
struct TYPE_3__ {int NumberOfSections; } ;
typedef TYPE_2__ TE_image_section_header ;


 int VAR_0 ;
 struct r_bin_te_section_t* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (struct r_bin_te_obj_t*) ;

struct r_bin_te_section_t* FUNC_4(struct r_bin_te_obj_t* VAR_1) {
 struct r_bin_te_section_t *VAR_2 = ((void*)0);
 TE_image_section_header *VAR_3;
 int VAR_4, VAR_5;
 if (!VAR_1) {
  return ((void*)0);
 }
 VAR_3 = VAR_1->section_header;
 VAR_5 = VAR_1->header->NumberOfSections;

 if (!(VAR_2 = FUNC_0 ((VAR_5 + 1), sizeof (struct r_bin_te_section_t)))) {
  FUNC_2 ("malloc (sections)");
  return ((void*)0);
 }
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  FUNC_1 (VAR_2[VAR_4].name, VAR_3[VAR_4].Name, VAR_0);


  VAR_2[VAR_4].vaddr = VAR_3[VAR_4].VirtualAddress - FUNC_3 (VAR_1);
  VAR_2[VAR_4].size = VAR_3[VAR_4].SizeOfRawData;
  VAR_2[VAR_4].vsize = VAR_3[VAR_4].VirtualSize;
  VAR_2[VAR_4].paddr = VAR_3[VAR_4].PointerToRawData - FUNC_3 (VAR_1);
  VAR_2[VAR_4].flags = VAR_3[VAR_4].Characteristics;
  VAR_2[VAR_4].last = 0;
 }
 VAR_2[VAR_4].last = 1;
 return VAR_2;
}
