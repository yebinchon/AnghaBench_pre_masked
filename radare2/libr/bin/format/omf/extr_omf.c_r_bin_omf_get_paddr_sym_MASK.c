
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef long long ut64 ;
struct TYPE_8__ {int nb_section; TYPE_1__** sections; } ;
typedef TYPE_2__ r_bin_omf_obj ;
struct TYPE_10__ {long long size; long long offset; long long paddr; struct TYPE_10__* next; } ;
struct TYPE_9__ {int seg_idx; long long offset; } ;
struct TYPE_7__ {TYPE_4__* data; } ;
typedef TYPE_3__ OMF_symbol ;
typedef TYPE_4__ OMF_data ;



ut64 FUNC_0(r_bin_omf_obj *VAR_0, OMF_symbol *VAR_1) {
 ut64 VAR_2 = 0;
 if (!VAR_0->sections) {
  return 0LL;
 }
 if (VAR_1->seg_idx - 1 > VAR_0->nb_section) {
  return 0LL;
 }
 int VAR_3 = VAR_1->seg_idx - 1;
 if (VAR_3 >= VAR_0->nb_section) {
  return 0LL;
 }
 OMF_data *VAR_4 = VAR_0->sections[VAR_3]->data;
 while (VAR_4) {
  VAR_2 += VAR_4->size;
  if (VAR_1->offset < VAR_2) {
   return VAR_1->offset - VAR_4->offset + VAR_4->paddr;
  }
  VAR_4 = VAR_4->next;
 }
 return 0;
}
