
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r_bin_mz_obj_t {int kv; int * relocation_entries; int * dos_extended_header; int * dos_header; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct r_bin_mz_obj_t*) ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(struct r_bin_mz_obj_t *VAR_0) {
 VAR_0->dos_header = ((void*)0);
 VAR_0->dos_extended_header = ((void*)0);
 VAR_0->relocation_entries = ((void*)0);
 VAR_0->kv = FUNC_2 ();
 if (!FUNC_1 (VAR_0)) {
  FUNC_0 ("Warning: File is not MZ\n");
  return 0;
 }
 return 1;
}
