
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* var_info; } ;
typedef TYPE_2__ zend_ssa ;
typedef int zend_bool ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;

__attribute__((used)) static inline zend_bool FUNC_0(const zend_ssa *VAR_1, int VAR_2, int VAR_3) {
 if (VAR_3 < 0) {

  return 1;
 }
 if (VAR_1->var_info[VAR_2].type & VAR_0) {

  return 1;
 }
 return 0;
}
