
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (unsigned long,int) ;

void FUNC_2(const char *VAR_0)
{
 unsigned short VAR_1;
 unsigned short VAR_2;
 unsigned short VAR_3;
 unsigned short VAR_4;
 unsigned long VAR_5;

 while (*VAR_0 != '\0') {
  VAR_1 = *VAR_0++;



  if (VAR_1 <= 0x7F) {

   VAR_5 = VAR_1;
  } else if ((VAR_1 & 0xE0) == 0xC0) {

   VAR_2 = (*VAR_0++) & 0x3F;
   VAR_5 = ((VAR_1 & 0x1F) << 6) | VAR_2;
  } else if ((VAR_1 & 0xF0) == 0xE0) {

   VAR_2 = (*VAR_0++) & 0x3F;
   VAR_3 = (*VAR_0++) & 0x3F;
   VAR_5 = ((VAR_1 & 0x0F) << 12) | (VAR_2 << 6) | VAR_3;
  } else if ((VAR_1 & 0xF8) == 0xF0) {

   VAR_2 = (*VAR_0++) & 0x3F;
   VAR_3 = (*VAR_0++) & 0x3F;
   VAR_4 = (*VAR_0++) & 0x3F;
   VAR_5 = ((VAR_1 & 0x07) << 18) | (VAR_2 << 12) | (VAR_3 << 6) | VAR_4;
  }





  FUNC_0(VAR_5, 1);
  FUNC_0(VAR_5, 0);


 }
}
