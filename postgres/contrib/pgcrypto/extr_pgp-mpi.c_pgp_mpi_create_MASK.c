
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
struct TYPE_4__ {int bytes; int data; } ;
typedef TYPE_1__ PGP_MPI ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int,TYPE_1__**) ;

int
FUNC_2(uint8 *VAR_0, int VAR_1, PGP_MPI **VAR_2)
{
 int VAR_3;
 PGP_MPI *VAR_4;

 VAR_3 = FUNC_1(VAR_1, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;
 FUNC_0(VAR_4->data, VAR_0, VAR_4->bytes);
 *VAR_2 = VAR_4;
 return 0;
}
