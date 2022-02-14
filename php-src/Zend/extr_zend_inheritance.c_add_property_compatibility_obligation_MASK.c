
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_property_info ;
typedef int zend_class_entry ;
struct TYPE_4__ {int const* parent_prop; int const* child_prop; int type; } ;
typedef TYPE_1__ variance_obligation ;
typedef int HashTable ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(
  zend_class_entry *VAR_1, const zend_property_info *VAR_2,
  const zend_property_info *VAR_3) {
 HashTable *VAR_4 = FUNC_1(VAR_1);
 variance_obligation *VAR_5 = FUNC_0(sizeof(variance_obligation));
 VAR_5->type = VAR_0;
 VAR_5->child_prop = VAR_2;
 VAR_5->parent_prop = VAR_3;
 FUNC_2(VAR_4, VAR_5);
}
