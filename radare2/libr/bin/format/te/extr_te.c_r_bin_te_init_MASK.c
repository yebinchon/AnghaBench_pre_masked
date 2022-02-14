
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r_bin_te_obj_t {scalar_t__ endian; int * section_header; int * header; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct r_bin_te_obj_t*) ;
 int FUNC_2 (struct r_bin_te_obj_t*) ;

__attribute__((used)) static int FUNC_3(struct r_bin_te_obj_t* VAR_0) {
 VAR_0->header = ((void*)0);
 VAR_0->section_header = ((void*)0);
 VAR_0->endian = 0;
 if (!FUNC_1 (VAR_0)) {
  FUNC_0("Warning: File is not TE\n");
  return 0;
 }
 if (!FUNC_2 (VAR_0)) {
  FUNC_0("Warning: Cannot initialize sections\n");
  return 0;
 }
 return 1;
}
