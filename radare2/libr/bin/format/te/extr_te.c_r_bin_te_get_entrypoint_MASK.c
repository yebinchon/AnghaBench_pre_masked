
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct r_bin_te_obj_t {TYPE_1__* header; } ;
struct TYPE_6__ {scalar_t__ vaddr; int paddr; } ;
struct TYPE_5__ {scalar_t__ AddressOfEntryPoint; scalar_t__ ImageBase; } ;
typedef TYPE_2__ RBinAddr ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct r_bin_te_obj_t*) ;
 int FUNC_3 (struct r_bin_te_obj_t*,scalar_t__) ;

RBinAddr* FUNC_4(struct r_bin_te_obj_t* VAR_0) {
 RBinAddr *VAR_1 = ((void*)0);

 if (!VAR_0 || !VAR_0->header) {
  return ((void*)0);
 }
 if (!(VAR_1 = FUNC_0 (sizeof (RBinAddr)))) {
  FUNC_1("malloc (entrypoint)");
  return ((void*)0);
 }
 VAR_1->vaddr = VAR_0->header->AddressOfEntryPoint - FUNC_2 (VAR_0);
 if (VAR_1->vaddr == 0) {
  VAR_1->vaddr = VAR_0->header->ImageBase;
 }
 VAR_1->paddr = FUNC_3 (VAR_0, VAR_1->vaddr);
 return VAR_1;
}
