
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_4__ {int flags; int * ce; } ;
typedef TYPE_1__ zend_property_info ;
typedef int zend_class_entry ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_2(zend_property_info *VAR_1, zend_string *VAR_2, zend_class_entry *VAR_3, zval *VAR_4, long VAR_5)
{
 if ((VAR_1->flags & VAR_0) && VAR_1->ce != VAR_3) {
  return;
 }

 if (VAR_1->flags & VAR_5) {
  zval VAR_6;
  FUNC_1(VAR_3, VAR_2, VAR_1, &VAR_6);
  FUNC_0(VAR_4, &VAR_6);
 }
}
