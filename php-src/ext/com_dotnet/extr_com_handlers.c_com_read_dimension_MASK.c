
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
struct TYPE_3__ {int code_page; int v; } ;
typedef TYPE_1__ php_com_dotnet_object ;
typedef int VARIANT ;
typedef int LONG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,int,int *,int,int *,int ,int ) ;
 scalar_t__ FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int *,int *,int *) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int *,int *,int ) ;

__attribute__((used)) static zval *FUNC_15(zend_object *VAR_6, zval *VAR_7, int VAR_8, zval *VAR_9)
{
 php_com_dotnet_object *VAR_10;
 VARIANT VAR_11;

 FUNC_6(VAR_9);

 VAR_10 = (php_com_dotnet_object*) VAR_6;

 if (FUNC_3(&VAR_10->v) == VAR_5) {
  FUNC_5(&VAR_11);

  if (VAR_4 == FUNC_9(VAR_10, VAR_2,
    VAR_0|VAR_1, &VAR_11, 1, VAR_7, 0, 0)) {
   FUNC_14(VAR_9, &VAR_11, VAR_10->code_page);
   FUNC_4(&VAR_11);
  }
 } else if (FUNC_2(&VAR_10->v)) {
  FUNC_8(VAR_7);

  if (FUNC_0(FUNC_1(&VAR_10->v)) == 1) {
   if (FUNC_10(&VAR_10->v, &VAR_11, (LONG)FUNC_7(VAR_7))) {
    FUNC_13(VAR_9, &VAR_11, VAR_10->code_page);
    FUNC_4(&VAR_11);
   }
  } else {
   FUNC_11(VAR_6, VAR_9, VAR_7);
  }

 } else {
  FUNC_12(VAR_3, "this variant is not an array type");
 }

 return VAR_9;
}
