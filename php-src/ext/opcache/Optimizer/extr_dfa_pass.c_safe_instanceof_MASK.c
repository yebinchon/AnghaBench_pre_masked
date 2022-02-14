
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ce_flags; } ;
typedef TYPE_1__ zend_class_entry ;
typedef int zend_bool ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static zend_bool FUNC_1(zend_class_entry *VAR_1, zend_class_entry *VAR_2) {
 if (VAR_1 == VAR_2) {
  return 1;
 }
 if (!(VAR_1->ce_flags & VAR_0)) {

  return 0;
 }
 return FUNC_0(VAR_1, VAR_2);
}
