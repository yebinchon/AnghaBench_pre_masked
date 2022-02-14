
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {int constructor; } ;
typedef TYPE_1__ zend_class_entry ;
typedef int pdo_dbh_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int *,char*,char*) ;

__attribute__((used)) static zval *FUNC_5(pdo_dbh_t *VAR_2, zval *VAR_3, zend_class_entry *VAR_4, zval *VAR_5)
{
 if (!FUNC_1(VAR_5)) {
  if (FUNC_2(VAR_5) != VAR_0) {
   FUNC_4(VAR_2, ((void*)0), "HY000", "constructor arguments must be passed as an array");
   return ((void*)0);
  }
  if (!VAR_4->constructor) {
   FUNC_4(VAR_2, ((void*)0), "HY000", "user-supplied statement does not accept constructor arguments");
   return ((void*)0);
  }
 }

 if (FUNC_0(FUNC_3(VAR_3, VAR_4) != VAR_1)) {
  return ((void*)0);
 }

 return VAR_3;
}
