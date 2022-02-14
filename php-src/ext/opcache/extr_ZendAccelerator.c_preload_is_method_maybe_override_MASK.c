
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_8__ {size_t num_interfaces; size_t num_traits; int function_table; TYPE_2__* trait_names; TYPE_1__* interface_names; scalar_t__ parent_name; scalar_t__ trait_precedences; scalar_t__ trait_aliases; } ;
typedef TYPE_3__ zend_class_entry ;
typedef int zend_bool ;
typedef size_t uint32_t ;
struct TYPE_7__ {int * lc_name; } ;
struct TYPE_6__ {int * lc_name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 TYPE_3__* FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__) ;

__attribute__((used)) static zend_bool FUNC_5(zend_class_entry *VAR_1, zend_string *VAR_2) {
 zend_class_entry *VAR_3;
 if (VAR_1->trait_aliases || VAR_1->trait_precedences) {
  return 1;
 }

 if (VAR_1->parent_name) {
  zend_string *VAR_4 = FUNC_4(VAR_1->parent_name);
  VAR_3 = FUNC_2(FUNC_0(VAR_0), VAR_4);
  FUNC_3(VAR_4);
  if (FUNC_1(&VAR_3->function_table, VAR_2)) {
   return 1;
  }
 }

 if (VAR_1->num_interfaces) {
  uint32_t VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_1->num_interfaces; VAR_5++) {
   zend_class_entry *VAR_6 = FUNC_2(FUNC_0(VAR_0), VAR_1->interface_names[VAR_5].lc_name);
   if (FUNC_1(&VAR_6->function_table, VAR_2)) {
    return 1;
   }
  }
 }

 if (VAR_1->num_traits) {
  uint32_t VAR_7;
  for (VAR_7 = 0; VAR_7 < VAR_1->num_traits; VAR_7++) {
   zend_class_entry *VAR_8 = FUNC_2(FUNC_0(VAR_0), VAR_1->trait_names[VAR_7].lc_name);
   if (FUNC_1(&VAR_8->function_table, VAR_2)) {
    return 1;
   }
  }
 }

 return 0;
}
