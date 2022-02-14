
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

unsigned char FUNC_0( unsigned char VAR_6 )
{
    uint8_t VAR_7;


  VAR_1 = VAR_6;
  VAR_0 = (1<<VAR_3) | (1<<VAR_2);


  while(!(VAR_0 & (1<<VAR_3)));


  VAR_7 = VAR_5 & 0xF8;
  if( VAR_7 != VAR_4) return 1;
  return 0;

}
