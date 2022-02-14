
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;

uint8_t FUNC_3(uint8_t VAR_3, uint8_t VAR_4)
{
  if (VAR_2 == 0) {
    return 0;
  }
  uint8_t VAR_5;
  VAR_5 = FUNC_0(VAR_0 | VAR_1);
  if (VAR_5) goto stop;
  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5) goto stop;
  VAR_5 = FUNC_2(VAR_4);
 stop:
  FUNC_1();
  return VAR_5;
}
