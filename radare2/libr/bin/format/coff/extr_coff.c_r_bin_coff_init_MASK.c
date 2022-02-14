
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r_bin_coff_obj {int verbose; int size; int b; } ;
typedef int RBuffer ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct r_bin_coff_obj*) ;
 int FUNC_2 (struct r_bin_coff_obj*) ;
 int FUNC_3 (struct r_bin_coff_obj*) ;
 int FUNC_4 (struct r_bin_coff_obj*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct r_bin_coff_obj *VAR_0, RBuffer *VAR_1, bool VAR_2) {
 VAR_0->b = FUNC_5 (VAR_1);
 VAR_0->size = FUNC_6 (VAR_1);
 VAR_0->verbose = VAR_2;
 if (!FUNC_1 (VAR_0)) {
  FUNC_0 ("Warning: failed to init hdr\n");
  return 0;
 }
 FUNC_2 (VAR_0);
 if (!FUNC_3 (VAR_0)) {
  FUNC_0 ("Warning: failed to init section header\n");
  return 0;
 }
 if (!FUNC_4 (VAR_0)) {
  FUNC_0 ("Warning: failed to init symtable\n");
  return 0;
 }
 return 1;
}
