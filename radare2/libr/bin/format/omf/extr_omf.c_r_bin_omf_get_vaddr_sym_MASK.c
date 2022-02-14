
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef long long ut64 ;
struct TYPE_7__ {int nb_section; TYPE_1__** sections; } ;
typedef TYPE_2__ r_bin_omf_obj ;
struct TYPE_8__ {int seg_idx; long long offset; int name; } ;
struct TYPE_6__ {long long vaddr; } ;
typedef TYPE_3__ OMF_symbol ;


 long long VAR_0 ;
 int FUNC_0 (char*,int ) ;

ut64 FUNC_1(r_bin_omf_obj *VAR_1, OMF_symbol *VAR_2) {
 if (!VAR_1->sections) {
  return 0LL;
 }
 if (VAR_2->seg_idx >= VAR_1->nb_section) {
  FUNC_0 ("Invalid segment index for symbol %s\n", VAR_2->name);
  return 0;
 }
 if (VAR_2->seg_idx == 0) {
  return 0;
 }
 return VAR_1->sections[VAR_2->seg_idx - 1]->vaddr + VAR_2->offset + VAR_0;
}
