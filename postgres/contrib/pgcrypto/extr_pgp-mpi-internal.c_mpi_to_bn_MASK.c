
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mpz_t ;
struct TYPE_3__ {scalar_t__ bits; int bytes; int data; } ;
typedef TYPE_1__ PGP_MPI ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static mpz_t *
FUNC_5(PGP_MPI *VAR_0)
{
 mpz_t *VAR_1 = FUNC_3();

 FUNC_2(VAR_1, VAR_0->data, VAR_0->bytes);

 if (!VAR_1)
  return ((void*)0);
 if (FUNC_1(VAR_1) != VAR_0->bits)
 {
  FUNC_4("mpi_to_bn: bignum conversion failed: mpi=%d, bn=%d",
     VAR_0->bits, FUNC_1(VAR_1));
  FUNC_0(VAR_1);
  return ((void*)0);
 }
 return VAR_1;
}
