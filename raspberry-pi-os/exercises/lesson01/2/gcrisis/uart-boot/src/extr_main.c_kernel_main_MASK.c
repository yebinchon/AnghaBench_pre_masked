
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

void FUNC_5(void)
{
 FUNC_2(115200);
 while (1) {


  char *VAR_0="start";
  FUNC_1(VAR_0,5);
  uint32_t VAR_1 = FUNC_3();
  VAR_1|=FUNC_3()<<8;
  VAR_1|=FUNC_3()<<16;
  VAR_1|=FUNC_3()<<24;

  FUNC_4((VAR_1>>24)&0xff);
  FUNC_4((VAR_1>>16)&0xff);
  FUNC_4((VAR_1>>8)&0xff);
  FUNC_4(VAR_1&0xff);

  uint8_t * VAR_2 = (uint8_t *)0x0;
  while(VAR_1-- >0)
  {
   *VAR_2++ = FUNC_3();
  }
     FUNC_0(0);
 }
 return ;
}
