
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int segment_entries; int resident_name_table; int ne_header; int entry_table; int resources; } ;
typedef TYPE_1__ r_bin_ne_obj_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(r_bin_ne_obj_t *VAR_0) {

 FUNC_1 (VAR_0->resources);
 FUNC_0 (VAR_0->entry_table);
 FUNC_0 (VAR_0->ne_header);
 FUNC_0 (VAR_0->resident_name_table);
 FUNC_0 (VAR_0->segment_entries);
}
