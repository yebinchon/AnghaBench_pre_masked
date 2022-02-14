
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 () ;

uint8_t FUNC_1(uint8_t VAR_10) {
  VAR_0 = (1<<VAR_3) | (1<<VAR_2) | (1<<VAR_4);

  FUNC_0();


  if ( (VAR_9 != VAR_8) && (VAR_9 != VAR_7))
    return 1;

  VAR_1 = VAR_10;
  VAR_0 = (1<<VAR_3) | (1<<VAR_2);

  FUNC_0();

  if ( (VAR_9 != VAR_6) && (VAR_9 != VAR_5) )
    return 1;
  else
    return 0;
}
