
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int rijndael_ctx ;


 int FUNC_0 (int *,int *,int *) ;

void
FUNC_1(rijndael_ctx *VAR_0, uint8 *VAR_1, unsigned VAR_2)
{
 unsigned VAR_3 = 16;
 uint32 *VAR_4;

 while (VAR_2 >= VAR_3)
 {
  VAR_4 = (uint32 *) VAR_1;
  FUNC_0(VAR_0, VAR_4, VAR_4);

  VAR_2 -= VAR_3;
  VAR_1 += VAR_3;
 }
}
