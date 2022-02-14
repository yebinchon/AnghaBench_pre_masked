
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint8 ;
struct TYPE_3__ {int sess_key_len; unsigned int cipher_algo; scalar_t__* sess_key; } ;
typedef int PGP_MPI ;
typedef TYPE_1__ PGP_Context ;


 int FUNC_0 (unsigned int*,scalar_t__*,int) ;
 int FUNC_1 (unsigned int*,int,int,unsigned int**) ;
 int FUNC_2 (unsigned int*,int,int **) ;
 unsigned int* FUNC_3 (int) ;
 int FUNC_4 (unsigned int*) ;
 int FUNC_5 (unsigned int*,int ,int) ;

__attribute__((used)) static int
FUNC_6(PGP_Context *VAR_0, PGP_MPI **VAR_1, int VAR_2)
{
 uint8 *VAR_3;
 int VAR_4,
    VAR_5;
 unsigned VAR_6 = 0;
 int VAR_7 = VAR_0->sess_key_len;
 uint8 *VAR_8 = ((void*)0);
 PGP_MPI *VAR_9 = ((void*)0);


 for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
  VAR_6 += VAR_0->sess_key[VAR_5];




 VAR_3 = FUNC_3(VAR_7 + 3);
 VAR_3[0] = VAR_0->cipher_algo;
 FUNC_0(VAR_3 + 1, VAR_0->sess_key, VAR_7);
 VAR_3[VAR_7 + 1] = (VAR_6 >> 8) & 0xFF;
 VAR_3[VAR_7 + 2] = VAR_6 & 0xFF;




 VAR_4 = FUNC_1(VAR_3, VAR_7 + 3, VAR_2, &VAR_8);
 if (VAR_4 >= 0)
 {

  int VAR_10 = VAR_2 * 8 - 6;

  VAR_4 = FUNC_2(VAR_8, VAR_10, &VAR_9);
 }

 if (VAR_8)
 {
  FUNC_5(VAR_8, 0, VAR_2);
  FUNC_4(VAR_8);
 }
 FUNC_5(VAR_3, 0, VAR_7 + 3);
 FUNC_4(VAR_3);

 if (VAR_4 >= 0)
  *VAR_1 = VAR_9;

 return VAR_4;
}
