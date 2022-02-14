
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ bytes; int data; } ;
typedef TYPE_1__ PGP_MPI ;
typedef int BIGNUM ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_1__**) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static PGP_MPI *
FUNC_6(BIGNUM *VAR_0)
{
 int VAR_1;
 PGP_MPI *VAR_2;

 VAR_1 = FUNC_3(FUNC_1(VAR_0), &VAR_2);
 if (VAR_1 < 0)
  return ((void*)0);

 if (FUNC_2(VAR_0) != VAR_2->bytes)
 {
  FUNC_5("bn_to_mpi: bignum conversion failed: bn=%d, mpi=%d",
     FUNC_2(VAR_0), VAR_2->bytes);
  FUNC_4(VAR_2);
  return ((void*)0);
 }
 FUNC_0(VAR_0, VAR_2->data);
 return VAR_2;
}
