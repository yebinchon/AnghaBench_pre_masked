
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_5__ {scalar_t__ type; int ce_flags; } ;
typedef TYPE_1__ zend_class_entry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static zend_class_entry *FUNC_4(zend_string *VAR_4, zend_class_entry *VAR_5) {
 zend_string *VAR_6 = FUNC_3(VAR_4);
 zend_class_entry *VAR_7 = FUNC_1(FUNC_0(VAR_3), VAR_6);
 FUNC_2(VAR_6);
 if (!VAR_7) {
  return ((void*)0);
 }
 if (VAR_7 == VAR_5) {

  return VAR_7;
 }






 if (!(VAR_7->ce_flags & VAR_0)) {
  return ((void*)0);
 }
 if (!(VAR_7->ce_flags & VAR_1)) {
  return ((void*)0);
 }
 return VAR_7;
}
