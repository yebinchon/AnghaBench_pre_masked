
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ut32 ;
struct TYPE_5__ {scalar_t__ nb_section; TYPE_1__** sections; } ;
typedef TYPE_2__ r_bin_omf_obj ;
struct TYPE_4__ {int bits; } ;



int FUNC_0(r_bin_omf_obj *VAR_0) {
 ut32 VAR_1 = 0;
 if (!VAR_0) {
  return 32;
 }


 while (VAR_1 < VAR_0->nb_section) {
  if (VAR_0->sections[VAR_1++]->bits == 32) {
   return 32;
  }
 }
 return 16;
}
