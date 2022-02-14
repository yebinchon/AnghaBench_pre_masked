
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_object ;
typedef int zend_class_entry ;
struct TYPE_6__ {int * handlers; } ;
struct TYPE_5__ {int * typeinfo; TYPE_2__ zo; int * ce; int code_page; int v; } ;
typedef TYPE_1__ php_com_dotnet_object ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*,int *) ;

zend_object* FUNC_5(zend_class_entry *VAR_2)
{
 php_com_dotnet_object *VAR_3;

 FUNC_3();
 VAR_3 = FUNC_1(sizeof(*VAR_3));
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 FUNC_0(&VAR_3->v);
 VAR_3->code_page = VAR_0;
 VAR_3->ce = VAR_2;

 FUNC_4(&VAR_3->zo, VAR_2);
 VAR_3->zo.handlers = &VAR_1;

 VAR_3->typeinfo = ((void*)0);

 return (zend_object*)VAR_3;
}
