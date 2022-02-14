
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
typedef int zend_object ;
struct TYPE_3__ {int v; } ;
typedef TYPE_1__ php_com_dotnet_object ;
typedef int DISPID ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_5(zend_object *VAR_1, zend_string *VAR_2, int VAR_3, void **VAR_4)
{
 DISPID VAR_5;
 php_com_dotnet_object *VAR_6;

 VAR_6 = (php_com_dotnet_object*) VAR_1;

 if (FUNC_1(&VAR_6->v) == VAR_0) {
  if (FUNC_0(FUNC_4(VAR_6, FUNC_3(VAR_2), FUNC_2(VAR_2), &VAR_5))) {

   return 1;
  }
 } else {

 }

 return 0;
}
