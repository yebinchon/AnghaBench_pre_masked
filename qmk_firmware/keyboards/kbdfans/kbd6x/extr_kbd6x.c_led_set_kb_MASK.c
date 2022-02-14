
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

void FUNC_1(uint8_t VAR_3) {
 if (VAR_3 & (1 << VAR_2)) {
  VAR_0 |= (1 << 6);
  VAR_1 &= ~(1 << 6);
 } else {
  VAR_0 &= ~(1 << 6);
  VAR_1 &= ~(1 << 6);
 }

 FUNC_0(VAR_3);
}
