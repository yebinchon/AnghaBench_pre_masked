
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * iqmp; int * dmq1; int * dmp1; } ;
typedef TYPE_1__ RSA ;
typedef int BIGNUM ;



__attribute__((used)) static int FUNC_0(RSA *VAR_0, BIGNUM *VAR_1, BIGNUM *VAR_2, BIGNUM *VAR_3)
{
 VAR_0->dmp1 = VAR_1;
 VAR_0->dmq1 = VAR_2;
 VAR_0->iqmp = VAR_3;

 return 1;
}
