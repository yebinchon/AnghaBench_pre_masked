
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r_bin_te_obj_t {int b; struct r_bin_te_obj_t* section_header; struct r_bin_te_obj_t* header; } ;


 int FUNC_0 (struct r_bin_te_obj_t*) ;
 int FUNC_1 (int ) ;

void* FUNC_2(struct r_bin_te_obj_t* VAR_0) {
 if (!VAR_0) {
  return ((void*)0);
 }
 FUNC_0 (VAR_0->header);
 FUNC_0 (VAR_0->section_header);
 FUNC_1 (VAR_0->b);
 FUNC_0 (VAR_0);
 return ((void*)0);
}
