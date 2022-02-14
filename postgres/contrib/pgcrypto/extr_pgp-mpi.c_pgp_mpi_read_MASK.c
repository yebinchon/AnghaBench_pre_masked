
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint8 ;
struct TYPE_5__ {int bytes; unsigned int* data; } ;
typedef int PullFilter ;
typedef TYPE_1__ PGP_MPI ;


 int FUNC_0 (int,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int,unsigned int*) ;

int
FUNC_3(PullFilter *VAR_0, PGP_MPI **VAR_1)
{
 int VAR_2;
 uint8 VAR_3[2];
 int VAR_4;
 PGP_MPI *VAR_5;

 VAR_2 = FUNC_2(VAR_0, 2, VAR_3);
 if (VAR_2 < 0)
  return VAR_2;
 VAR_4 = ((unsigned) VAR_3[0] << 8) + VAR_3[1];

 VAR_2 = FUNC_0(VAR_4, &VAR_5);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_5->bytes, VAR_5->data);
 if (VAR_2 < 0)
  FUNC_1(VAR_5);
 else
  *VAR_1 = VAR_5;
 return VAR_2;
}
