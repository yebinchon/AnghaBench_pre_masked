
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_6__ {int properties_info; } ;
typedef TYPE_1__ zend_class_entry ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static zend_class_entry* FUNC_1(zend_class_entry *VAR_0, zend_class_entry **VAR_1, size_t VAR_2, zend_string *VAR_3, zend_class_entry *VAR_4)
{
 size_t VAR_5;

 if (VAR_4 == VAR_0) {
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
   if (VAR_1[VAR_5]
    && FUNC_0(&VAR_1[VAR_5]->properties_info, VAR_3)) {
    return VAR_1[VAR_5];
   }
  }
 }

 return VAR_4;
}
