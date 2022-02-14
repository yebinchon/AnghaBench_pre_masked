
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * methods_list; } ;
struct TYPE_7__ {TYPE_1__* o; } ;
struct TYPE_6__ {scalar_t__ bin_obj; } ;
typedef int RList ;
typedef TYPE_2__ RBinFile ;
typedef TYPE_3__ RBinDexObj ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static RList *FUNC_2(RBinFile *VAR_0) {
 FUNC_1 (VAR_0 && VAR_0->o && VAR_0->o->bin_obj, ((void*)0));
 RBinDexObj *VAR_1 = (RBinDexObj*) VAR_0->o->bin_obj;
 if (!VAR_1->methods_list) {
  FUNC_0 (VAR_0);
 }
 return VAR_1->methods_list;
}
