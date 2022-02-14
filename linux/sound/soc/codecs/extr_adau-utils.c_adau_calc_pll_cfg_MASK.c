
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;

int FUNC_2(unsigned int VAR_1, unsigned int VAR_2,
 uint8_t VAR_3[5])
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 unsigned int VAR_9;

 if (!VAR_2) {
  VAR_4 = 0;
  VAR_5 = 0;
  VAR_6 = 0;
  VAR_9 = 0;
 } else {
  if (VAR_2 % VAR_1 != 0) {
   VAR_9 = FUNC_0(VAR_1, 13500000);
   VAR_1 /= VAR_9;
   VAR_4 = VAR_2 / VAR_1;
   VAR_7 = VAR_2 % VAR_1;
   VAR_8 = FUNC_1(VAR_7, VAR_1);
   VAR_5 = VAR_7 / VAR_8;
   VAR_6 = VAR_1 / VAR_8;
   VAR_9--;
  } else {
   VAR_4 = VAR_2 / VAR_1;
   VAR_5 = 0;
   VAR_6 = 0;
   VAR_9 = 0;
  }
  if (VAR_5 > 0xffff || VAR_6 > 0xffff || VAR_9 > 3 || VAR_4 > 8 || VAR_4 < 2)
   return -VAR_0;
 }

 VAR_3[0] = VAR_6 >> 8;
 VAR_3[1] = VAR_6 & 0xff;
 VAR_3[2] = VAR_5 >> 8;
 VAR_3[3] = VAR_5 & 0xff;
 VAR_3[4] = (VAR_4 << 3) | (VAR_9 << 1);
 if (VAR_6 != 0)
  VAR_3[4] |= 1;

 return 0;
}
