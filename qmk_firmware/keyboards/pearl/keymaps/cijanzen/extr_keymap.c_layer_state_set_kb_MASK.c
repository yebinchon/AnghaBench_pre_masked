
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

uint32_t FUNC_0(uint32_t VAR_4)
{
  if (VAR_4 & (1<<1)) {
    VAR_3 |= (1 << VAR_0);
  } else if (VAR_4 & (1<<2)) {

    if (VAR_4 & (1<<4)) {
      VAR_3 |= (1 << VAR_0);
      VAR_3 |= (1 << VAR_1);
      VAR_3 |= (1 << VAR_2);
    } else {
      VAR_3 &= ~(1 << VAR_0);
      VAR_3 |= (1 << VAR_1);
      VAR_3 &= ~(1 << VAR_2);
    }
  } else if (VAR_4 & (1<<3)) {
    VAR_3 |= (1 << VAR_2);
  } else if (VAR_4 & (1<<4)) {
    VAR_3 |= (1 << VAR_0);
    VAR_3 |= (1 << VAR_1);
    VAR_3 |= (1 << VAR_2);
  } else {
    VAR_3 &= ~(1 << VAR_0);
    VAR_3 &= ~(1 << VAR_1);
    VAR_3 &= ~(1 << VAR_2);
  }

  return VAR_4;
}
