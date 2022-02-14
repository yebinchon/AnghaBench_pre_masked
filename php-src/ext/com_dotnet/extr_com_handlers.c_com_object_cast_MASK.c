
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object ;
struct TYPE_3__ {int code_page; int v; } ;
typedef TYPE_1__ php_com_dotnet_object ;
typedef scalar_t__ VARTYPE ;
typedef int VARIANT ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;


 scalar_t__ FUNC_7 (TYPE_1__*,int ,int,int *,int ,int *,int,int ) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int *,int) ;

__attribute__((used)) static int FUNC_10(zend_object *VAR_11, zval *VAR_12, int VAR_13)
{
 php_com_dotnet_object *VAR_14;
 VARIANT VAR_15;
 VARTYPE VAR_16 = VAR_8;
 HRESULT VAR_17 = VAR_4;

 VAR_14 = (php_com_dotnet_object*) VAR_11;
 FUNC_6(VAR_12);
 FUNC_5(&VAR_15);

 if (FUNC_1(&VAR_14->v) == VAR_7) {
  if (VAR_3 != FUNC_7(VAR_14, VAR_2,
    VAR_0|VAR_1, &VAR_15, 0, ((void*)0), 1, 0)) {
   FUNC_4(&VAR_15, &VAR_14->v);
  }
 } else {
  FUNC_4(&VAR_15, &VAR_14->v);
 }

 switch(VAR_13) {
  case 132:
  case 128:
   VAR_16 = VAR_9;
   break;
  case 134:
   VAR_16 = VAR_10;
   break;
  case 133:
  case 130:
  case 129:
   VAR_16 = VAR_5;
   break;
  case 131:
   VAR_16 = VAR_6;
   break;
  default:
   ;
 }

 if (VAR_16 != VAR_8 && VAR_16 != FUNC_1(&VAR_15)) {
  VAR_17 = FUNC_2(&VAR_15, &VAR_15, 0, VAR_16);
 }

 if (FUNC_0(VAR_17)) {
  FUNC_8(VAR_12, &VAR_15, VAR_14->code_page);
 }

 FUNC_3(&VAR_15);

 if (FUNC_0(VAR_17)) {
  return VAR_3;
 }

 return FUNC_9(VAR_11, VAR_12, VAR_13);
}
