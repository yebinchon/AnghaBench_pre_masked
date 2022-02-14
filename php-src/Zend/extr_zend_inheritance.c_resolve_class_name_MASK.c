
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_6__ {int ce_flags; int * name; int * parent_name; TYPE_1__* parent; } ;
typedef TYPE_2__ zend_class_entry ;
struct TYPE_5__ {int * name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,char*) ;

__attribute__((used)) static zend_string *FUNC_2(zend_class_entry *VAR_1, zend_string *VAR_2) {
 FUNC_0(VAR_1);
 if (FUNC_1(VAR_2, "parent") && VAR_1->parent) {
  if (VAR_1->ce_flags & VAR_0) {
   return VAR_1->parent->name;
  } else {
   return VAR_1->parent_name;
  }
 } else if (FUNC_1(VAR_2, "self")) {
  return VAR_1->name;
 } else {
  return VAR_2;
 }
}
