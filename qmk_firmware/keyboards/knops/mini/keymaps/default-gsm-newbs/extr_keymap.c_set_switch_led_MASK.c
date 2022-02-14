
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(int VAR_5, bool VAR_6) {
 if(VAR_6) {
  switch(VAR_5) {
   case 1:
    VAR_3 |= (1<<7);
    break;
   case 2:
    if((VAR_0 & (1 << 7)) != 0) {
     VAR_2 |= (1<<6);
    } else {
     VAR_2 |= (1<<7);
    }
    break;
   case 3:
    VAR_3 |= (1<<4);
    break;
   case 4:
    VAR_4 |= (1<<6);
    break;
   case 5:
    VAR_1 |= (1<<4);
    break;
   case 6:
    VAR_3 |= (1<<6);
    break;
  }
 } else {
  switch(VAR_5) {
   case 1:
    VAR_3 &= ~(1<<7);
    break;
   case 2:
    if((VAR_0 & (1 << 7)) != 0) {
     VAR_2 &= ~(1<<6);
    } else {
     VAR_2 &= ~(1<<7);
    }
    break;
   case 3:
    VAR_3 &= ~(1<<4);
    break;
   case 4:
    VAR_4 &= ~(1<<6);
    break;
   case 5:
    VAR_1 &= ~(1<<4);
    break;
   case 6:
    VAR_3 &= ~(1<<6);
    break;
  }
 }
}
