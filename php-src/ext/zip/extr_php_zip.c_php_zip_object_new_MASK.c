
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;
struct TYPE_8__ {TYPE_1__ zo; int * prop_handler; } ;
typedef TYPE_2__ ze_zip_object ;


 int FUNC_0 (TYPE_1__*,int *) ;
 TYPE_2__* FUNC_1 (int,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static zend_object *FUNC_3(zend_class_entry *VAR_2)
{
 ze_zip_object *VAR_3;

 VAR_3 = FUNC_1(sizeof(ze_zip_object), VAR_2);
 VAR_3->prop_handler = &VAR_1;
 FUNC_2(&VAR_3->zo, VAR_2);
 FUNC_0(&VAR_3->zo, VAR_2);
 VAR_3->zo.handlers = &VAR_0;

 return &VAR_3->zo;
}
