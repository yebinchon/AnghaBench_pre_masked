
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
typedef int mpz_ptr ;
typedef int (* gmp_unary_op_t ) (int ,int ) ;
typedef int gmp_temp_t ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(zval *VAR_0, zval *VAR_1, gmp_unary_op_t VAR_2)
{
 mpz_ptr VAR_3, VAR_4;
 gmp_temp_t VAR_5;

 FUNC_0(VAR_3, VAR_1, VAR_5);

 FUNC_2(VAR_4);
 VAR_2(VAR_4, VAR_3);

 FUNC_1(VAR_5);
}
