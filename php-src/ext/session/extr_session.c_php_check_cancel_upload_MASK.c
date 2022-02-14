
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_bool ;
struct TYPE_4__ {int s; } ;
struct TYPE_5__ {TYPE_1__ key; } ;
typedef TYPE_2__ php_session_rfc1867_progress ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_2 ;
 int * FUNC_4 (int ,char*,int) ;
 int * FUNC_5 (int ,int ) ;

__attribute__((used)) static zend_bool FUNC_6(php_session_rfc1867_progress *VAR_3)
{
 zval *VAR_4, *VAR_5;

 if ((VAR_4 = FUNC_5(FUNC_1(FUNC_2(FUNC_0(VAR_2))), VAR_3->key.s)) == ((void*)0)) {
  return 0;
 }
 if (FUNC_3(VAR_4) != VAR_0) {
  return 0;
 }
 if ((VAR_5 = FUNC_4(FUNC_1(VAR_4), "cancel_upload", sizeof("cancel_upload") - 1)) == ((void*)0)) {
  return 0;
 }
 return FUNC_3(VAR_5) == VAR_1;
}
