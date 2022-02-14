
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
struct TYPE_3__ {int v; } ;
typedef TYPE_1__ php_com_dotnet_object ;
typedef int VARIANT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ,int ,int,int *,int,int *,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static zval *FUNC_7(zend_object *VAR_5, zend_string *VAR_6, zval *VAR_7, void **VAR_8)
{
 php_com_dotnet_object *VAR_9;
 VARIANT VAR_10;

 VAR_9 = (php_com_dotnet_object*) VAR_5;

 if (FUNC_0(&VAR_9->v) == VAR_4) {
  FUNC_2(&VAR_10);

  if (VAR_3 == FUNC_5(VAR_9, FUNC_4(VAR_6), FUNC_3(VAR_6),
    VAR_0|VAR_1, &VAR_10, 1, VAR_7, 0)) {
   FUNC_1(&VAR_10);
  }
 } else {
  FUNC_6(VAR_2, "this variant has no properties");
 }
 return VAR_7;
}
