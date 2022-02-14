
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r_bin_bflt_obj {int b; struct r_bin_bflt_obj* hdr; } ;


 int FUNC_0 (struct r_bin_bflt_obj*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct r_bin_bflt_obj *VAR_0) {
 if (VAR_0) {
  FUNC_0 (VAR_0->hdr);
  FUNC_1 (VAR_0->b);
  FUNC_0 (VAR_0);
 }
}
