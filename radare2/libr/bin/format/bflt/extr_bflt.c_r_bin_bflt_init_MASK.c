
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r_bin_bflt_obj {int endian; int * hdr; scalar_t__ n_got; int * got_table; int * reloc_table; int size; int b; } ;
typedef int RBuffer ;


 int FUNC_0 (struct r_bin_bflt_obj*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct r_bin_bflt_obj *VAR_0, RBuffer *VAR_1) {
 VAR_0->b = FUNC_1 (VAR_1);
 VAR_0->size = FUNC_2 (VAR_1);
 VAR_0->endian = 0;
 VAR_0->reloc_table = ((void*)0);
 VAR_0->got_table = ((void*)0);
 VAR_0->n_got = 0;
 VAR_0->hdr = ((void*)0);
 if (!FUNC_0 (VAR_0)) {
  return 0;
 }
 return 1;
}
