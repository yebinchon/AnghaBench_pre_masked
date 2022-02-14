
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(unsigned char VAR_4 , int VAR_5)
{
 if ( VAR_5 == 1 ) {
  if ((VAR_4 >= 0x40 && VAR_4 <= 0x7e ) || (VAR_4 >= 0x80 && VAR_4 <= 0xfc ) )
  {
   return VAR_3;
  }
  else if (( VAR_4 >= 0x20 && VAR_4 <= 0x7E ) || ( VAR_4 >= 0xA1 && VAR_4 <= 0xDF ) ||
    ( VAR_4 >= 0x81 && VAR_4 <= 0x9F ) || ( VAR_4 >= 0xE0 && VAR_4 <= 0xFC ) )
    return VAR_0;
  else
   return 0;
 } else {
  if (( VAR_4 >= 0x20 && VAR_4 <= 0x7E ) || ( VAR_4 >= 0xA1 && VAR_4 <= 0xDF )) {
   return VAR_2;
  }
  else if ( (VAR_4 >= 0x81 && VAR_4 <= 0x9F ) || ( VAR_4 >= 0xE0 && VAR_4 <= 0xFC) )
   return VAR_1;
  else if (( VAR_4 >= 0x20 && VAR_4 <= 0x7E ) || ( VAR_4 >= 0xA1 && VAR_4 <= 0xDF ) ||
    ( VAR_4 >= 0x81 && VAR_4 <= 0x9F ) || ( VAR_4 >= 0xE0 && VAR_4 <= 0xFC ) )
    return VAR_0;
  else
   return 0;
 }
 return 0;
}
