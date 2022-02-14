
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int mpz_t ;
struct TYPE_5__ {int bytes; int data; } ;
typedef TYPE_1__ PGP_MPI ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static PGP_MPI *
FUNC_5(mpz_t *VAR_0)
{
 int VAR_1;
 PGP_MPI *VAR_2;
 int VAR_3;

 VAR_1 = FUNC_2(FUNC_0(VAR_0), &VAR_2);
 if (VAR_1 < 0)
  return ((void*)0);

 VAR_3 = (FUNC_0(VAR_0) + 7) / 8;
 if (VAR_3 != VAR_2->bytes)
 {
  FUNC_4("bn_to_mpi: bignum conversion failed: bn=%d, mpi=%d",
     VAR_3, VAR_2->bytes);
  FUNC_3(VAR_2);
  return ((void*)0);
 }
 FUNC_1(VAR_0, VAR_2->data, VAR_2->bytes);
 return VAR_2;
}
