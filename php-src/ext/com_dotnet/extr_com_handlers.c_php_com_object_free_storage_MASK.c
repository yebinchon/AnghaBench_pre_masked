
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_3__ {scalar_t__ id_of_name_cache; scalar_t__ method_cache; int v; int * sink_dispatch; int * typeinfo; } ;
typedef TYPE_1__ php_com_dotnet_object ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;

void FUNC_7(zend_object *VAR_1)
{
 php_com_dotnet_object *VAR_2 = (php_com_dotnet_object*)VAR_1;

 if (VAR_2->typeinfo) {
  FUNC_2(VAR_2->typeinfo);
  VAR_2->typeinfo = ((void*)0);
 }

 if (VAR_2->sink_dispatch) {
  FUNC_4(VAR_2, VAR_0);
  FUNC_1(VAR_2->sink_dispatch);
  VAR_2->sink_dispatch = ((void*)0);
 }

 FUNC_3(&VAR_2->v);

 if (VAR_2->method_cache) {
  FUNC_5(VAR_2->method_cache);
  FUNC_0(VAR_2->method_cache);
 }
 if (VAR_2->id_of_name_cache) {
  FUNC_5(VAR_2->id_of_name_cache);
  FUNC_0(VAR_2->id_of_name_cache);
 }

 FUNC_6(VAR_1);
}
