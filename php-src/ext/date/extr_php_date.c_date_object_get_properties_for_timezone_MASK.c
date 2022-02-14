
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_prop_purpose ;
typedef int zend_object ;
struct TYPE_4__ {int type; int initialized; } ;
typedef TYPE_1__ php_timezone_obj ;
typedef int HashTable ;







 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int) ;

__attribute__((used)) static HashTable *FUNC_7(zend_object *VAR_0, zend_prop_purpose VAR_1)
{
 HashTable *VAR_2;
 zval VAR_3;
 php_timezone_obj *VAR_4;

 switch (VAR_1) {
  case 131:
  case 129:
  case 128:
  case 130:
  case 132:
   break;
  default:
   return FUNC_6(VAR_0, VAR_1);
 }

 VAR_4 = FUNC_1(VAR_0);
 VAR_2 = FUNC_3(FUNC_5(VAR_0));
 if (!VAR_4->initialized) {
  return VAR_2;
 }

 FUNC_0(&VAR_3, VAR_4->type);
 FUNC_4(VAR_2, "timezone_type", sizeof("timezone_type")-1, &VAR_3);

 FUNC_2(VAR_4, &VAR_3);
 FUNC_4(VAR_2, "timezone", sizeof("timezone")-1, &VAR_3);

 return VAR_2;
}
