
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int strings_size; } ;
struct r_bin_dex_obj_t {int* strings; TYPE_2__ header; } ;
struct TYPE_9__ {TYPE_1__* o; } ;
struct TYPE_7__ {struct r_bin_dex_obj_t* bin_obj; } ;
typedef TYPE_3__ RBinFile ;


 int FUNC_0 (struct r_bin_dex_obj_t*,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,struct r_bin_dex_obj_t*,int) ;

__attribute__((used)) static int FUNC_4(RBinFile *VAR_0, int VAR_1, int VAR_2) {
 struct r_bin_dex_obj_t *VAR_3 = VAR_0->o->bin_obj;
 switch (VAR_1) {
 case 'm':

  return FUNC_3 (VAR_0, VAR_3, VAR_2);
 case 'f':
  return FUNC_0 (VAR_3, VAR_2);
 case 'o':
  FUNC_2 ("TODO: getoffset object\n");
  return 0;
 case 's':
  if (VAR_3->header.strings_size > VAR_2) {
   if (VAR_3->strings) {
    return VAR_3->strings[VAR_2];
   }
  }
  break;
 case 't':
  return FUNC_1 (VAR_0, VAR_2);
 case 'c':
  return FUNC_1 (VAR_0, VAR_2);
 }
 return -1;
}
