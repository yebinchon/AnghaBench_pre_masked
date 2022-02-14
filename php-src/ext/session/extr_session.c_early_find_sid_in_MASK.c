
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_bool ;
struct TYPE_3__ {int sname_len; } ;
typedef TYPE_1__ php_session_rfc1867_progress ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static zend_bool FUNC_8(zval *VAR_3, int VAR_4, php_session_rfc1867_progress *VAR_5)
{
 zval *VAR_6;

 if (FUNC_4(FUNC_0(VAR_1)[VAR_4])) {
  return 0;
 }

 if ((VAR_6 = FUNC_6(FUNC_3(FUNC_0(VAR_1)[VAR_4]), FUNC_1(VAR_2), VAR_5->sname_len))
   && FUNC_5(VAR_6) == VAR_0) {
  FUNC_7(VAR_3);
  FUNC_2(VAR_3, VAR_6);
  return 1;
 }

 return 0;
}
