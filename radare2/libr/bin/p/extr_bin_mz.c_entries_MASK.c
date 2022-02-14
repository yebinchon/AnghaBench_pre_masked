
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* o; } ;
struct TYPE_4__ {int bin_obj; } ;
typedef int RList ;
typedef TYPE_2__ RBinFile ;
typedef int RBinAddr ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ) ;

__attribute__((used)) static RList *FUNC_3(RBinFile *VAR_1) {
 RBinAddr *VAR_2 = ((void*)0);
 RList *VAR_3 = ((void*)0);
 if (!(VAR_3 = FUNC_2 (VAR_0))) {
  return ((void*)0);
 }
 VAR_2 = FUNC_0 (VAR_1->o->bin_obj);
 if (VAR_2) {
  FUNC_1 (VAR_3, VAR_2);
 }
 return VAR_3;
}
