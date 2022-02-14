
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (struct snd_ice1712*,int) ;
 int FUNC_1 (struct snd_ice1712*,int,unsigned char) ;
 unsigned char FUNC_2 (struct snd_ice1712*,int) ;
 int FUNC_3 (struct snd_ice1712*,int,unsigned char) ;

__attribute__((used)) static void FUNC_4(struct snd_ice1712 *VAR_2, unsigned char VAR_3,
    unsigned short int *VAR_4)
{
 unsigned char VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9;


 for (VAR_7 = 0; VAR_7 < 7; VAR_7++) {
  if (*VAR_4 & (0x01 << VAR_7)) {
   if (VAR_7 == 0)
    VAR_8 = VAR_1;
   else
    VAR_8 = VAR_0 - 1 + VAR_7;
   VAR_6 = FUNC_2(VAR_2, VAR_8);
   VAR_5 = (~VAR_3 << 7 & 0x80) | (VAR_6 & ~0x80);
   VAR_9 = (VAR_5 != VAR_6);
   if (VAR_9) {
    FUNC_3(VAR_2, VAR_8, VAR_5);
    *VAR_4 = *VAR_4 | (0x01 << VAR_7);
   } else {
    *VAR_4 = *VAR_4 & ~(0x01 << VAR_7);
   }
  }
 }


 for (VAR_7 = 0; VAR_7 < 3; VAR_7++) {
  if (*VAR_4 & (0x01 << (VAR_7 + 7))) {
   if (VAR_7 == 0)
    VAR_8 = VAR_1;
   else
    VAR_8 = VAR_0 - 1 + VAR_7;
   VAR_6 = FUNC_0(VAR_2, VAR_8);
   VAR_5 = (~VAR_3 << 7 & 0x80) | (VAR_6 & ~0x80);
   VAR_9 = (VAR_5 != VAR_6);
   if (VAR_9) {
    FUNC_1(VAR_2, VAR_8, VAR_5);
    *VAR_4 = *VAR_4 | (0x01 << VAR_7);
   } else {
    *VAR_4 = *VAR_4 & ~(0x01 << VAR_7);
   }
  }
 }
}
