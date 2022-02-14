
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;
struct TYPE_8__ {TYPE_1__ std; } ;
typedef TYPE_2__ php_timezone_obj ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 TYPE_2__* FUNC_1 (int,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static zend_object *FUNC_3(zend_class_entry *VAR_1)
{
 php_timezone_obj *VAR_2 = FUNC_1(sizeof(php_timezone_obj), VAR_1);

 FUNC_2(&VAR_2->std, VAR_1);
 FUNC_0(&VAR_2->std, VAR_1);
 VAR_2->std.handlers = &VAR_0;

 return &VAR_2->std;
}
