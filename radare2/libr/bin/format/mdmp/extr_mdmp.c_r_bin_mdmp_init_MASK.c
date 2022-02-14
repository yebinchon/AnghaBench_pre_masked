
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r_bin_mdmp_obj {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct r_bin_mdmp_obj*) ;
 int FUNC_2 (struct r_bin_mdmp_obj*) ;
 int FUNC_3 (struct r_bin_mdmp_obj*) ;
 int FUNC_4 (struct r_bin_mdmp_obj*) ;

__attribute__((used)) static int FUNC_5(struct r_bin_mdmp_obj *VAR_0) {
 FUNC_3 (VAR_0);

 if (!FUNC_2 (VAR_0)) {
  FUNC_0 ("[ERROR] Failed to initialise header\n");
  return 0;
 }

 if (!FUNC_1 (VAR_0)) {
  FUNC_0 ("[ERROR] Failed to initialise directory structures!\n");
  return 0;
 }

 if (!FUNC_4 (VAR_0)) {
  FUNC_0 ("[ERROR] Failed to initialise pe binaries!\n");
  return 0;
 }

 return 1;
}
