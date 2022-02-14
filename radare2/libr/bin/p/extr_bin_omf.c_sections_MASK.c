
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ut32 ;
struct TYPE_7__ {scalar_t__ nb_section; int * sections; } ;
typedef TYPE_2__ r_bin_omf_obj ;
struct TYPE_8__ {TYPE_1__* o; } ;
struct TYPE_6__ {TYPE_2__* bin_obj; } ;
typedef int RList ;
typedef TYPE_3__ RBinFile ;


 int FUNC_0 (int *,int ,TYPE_2__*) ;
 int * FUNC_1 () ;

__attribute__((used)) static RList *FUNC_2(RBinFile *VAR_0) {
 RList *VAR_1;
 ut32 VAR_2 = 0;

 if (!VAR_0 || !VAR_0->o || !VAR_0->o->bin_obj) {
  return ((void*)0);
 }
 r_bin_omf_obj *VAR_3 = VAR_0->o->bin_obj;

 if (!(VAR_1 = FUNC_1 ())) {
  return ((void*)0);
 }

 while (VAR_2 < VAR_3->nb_section) {
  if (!FUNC_0 (VAR_1, VAR_3->sections[VAR_2++], VAR_0->o->bin_obj)) {

   return VAR_1;
  }
 }
 return VAR_1;
}
