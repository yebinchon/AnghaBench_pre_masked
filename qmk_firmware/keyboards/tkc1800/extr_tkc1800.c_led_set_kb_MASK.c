
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(uint8_t VAR_4) {

 if (VAR_4 & (1<<VAR_2)) {

  VAR_0 |= (1<<2);
    } else {

     VAR_0 &= ~(1<<2);
    }
 if (VAR_4 & (1<<VAR_1)) {

  VAR_0 |= (1<<3);
    } else {

  VAR_0 &= ~(1<<3);
    }
 if (VAR_4 & (1<<VAR_3)) {

     VAR_0 |= (1<<4);
    } else {

  VAR_0 &= ~(1<<4);
    }
}
