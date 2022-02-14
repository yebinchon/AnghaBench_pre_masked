
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;
struct TYPE_9__ {TYPE_1__ obj; int error; } ;
typedef TYPE_2__ php_converter_object ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static zend_object *FUNC_4(zend_class_entry *VAR_1, php_converter_object **VAR_2) {
 php_converter_object *VAR_3;

 VAR_3 = FUNC_2(sizeof(php_converter_object), VAR_1);

 FUNC_3(&VAR_3->obj, VAR_1);
 FUNC_1(&VAR_3->obj, VAR_1);
 FUNC_0(&(VAR_3->error));

 VAR_3->obj.handlers = &VAR_0;
 *VAR_2 = VAR_3;

 return &VAR_3->obj;
}
