
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* free; } ;
struct TYPE_5__ {TYPE_2__* child_list; TYPE_2__* module_list; struct TYPE_5__* pattern_bytes; struct TYPE_5__* variant_bool_array; } ;
typedef void* RListFree ;
typedef TYPE_1__ RFlirtNode ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(RFlirtNode *VAR_1) {
 if (!VAR_1) {
  return;
 }
 FUNC_0 (VAR_1->variant_bool_array);
 FUNC_0 (VAR_1->pattern_bytes);
 if (VAR_1->module_list) {
  VAR_1->module_list->free = (RListFree)VAR_0;
  FUNC_1 (VAR_1->module_list);
 }
 if (VAR_1->child_list) {
  VAR_1->child_list->free = (RListFree) FUNC_2;
  FUNC_1 (VAR_1->child_list);
 }
 FUNC_0 (VAR_1);
}
