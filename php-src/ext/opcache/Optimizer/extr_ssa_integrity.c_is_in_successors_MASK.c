
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_bool ;
struct TYPE_3__ {int successors_count; int* successors; } ;
typedef TYPE_1__ zend_basic_block ;



__attribute__((used)) static inline zend_bool FUNC_0(zend_basic_block *VAR_0, int VAR_1) {
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->successors_count; VAR_2++) {
  if (VAR_0->successors[VAR_2] == VAR_1) {
   return 1;
  }
 }
 return 0;
}
