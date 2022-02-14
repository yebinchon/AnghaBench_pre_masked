
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_5__ {TYPE_1__* parent; int * name; } ;
typedef TYPE_2__ zend_class_entry ;
struct TYPE_4__ {int * name; } ;


 scalar_t__ FUNC_0 (int *,char*) ;

__attribute__((used)) static zend_string *FUNC_1(zend_string *VAR_0, zend_class_entry *VAR_1) {
 if (VAR_1) {
  if (FUNC_0(VAR_0, "self")) {
   VAR_0 = VAR_1->name;
  } else if (FUNC_0(VAR_0, "parent") && VAR_1->parent) {
   VAR_0 = VAR_1->parent->name;
  }
 }
 return VAR_0;
}
