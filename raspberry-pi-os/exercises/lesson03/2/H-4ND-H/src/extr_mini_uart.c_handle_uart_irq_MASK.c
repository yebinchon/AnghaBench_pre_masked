
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_2()
{
 unsigned int VAR_7 = FUNC_0(VAR_0);
 if((VAR_7 & 0x06) == 0x04)
 {
  while(FUNC_0(VAR_2)&0x01)
  {
   VAR_4[VAR_6++] = FUNC_0(VAR_1)&0xFF;
   if(VAR_6 == VAR_3)
    VAR_6 = 0;
  }
 }
 if((VAR_7 & 0x06) == 0x02)
 {
  while(FUNC_0(VAR_2)&0x20)
  {
   if(VAR_5 == VAR_6)
     break;
   char VAR_8 = VAR_4[VAR_5++];
   FUNC_1(VAR_1,VAR_8);
   if(VAR_5 == VAR_3)
    VAR_5 = 0;
  }
 }
}
