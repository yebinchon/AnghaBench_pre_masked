
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ n ;
struct TYPE_4__ {int bits; int bytes; int * data; } ;
typedef TYPE_1__ PGP_MPI ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

int
FUNC_2(int VAR_1, PGP_MPI **VAR_2)
{
 PGP_MPI *VAR_3;
 int VAR_4 = (VAR_1 + 7) / 8;

 if (VAR_1 < 0 || VAR_1 > 0xFFFF)
 {
  FUNC_1("pgp_mpi_alloc: unreasonable request: bits=%d", VAR_1);
  return VAR_0;
 }
 VAR_3 = FUNC_0(sizeof(*VAR_3) + VAR_4);
 VAR_3->bits = VAR_1;
 VAR_3->bytes = VAR_4;
 VAR_3->data = (uint8 *) (VAR_3) + sizeof(*VAR_3);
 *VAR_2 = VAR_3;
 return 0;
}
