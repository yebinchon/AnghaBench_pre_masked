
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t VAR_10)
{

  switch (VAR_10) {
  case 0:
    VAR_1 |= (1<<VAR_4);
    VAR_9 &= ~(1<<VAR_4);
    break;
  case 1:
    VAR_1 |= (1<<VAR_5);
    VAR_9 &= ~(1<<VAR_5);
    break;
  case 2:
    VAR_1 |= (1<<VAR_6);
    VAR_9 &= ~(1<<VAR_6);
    break;
  case 3:
    VAR_1 |= (1<<VAR_7);
    VAR_9 &= ~(1<<VAR_7);
    break;
  case 4:
    VAR_0 |= (1<<VAR_2);
    VAR_8 &= ~(1<<VAR_2);
    break;
  case 5:
    VAR_0 |= (1<<VAR_3);
    VAR_8 &= ~(1<<VAR_3);
    break;
  }

  FUNC_0(VAR_10);
}
