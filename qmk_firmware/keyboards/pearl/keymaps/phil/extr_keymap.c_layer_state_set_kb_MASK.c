
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

uint32_t FUNC_0(uint32_t VAR_7) {
  if (VAR_7 & (1<<VAR_5)){
    VAR_4 &= ~(1 << VAR_1);
  } else {
    VAR_4 |= (1 << VAR_1);
  }

  if (VAR_7 & (1<<VAR_6)){
    VAR_4 &= ~(1 << VAR_2);
  }
  else{
    VAR_4 |= (1 << VAR_2);
  }

  if (VAR_7 & (1<<VAR_0)){
    VAR_4 &= ~(1 << VAR_3);
  }
  else{
    VAR_4 |= (1 << VAR_3);
  }
    return VAR_7;
}
