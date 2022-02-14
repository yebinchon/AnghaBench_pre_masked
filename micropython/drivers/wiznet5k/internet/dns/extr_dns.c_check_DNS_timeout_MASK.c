
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

int8_t FUNC_1(void)
{
 static uint8_t VAR_3;

    uint32_t VAR_4 = FUNC_0();
 if(VAR_4 - VAR_2 >= VAR_0 * 1000)
 {
  VAR_2 = VAR_4;
  if(VAR_3 >= VAR_1) {
   VAR_3 = 0;
   return -1;
  }
  VAR_3++;
  return 0;
 }

 return 1;
}
