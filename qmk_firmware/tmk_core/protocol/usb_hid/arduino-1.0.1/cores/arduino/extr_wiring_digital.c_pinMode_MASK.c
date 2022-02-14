
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__* FUNC_3 (scalar_t__) ;
 scalar_t__* FUNC_4 (scalar_t__) ;

void FUNC_5(uint8_t VAR_4, uint8_t VAR_5)
{
 uint8_t VAR_6 = FUNC_1(VAR_4);
 uint8_t VAR_7 = FUNC_2(VAR_4);
 volatile uint8_t *VAR_8, *VAR_9;

 if (VAR_7 == VAR_2) return;


 VAR_8 = FUNC_3(VAR_7);
 VAR_9 = FUNC_4(VAR_7);

 if (VAR_5 == VAR_0) {
  uint8_t VAR_10 = VAR_3;
                FUNC_0();
  *VAR_8 &= ~VAR_6;
  *VAR_9 &= ~VAR_6;
  VAR_3 = VAR_10;
 } else if (VAR_5 == VAR_1) {
  uint8_t VAR_11 = VAR_3;
                FUNC_0();
  *VAR_8 &= ~VAR_6;
  *VAR_9 |= VAR_6;
  VAR_3 = VAR_11;
 } else {
  uint8_t VAR_12 = VAR_3;
                FUNC_0();
  *VAR_8 |= VAR_6;
  VAR_3 = VAR_12;
 }
}
