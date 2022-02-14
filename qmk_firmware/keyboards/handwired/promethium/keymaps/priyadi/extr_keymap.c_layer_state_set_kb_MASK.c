
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint32_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;

uint32_t FUNC_0(uint32_t VAR_7)
{

  if ((VAR_7 & ((1UL<<VAR_5) | (1UL<<VAR_2))) == ((1UL<<VAR_5) | (1UL<<VAR_2))) {
    VAR_7 |= (1UL<<VAR_6);
  } else {
    VAR_7 &= ~(1UL<<VAR_6);
  }


  if (
    (VAR_7 & ((1UL<<VAR_1) | (1UL<<VAR_4))) == ((1UL<<VAR_1) | (1UL<<VAR_4))
    || (VAR_7 & ((1UL<<VAR_1) | (1UL<<VAR_3))) == ((1UL<<VAR_1) | (1UL<<VAR_3))
  ) {
    VAR_7 |= (1UL<<VAR_0);
  } else {
    VAR_7 &= ~(1UL<<VAR_0);
  }
  return VAR_7;
}
