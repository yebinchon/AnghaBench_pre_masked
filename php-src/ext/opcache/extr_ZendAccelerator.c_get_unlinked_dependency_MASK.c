
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_9__ {int ce_flags; size_t num_interfaces; size_t num_traits; TYPE_2__* trait_names; TYPE_1__* interface_names; scalar_t__ parent_name; } ;
typedef TYPE_3__ zend_class_entry ;
typedef size_t uint32_t ;
struct TYPE_8__ {scalar_t__ name; int * lc_name; } ;
struct TYPE_7__ {scalar_t__ name; int * lc_name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(zend_class_entry *VAR_3, const char **VAR_4, const char **VAR_5) {
 zend_class_entry *VAR_6;
 *VAR_4 = "Unknown reason";
 *VAR_5 = "";

 if (VAR_3->parent_name) {
  zend_string *VAR_7 = FUNC_5(VAR_3->parent_name);
  VAR_6 = FUNC_3(FUNC_0(VAR_2), VAR_7);
  FUNC_4(VAR_7);
  if (!VAR_6) {
   *VAR_4 = "Unknown parent ";
   *VAR_5 = FUNC_1(VAR_3->parent_name);
   return;
  }
  if (!(VAR_6->ce_flags & VAR_0)) {
   *VAR_4 = "Parent with unresolved initializers ";
   *VAR_5 = FUNC_1(VAR_3->parent_name);
   return;
  }
  if (!(VAR_6->ce_flags & VAR_1)) {
   *VAR_4 = "Parent with unresolved property types ";
   *VAR_5 = FUNC_1(VAR_3->parent_name);
   return;
  }
 }

 if (VAR_3->num_interfaces) {
  uint32_t VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_3->num_interfaces; VAR_8++) {
   VAR_6 = FUNC_3(FUNC_0(VAR_2), VAR_3->interface_names[VAR_8].lc_name);
   if (!VAR_6) {
    *VAR_4 = "Unknown interface ";
    *VAR_5 = FUNC_1(VAR_3->interface_names[VAR_8].name);
    return;
   }
  }
 }

 if (VAR_3->num_traits) {
  uint32_t VAR_9;
  for (VAR_9 = 0; VAR_9 < VAR_3->num_traits; VAR_9++) {
   VAR_6 = FUNC_3(FUNC_0(VAR_2), VAR_3->trait_names[VAR_9].lc_name);
   if (!VAR_6) {
    *VAR_4 = "Unknown trait ";
    *VAR_5 = FUNC_1(VAR_3->trait_names[VAR_9].name);
    return;
   }
  }
 }

 if (!FUNC_2(VAR_3)) {
  *VAR_4 = "Unknown type dependencies";
  return;
 }
}
