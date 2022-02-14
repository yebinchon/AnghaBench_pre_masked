
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_property_info ;
struct TYPE_5__ {TYPE_1__* ce; int * properties_table; } ;
typedef TYPE_2__ zend_object ;
struct TYPE_4__ {intptr_t default_properties_count; int ** properties_info_table; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline zend_property_info *FUNC_1(zend_object *VAR_0, zval *VAR_1)
{
 zend_property_info **VAR_2 = VAR_0->ce->properties_info_table;
 intptr_t VAR_3 = VAR_1 - VAR_0->properties_table;
 FUNC_0(VAR_3 >= 0 && VAR_3 < VAR_0->ce->default_properties_count);
 return VAR_2[VAR_3];
}
