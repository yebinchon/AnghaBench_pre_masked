
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
struct TYPE_3__ {int code_page; int v; } ;
typedef TYPE_1__ php_com_dotnet_object ;
typedef int VARIANT ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int ,int ,int,int *,int ,int *,int) ;
 int FUNC_8 (int *,int *,int *) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *,int *,int ) ;

__attribute__((used)) static zval *FUNC_11(zend_object *VAR_6, zend_string *VAR_7, int VAR_8, void **VAR_9, zval *VAR_10)
{
 php_com_dotnet_object *VAR_11;
 VARIANT VAR_12;
 HRESULT VAR_13;

 FUNC_5(VAR_10);

 VAR_11 = (php_com_dotnet_object*) VAR_6;

 if (FUNC_0(&VAR_11->v) == VAR_5) {
  FUNC_2(&VAR_12);

  VAR_13 = FUNC_7(VAR_11, FUNC_4(VAR_7), FUNC_3(VAR_7),
    VAR_0|VAR_1, &VAR_12, 0, ((void*)0), 1);

  if (VAR_13 == VAR_4) {
   FUNC_10(VAR_10, &VAR_12, VAR_11->code_page);
   FUNC_1(&VAR_12);
  } else if (VAR_13 == VAR_2) {
   zval VAR_14;

   FUNC_6(&VAR_14, VAR_7);
   FUNC_8(VAR_6, VAR_10, &VAR_14);
  }
 } else {
  FUNC_9(VAR_3, "this variant has no properties");
 }

 return VAR_10;
}
