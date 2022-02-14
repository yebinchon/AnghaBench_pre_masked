
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ,unsigned long,unsigned long) ;

int FUNC_2(unsigned long VAR_3, unsigned long VAR_4) {
 unsigned long VAR_5 = (VAR_4 & 0b111111);
 if ((VAR_5 & 0b111100) == 0b100) {
  unsigned long VAR_6 = FUNC_0();
  if (VAR_6 == 0) {
   return -1;
  }
  FUNC_1(VAR_1, VAR_3 & VAR_0, VAR_6);
  VAR_2++;
  if (VAR_2 > 2){
   return -1;
  }
  return 0;
 }
 return -1;
}
