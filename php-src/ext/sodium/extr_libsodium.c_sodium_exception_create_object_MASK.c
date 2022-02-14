
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_object ;
typedef int zend_class_entry ;
struct TYPE_2__ {int * (* create_object ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static zend_object *FUNC_2(zend_class_entry *VAR_1) {
 zend_object *VAR_2 = VAR_0->create_object(VAR_1);
 FUNC_0(VAR_2);
 return VAR_2;
}
