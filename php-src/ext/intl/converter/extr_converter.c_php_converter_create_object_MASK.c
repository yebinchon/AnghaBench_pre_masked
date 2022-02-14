
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_object ;
typedef int zend_class_entry ;
struct TYPE_3__ {int obj; } ;
typedef TYPE_1__ php_converter_object ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,TYPE_1__**) ;

__attribute__((used)) static zend_object *FUNC_2(zend_class_entry *VAR_0) {
 php_converter_object *VAR_1 = ((void*)0);
 zend_object *VAR_2 = FUNC_1(VAR_0, &VAR_1);

 FUNC_0(&(VAR_1->obj), VAR_0);

 return VAR_2;
}
