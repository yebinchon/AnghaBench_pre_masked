
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int ce_flags; size_t num_interfaces; TYPE_1__* interface_names; struct TYPE_9__** interfaces; int parent_name; struct TYPE_9__* parent; } ;
typedef TYPE_2__ zend_class_entry ;
typedef int zend_bool ;
typedef size_t uint32_t ;
struct TYPE_8__ {int * lc_name; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,int *,int) ;

__attribute__((used)) static zend_bool FUNC_2(zend_class_entry *VAR_5, zend_class_entry *VAR_6) {
 zend_class_entry *VAR_7;

 if (VAR_5 == VAR_6) {
  return 1;
 }

 if (VAR_5->ce_flags & VAR_0) {
  return FUNC_0(VAR_5, VAR_6);
 }

 VAR_7 = VAR_5;
 while (VAR_7->parent) {
  if (VAR_7->ce_flags & VAR_2) {
   VAR_7 = VAR_7->parent;
  } else {
   VAR_7 = FUNC_1(VAR_7->parent_name, ((void*)0),
    VAR_3 | VAR_4);
   if (!VAR_7) {
    break;
   }
  }
  if (VAR_7 == VAR_6) {
   return 1;
  }
 }

 if (VAR_5->num_interfaces) {
  uint32_t VAR_8;
  if (VAR_5->ce_flags & VAR_1) {


   for (VAR_8 = 0; VAR_8 < VAR_5->num_interfaces; VAR_8++) {
    if (FUNC_2(VAR_5->interfaces[VAR_8], VAR_6)) {
     return 1;
    }
   }
  } else {
   for (VAR_8 = 0; VAR_8 < VAR_5->num_interfaces; VAR_8++) {
    VAR_7 = FUNC_1(
     VAR_5->interface_names[VAR_8].name, VAR_5->interface_names[VAR_8].lc_name,
     VAR_3 | VAR_4);
    if (VAR_7 && FUNC_2(VAR_7, VAR_6)) {
     return 1;
    }
   }
  }
 }

 return 0;
}
