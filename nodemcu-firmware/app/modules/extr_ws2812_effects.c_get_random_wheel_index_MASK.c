
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;

__attribute__((used)) static uint8_t FUNC_3(uint8_t VAR_0)
{
  uint8_t VAR_1 = 0;
  uint8_t VAR_2 = 0;
  uint8_t VAR_3 = 0;
  uint8_t VAR_4 = 0;

  while(VAR_4 < 42) {
    VAR_1 = FUNC_2() % 360;
    VAR_2 = FUNC_0(VAR_0 - VAR_1);
    VAR_3 = 360 - VAR_2;
    VAR_4 = FUNC_1(VAR_2, VAR_3);
  }

  return VAR_1;
}
