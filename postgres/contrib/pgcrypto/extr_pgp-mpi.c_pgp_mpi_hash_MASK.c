
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int bits; int* data; int bytes; } ;
typedef int PX_MD ;
typedef TYPE_1__ PGP_MPI ;


 int FUNC_0 (int *,int*,int) ;

int
FUNC_1(PX_MD *VAR_0, PGP_MPI *VAR_1)
{
 uint8 VAR_2[2];

 VAR_2[0] = VAR_1->bits >> 8;
 VAR_2[1] = VAR_1->bits & 0xFF;
 FUNC_0(VAR_0, VAR_2, 2);
 FUNC_0(VAR_0, VAR_1->data, VAR_1->bytes);

 return 0;
}
