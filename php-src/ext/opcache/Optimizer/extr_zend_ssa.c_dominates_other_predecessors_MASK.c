
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* predecessors; int blocks; } ;
typedef TYPE_1__ zend_cfg ;
typedef int zend_bool ;
struct TYPE_6__ {int predecessors_count; int predecessor_offset; } ;
typedef TYPE_2__ zend_basic_block ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static zend_bool FUNC_1(
  const zend_cfg *VAR_0, const zend_basic_block *VAR_1, int VAR_2, int VAR_3) {
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_1->predecessors_count; VAR_4++) {
  int VAR_5 = VAR_0->predecessors[VAR_1->predecessor_offset + VAR_4];
  if (VAR_5 != VAR_3 && !FUNC_0(VAR_0->blocks, VAR_2, VAR_5)) {
   return 0;
  }
 }
 return 1;
}
