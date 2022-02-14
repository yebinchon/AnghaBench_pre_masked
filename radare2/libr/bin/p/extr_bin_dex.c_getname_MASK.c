
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r_bin_dex_obj_t {int dummy; } ;
struct TYPE_5__ {TYPE_1__* o; } ;
struct TYPE_4__ {struct r_bin_dex_obj_t* bin_obj; } ;
typedef TYPE_2__ RBinFile ;


 char* FUNC_0 (struct r_bin_dex_obj_t*,int) ;
 char* FUNC_1 (struct r_bin_dex_obj_t*,int) ;
 char* FUNC_2 (struct r_bin_dex_obj_t*,int) ;
 char* FUNC_3 (struct r_bin_dex_obj_t*,int) ;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_4(RBinFile *VAR_1, int VAR_2, int VAR_3, bool VAR_4) {
 VAR_0 = VAR_4;
 struct r_bin_dex_obj_t *VAR_5 = VAR_1->o->bin_obj;
 switch (VAR_2) {
 case 'm':
  return FUNC_3 (VAR_5, VAR_3);
 case 'c':
  return FUNC_0 (VAR_5, VAR_3);
 case 'f':
  return FUNC_1 (VAR_5, VAR_3);
 case 'p':
  return FUNC_2 (VAR_5, VAR_3);
 }
 return ((void*)0);
}
