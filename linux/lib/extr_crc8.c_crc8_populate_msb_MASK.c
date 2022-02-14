
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;

void FUNC_0(u8 VAR_1[VAR_0], u8 VAR_2)
{
 int VAR_3, VAR_4;
 const u8 VAR_5 = 0x80;
 u8 VAR_6 = VAR_5;

 VAR_1[0] = 0;

 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3 *= 2) {
  VAR_6 = (VAR_6 << 1) ^ (VAR_6 & VAR_5 ? VAR_2 : 0);
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   VAR_1[VAR_3+VAR_4] = VAR_1[VAR_4] ^ VAR_6;
 }
}
