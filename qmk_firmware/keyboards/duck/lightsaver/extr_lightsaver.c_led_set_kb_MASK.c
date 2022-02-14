
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;

void FUNC_2(uint8_t VAR_4) {
  bool VAR_5[8] = {
    VAR_4 & (1<<VAR_0),
    VAR_4 & (1<<VAR_2),
    VAR_4 & (1<<VAR_1),
    VAR_3 & (1<<1),
    VAR_3 & (1<<2),
    VAR_3 & (1<<3),
    VAR_3 & (1<<4),
    VAR_3 & (1<<5)
  };
  FUNC_0(VAR_5);

  FUNC_1(VAR_4);
}
