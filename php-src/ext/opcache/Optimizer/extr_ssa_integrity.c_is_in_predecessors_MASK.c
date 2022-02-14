
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* predecessors; } ;
typedef TYPE_1__ zend_cfg ;
typedef int zend_bool ;
struct TYPE_6__ {size_t predecessor_offset; int predecessors_count; } ;
typedef TYPE_2__ zend_basic_block ;



__attribute__((used)) static inline zend_bool FUNC_0(zend_cfg *VAR_0, zend_basic_block *VAR_1, int VAR_2) {
 int VAR_3, *VAR_4 = &VAR_0->predecessors[VAR_1->predecessor_offset];
 for (VAR_3 = 0; VAR_3 < VAR_1->predecessors_count; VAR_3++) {
  if (VAR_4[VAR_3] == VAR_2) {
   return 1;
  }
 }
 return 0;
}
