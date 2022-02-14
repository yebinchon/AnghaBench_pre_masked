
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 () ;

unsigned long FUNC_1(unsigned long *VAR_3, unsigned long VAR_4, unsigned long VAR_5, int* VAR_6) {
 unsigned long VAR_7 = VAR_5 >> VAR_4;
 VAR_7 = VAR_7 & (VAR_2 - 1);
 if (!VAR_3[VAR_7]){
  *VAR_6 = 1;
  unsigned long VAR_8 = FUNC_0();
  unsigned long VAR_9 = VAR_8 | VAR_0;
  VAR_3[VAR_7] = VAR_9;
  return VAR_8;
 } else {
  *VAR_6 = 0;
 }
 return VAR_3[VAR_7] & VAR_1;
}
