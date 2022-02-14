
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ce_flags; struct TYPE_6__* parent; } ;
typedef TYPE_1__ zend_class_entry ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static zend_class_entry *FUNC_1(
  zend_class_entry *VAR_1, zend_class_entry *VAR_2, int *VAR_3) {
 uint32_t VAR_4, VAR_5;
 if (VAR_1 == VAR_2) {
  return VAR_1;
 }
 if (!VAR_1 || !VAR_2) {
  return ((void*)0);
 }

 VAR_4 = FUNC_0(VAR_1);
 VAR_5 = FUNC_0(VAR_2);

 while (VAR_4 != VAR_5) {
  if (VAR_4 > VAR_5) {
   VAR_1 = !(VAR_1->ce_flags & VAR_0) ? ((void*)0) : VAR_1->parent;
   VAR_4--;
  } else {
   VAR_2 = !(VAR_2->ce_flags & VAR_0) ? ((void*)0) : VAR_2->parent;
   VAR_5--;
  }
 }

 while (VAR_1 != VAR_2) {
  VAR_1 = !(VAR_1->ce_flags & VAR_0) ? ((void*)0) : VAR_1->parent;
  VAR_2 = !(VAR_2->ce_flags & VAR_0) ? ((void*)0) : VAR_2->parent;
 }

 if (VAR_1) {
  *VAR_3 = 1;
 }
 return VAR_1;
}
