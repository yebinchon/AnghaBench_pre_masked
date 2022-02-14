
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ zend_property_info ;
typedef int zend_object ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,int *) ;

__attribute__((used)) static inline zend_property_info *FUNC_2(zend_object *VAR_0, zval *VAR_1)
{
 zend_property_info *VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 && FUNC_0(VAR_2->type)) {
  return VAR_2;
 }
 return ((void*)0);
}
