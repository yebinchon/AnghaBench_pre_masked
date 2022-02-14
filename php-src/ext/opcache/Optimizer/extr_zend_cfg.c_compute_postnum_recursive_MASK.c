
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* blocks; } ;
typedef TYPE_1__ zend_cfg ;
struct TYPE_5__ {int successors_count; int* successors; } ;
typedef TYPE_2__ zend_basic_block ;



__attribute__((used)) static void FUNC_0(
  int *VAR_0, int *VAR_1, const zend_cfg *VAR_2, int VAR_3)
{
 int VAR_4;
 zend_basic_block *VAR_5 = &VAR_2->blocks[VAR_3];
 if (VAR_0[VAR_3] != -1) {
  return;
 }

 VAR_0[VAR_3] = -2;
 for (VAR_4 = 0; VAR_4 < VAR_5->successors_count; VAR_4++) {
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5->successors[VAR_4]);
 }
 VAR_0[VAR_3] = (*VAR_1)++;
}
