
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(int VAR_2) {
 VAR_1 |= (1<<5);
 VAR_0 &= ~(1<<6);
 VAR_0 |= (1<<0);
 switch(VAR_2) {
  case 0:
   VAR_1 &= ~(1<<5);
   break;
  case 1:
   VAR_0 |= (1<<6);
   break;
  case 2:
   VAR_0 &= ~(1<<0);
   break;
 }
}
