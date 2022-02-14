
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r_bin_mz_reloc_t {scalar_t__ vaddr; int last; int paddr; } ;
struct r_bin_mz_obj_t {scalar_t__ load_module_size; TYPE_2__* relocation_entries; TYPE_1__* dos_header; } ;
struct TYPE_4__ {int offset; int segment; } ;
struct TYPE_3__ {int num_relocs; } ;
typedef TYPE_2__ MZ_image_relocation_entry ;


 struct r_bin_mz_reloc_t* FUNC_0 (int const,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct r_bin_mz_obj_t const*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;

struct r_bin_mz_reloc_t *FUNC_4 (const struct r_bin_mz_obj_t *VAR_0) {
 int VAR_1, VAR_2;
 const int VAR_3 = VAR_0->dos_header->num_relocs;
 const MZ_image_relocation_entry *const VAR_4 = VAR_0->relocation_entries;

 struct r_bin_mz_reloc_t *VAR_5 = FUNC_0 (VAR_3 + 1, sizeof (*VAR_5));
 if (!VAR_5) {
  FUNC_1 ("Error: calloc (struct r_bin_mz_reloc_t)\n");
  return ((void*)0);
 }
 for (VAR_1 = 0, VAR_2 = 0; VAR_1 < VAR_3; VAR_1++) {
  VAR_5[VAR_2].vaddr = FUNC_3 (VAR_4[VAR_1].segment,
   VAR_4[VAR_1].offset);
  VAR_5[VAR_2].paddr = FUNC_2 (VAR_0, VAR_5[VAR_2].vaddr);


  if (VAR_5[VAR_2].vaddr < VAR_0->load_module_size) {
   VAR_2++;
  }
 }
 VAR_5[VAR_2].last = 1;

 return VAR_5;
}
