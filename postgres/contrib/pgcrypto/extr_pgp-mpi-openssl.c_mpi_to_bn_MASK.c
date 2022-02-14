
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bits; int bytes; int data; } ;
typedef TYPE_1__ PGP_MPI ;
typedef int BIGNUM ;


 int * FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static BIGNUM *
FUNC_4(PGP_MPI *VAR_0)
{
 BIGNUM *VAR_1 = FUNC_0(VAR_0->data, VAR_0->bytes, ((void*)0));

 if (!VAR_1)
  return ((void*)0);
 if (FUNC_2(VAR_1) != VAR_0->bits)
 {
  FUNC_3("mpi_to_bn: bignum conversion failed: mpi=%d, bn=%d",
     VAR_0->bits, FUNC_2(VAR_1));
  FUNC_1(VAR_1);
  return ((void*)0);
 }
 return VAR_1;
}
