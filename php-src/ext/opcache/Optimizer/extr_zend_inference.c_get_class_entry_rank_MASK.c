
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ce_flags; struct TYPE_3__* parent; } ;
typedef TYPE_1__ zend_class_entry ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;

__attribute__((used)) static uint32_t FUNC_0(zend_class_entry *VAR_1) {
 uint32_t VAR_2 = 0;
 if (VAR_1->ce_flags & VAR_0) {
  while (VAR_1->parent) {
   VAR_2++;
   VAR_1 = VAR_1->parent;
  }
 }
 return VAR_2;
}
