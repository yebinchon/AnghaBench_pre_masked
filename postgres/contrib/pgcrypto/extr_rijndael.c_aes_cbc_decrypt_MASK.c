
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int rijndael_ctx ;


 int FUNC_0 (int *,int *,unsigned int) ;
 int FUNC_1 (int *,int *,int *) ;

void
FUNC_2(rijndael_ctx *VAR_0, uint8 *VAR_1, uint8 *VAR_2, unsigned VAR_3)
{
 uint32 *VAR_4 = (uint32 *) VAR_2;
 unsigned VAR_5 = 16;
 uint32 VAR_6[4],
    VAR_7[4];

 FUNC_0(VAR_7, VAR_1, VAR_5);
 while (VAR_3 >= VAR_5)
 {
  VAR_6[0] = VAR_4[0];
  VAR_6[1] = VAR_4[1];
  VAR_6[2] = VAR_4[2];
  VAR_6[3] = VAR_4[3];

  FUNC_1(VAR_0, VAR_6, VAR_4);

  VAR_4[0] ^= VAR_7[0];
  VAR_4[1] ^= VAR_7[1];
  VAR_4[2] ^= VAR_7[2];
  VAR_4[3] ^= VAR_7[3];

  VAR_7[0] = VAR_6[0];
  VAR_7[1] = VAR_6[1];
  VAR_7[2] = VAR_6[2];
  VAR_7[3] = VAR_6[3];
  VAR_4 += 4;
  VAR_3 -= VAR_5;
 }
}
