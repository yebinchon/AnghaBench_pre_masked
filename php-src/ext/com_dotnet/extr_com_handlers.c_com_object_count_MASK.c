
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_object ;
typedef scalar_t__ zend_long ;
struct TYPE_2__ {int v; } ;
typedef TYPE_1__ php_com_dotnet_object ;
typedef scalar_t__ LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,scalar_t__*) ;
 int FUNC_1 (int ,int,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(zend_object *VAR_2, zend_long *VAR_3)
{
 php_com_dotnet_object *VAR_4;
 LONG VAR_5 = 0, VAR_6 = 0;

 VAR_4 = (php_com_dotnet_object*) VAR_2;

 if (!FUNC_3(&VAR_4->v)) {
  return VAR_0;
 }

 FUNC_0(FUNC_2(&VAR_4->v), 1, &VAR_6);
 FUNC_1(FUNC_2(&VAR_4->v), 1, &VAR_5);

 *VAR_3 = VAR_5 - VAR_6 + 1;

 return VAR_1;
}
