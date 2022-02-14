
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_3__ {int bits; int* data; int bytes; } ;
typedef int PushFilter ;
typedef TYPE_1__ PGP_MPI ;


 int FUNC_0 (int *,int*,int) ;

int
FUNC_1(PushFilter *VAR_0, PGP_MPI *VAR_1)
{
 int VAR_2;
 uint8 VAR_3[2];

 VAR_3[0] = VAR_1->bits >> 8;
 VAR_3[1] = VAR_1->bits & 0xFF;
 VAR_2 = FUNC_0(VAR_0, VAR_3, 2);
 if (VAR_2 >= 0)
  VAR_2 = FUNC_0(VAR_0, VAR_1->data, VAR_1->bytes);
 return VAR_2;
}
