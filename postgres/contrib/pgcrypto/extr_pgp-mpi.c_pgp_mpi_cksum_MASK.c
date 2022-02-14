
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits; int bytes; scalar_t__* data; } ;
typedef TYPE_1__ PGP_MPI ;



unsigned
FUNC_0(unsigned VAR_0, PGP_MPI *VAR_1)
{
 int VAR_2;

 VAR_0 += VAR_1->bits >> 8;
 VAR_0 += VAR_1->bits & 0xFF;
 for (VAR_2 = 0; VAR_2 < VAR_1->bytes; VAR_2++)
  VAR_0 += VAR_1->data[VAR_2];

 return VAR_0 & 0xFFFF;
}
