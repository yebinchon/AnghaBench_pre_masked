
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static zend_object *FUNC_2(zend_class_entry *VAR_1)
{
 zend_object *VAR_2;

 VAR_2 = FUNC_1( VAR_1);
 VAR_2->handlers = &VAR_0;

 FUNC_0(VAR_2, VAR_1);

 return VAR_2;
}
