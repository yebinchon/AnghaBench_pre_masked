
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int zend_long ;
typedef int zend_bool ;
typedef int mpz_ptr ;
struct TYPE_6__ {scalar_t__ is_used; } ;
typedef TYPE_1__ gmp_temp_t ;


 int FUNC_0 (int ,int *,TYPE_1__) ;
 int FUNC_1 (int ,int *,TYPE_1__,TYPE_1__) ;
 int FUNC_2 (TYPE_1__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(zval *VAR_1, zval *VAR_2, zval *VAR_3)
{
 mpz_ptr VAR_4, VAR_5;
 gmp_temp_t VAR_6, VAR_7;
 zend_bool VAR_8 = 0;
 zend_long VAR_9;

 FUNC_0(VAR_4, VAR_2, VAR_6);

 if (FUNC_5(VAR_3) == VAR_0) {
  VAR_8 = 1;
  VAR_7.is_used = 0;
 } else {
  FUNC_1(VAR_5, VAR_3, VAR_7, VAR_6);
 }

 if (VAR_8) {
  VAR_9 = FUNC_7(VAR_4, FUNC_4(VAR_3));
 } else {
  VAR_9 = FUNC_6(VAR_4, VAR_5);
 }

 FUNC_2(VAR_6);
 FUNC_2(VAR_7);

 FUNC_3(VAR_9);
}
