
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r_bin_bflt_obj {int dummy; } ;
struct TYPE_5__ {TYPE_1__* o; } ;
struct TYPE_4__ {scalar_t__ bin_obj; } ;
typedef int RList ;
typedef TYPE_2__ RBinFile ;
typedef int RBinAddr ;


 int VAR_0 ;
 int * FUNC_0 (struct r_bin_bflt_obj*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static RList *FUNC_4(RBinFile *VAR_1) {
 struct r_bin_bflt_obj *VAR_2 = (struct r_bin_bflt_obj *) VAR_1->o->bin_obj;
 RList *VAR_3;
 RBinAddr *VAR_4;

 if (!(VAR_3 = FUNC_3 (VAR_0))) {
  return ((void*)0);
 }
 VAR_4 = FUNC_0 (VAR_2);
 if (!VAR_4) {
  FUNC_2 (VAR_3);
  return ((void*)0);
 }
 FUNC_1 (VAR_3, VAR_4);
 return VAR_3;
}
