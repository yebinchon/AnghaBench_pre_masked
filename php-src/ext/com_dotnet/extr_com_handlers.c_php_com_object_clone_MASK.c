
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_4__ {scalar_t__ typeinfo; int v; } ;
typedef TYPE_1__ php_com_dotnet_object ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int) ;

zend_object* FUNC_5(zend_object *VAR_0)
{
 php_com_dotnet_object *VAR_1, *VAR_2;

 VAR_2 = (php_com_dotnet_object*) VAR_0;
 VAR_1 = (php_com_dotnet_object*)FUNC_3(sizeof(php_com_dotnet_object));

 FUNC_4(VAR_1, VAR_2, sizeof(*VAR_1));




 FUNC_2(&VAR_1->v);


 FUNC_1(&VAR_1->v, &VAR_2->v);

 if (VAR_1->typeinfo) {
  FUNC_0(VAR_1->typeinfo);
 }

 return (zend_object*)VAR_1;
}
