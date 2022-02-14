
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int num_interfaces; scalar_t__ type; struct TYPE_8__** interfaces; int ce_flags; } ;
typedef TYPE_1__ zend_class_entry ;
typedef int uint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__**,int) ;
 scalar_t__ FUNC_2 (TYPE_1__**,int) ;

__attribute__((used)) static void FUNC_3(zend_class_entry *VAR_2, const zend_class_entry *VAR_3)
{

 uint32_t VAR_4, VAR_5, VAR_6 = VAR_3->num_interfaces;
 zend_class_entry *VAR_7;

 VAR_5 = VAR_2->num_interfaces;

 if (VAR_2->type == VAR_1) {
  VAR_2->interfaces = (zend_class_entry **) FUNC_2(VAR_2->interfaces, sizeof(zend_class_entry *) * (VAR_5 + VAR_6));
 } else {
  VAR_2->interfaces = (zend_class_entry **) FUNC_1(VAR_2->interfaces, sizeof(zend_class_entry *) * (VAR_5 + VAR_6));
 }


 while (VAR_6--) {
  VAR_7 = VAR_3->interfaces[VAR_6];
  for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
   if (VAR_2->interfaces[VAR_4] == VAR_7) {
    break;
   }
  }
  if (VAR_4 == VAR_5) {
   VAR_2->interfaces[VAR_2->num_interfaces++] = VAR_7;
  }
 }
 VAR_2->ce_flags |= VAR_0;


 while (VAR_5 < VAR_2->num_interfaces) {
  FUNC_0(VAR_2, VAR_2->interfaces[VAR_5++]);
 }
}
