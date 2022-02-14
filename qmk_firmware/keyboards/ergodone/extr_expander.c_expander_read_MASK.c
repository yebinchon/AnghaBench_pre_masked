
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;

uint8_t FUNC_5(uint8_t VAR_4, uint8_t *VAR_5)
{
  if (VAR_3 == 0) {
    return 0;
  }
  uint8_t VAR_6;
  VAR_6 = FUNC_2(VAR_0 | VAR_2);
  if (VAR_6) goto stop;
  VAR_6 = FUNC_4(VAR_4);
  if (VAR_6) goto stop;
  VAR_6 = FUNC_1(VAR_0 | VAR_1);
  if (VAR_6) goto stop;
  *VAR_5 = FUNC_0();
 stop:
  FUNC_3();
  return VAR_6;
}
