
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef scalar_t__ zend_long ;
typedef int mpz_ptr ;
typedef int gmp_ulong ;
typedef int gmp_temp_t ;
typedef int (* gmp_binary_ui_op_t ) (int ,int ,int ) ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(gmp_binary_ui_op_t VAR_2, zval *VAR_3, zval *VAR_4, zval *VAR_5) {
 zend_long VAR_6 = FUNC_4(VAR_5);

 if (VAR_6 < 0) {
  FUNC_3(((void*)0), VAR_0, "Shift cannot be negative");
  VAR_1;
 } else {
  mpz_ptr VAR_7, VAR_8;
  gmp_temp_t VAR_9;

  FUNC_0(VAR_7, VAR_4, VAR_9);
  FUNC_2(VAR_8);
  VAR_2(VAR_8, VAR_7, (gmp_ulong) VAR_6);
  FUNC_1(VAR_9);
 }
}
