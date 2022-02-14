
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_string ;
typedef int zend_object ;
struct TYPE_4__ {TYPE_1__* ce; } ;
typedef TYPE_2__ php_com_dotnet_object ;
struct TYPE_3__ {int name; } ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static zend_string* FUNC_1(const zend_object *VAR_0)
{
 php_com_dotnet_object *VAR_1 = (php_com_dotnet_object *)VAR_0;

 return FUNC_0(VAR_1->ce->name);
}
