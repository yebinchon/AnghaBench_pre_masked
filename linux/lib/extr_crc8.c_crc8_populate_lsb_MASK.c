
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;

void FUNC_0(u8 VAR_1[VAR_0], u8 VAR_2)
{
 int VAR_3, VAR_4;
 u8 VAR_5 = 1;

 VAR_1[0] = 0;

 for (VAR_3 = (VAR_0 >> 1); VAR_3; VAR_3 >>= 1) {
  VAR_5 = (VAR_5 >> 1) ^ (VAR_5 & 1 ? VAR_2 : 0);
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 += 2*VAR_3)
   VAR_1[VAR_3+VAR_4] = VAR_1[VAR_4] ^ VAR_5;
 }
}
