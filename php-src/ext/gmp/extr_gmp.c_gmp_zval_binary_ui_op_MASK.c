
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int * mpz_ptr ;
typedef int gmp_ulong ;
struct TYPE_6__ {scalar_t__ is_used; } ;
typedef TYPE_1__ gmp_temp_t ;
typedef int (* gmp_binary_ui_op_t ) (int *,int *,int ) ;
typedef int (* gmp_binary_op_t ) (int *,int *,int *) ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,TYPE_1__) ;
 int FUNC_1 (int *,int *,TYPE_1__,TYPE_1__) ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,char*) ;

__attribute__((used)) static inline void FUNC_8(zval *VAR_3, zval *VAR_4, zval *VAR_5, gmp_binary_op_t VAR_6, gmp_binary_ui_op_t VAR_7, int VAR_8)
{
 mpz_ptr VAR_9, VAR_10, VAR_11;
 gmp_temp_t VAR_12, VAR_13;

 FUNC_0(VAR_9, VAR_4, VAR_12);

 if (VAR_7 && FUNC_5(VAR_5) == VAR_1 && FUNC_4(VAR_5) >= 0) {
  VAR_10 = ((void*)0);
  VAR_13.is_used = 0;
 } else {
  FUNC_1(VAR_10, VAR_5, VAR_13, VAR_12);
 }

 if (VAR_8) {
  int VAR_14 = 0;
  if (!VAR_10) {
   VAR_14 = (FUNC_4(VAR_5) == 0);
  } else {
   VAR_14 = !FUNC_6(VAR_10, 0);
  }

  if (VAR_14) {
   FUNC_7(((void*)0), VAR_0, "Zero operand not allowed");
   FUNC_2(VAR_12);
   FUNC_2(VAR_13);
   VAR_2;
  }
 }

 FUNC_3(VAR_11);

 if (!VAR_10) {
  VAR_7(VAR_11, VAR_9, (gmp_ulong) FUNC_4(VAR_5));
 } else {
  VAR_6(VAR_11, VAR_9, VAR_10);
 }

 FUNC_2(VAR_12);
 FUNC_2(VAR_13);
}
