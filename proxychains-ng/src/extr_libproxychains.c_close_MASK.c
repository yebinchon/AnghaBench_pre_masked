
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_0 (int) ;

int FUNC_1(int VAR_7) {
 if(!VAR_4) {
  if(VAR_2>=(sizeof VAR_1/sizeof VAR_1[0])) goto err;
  VAR_1[VAR_2++] = VAR_7;
  VAR_3 = 0;
  return 0;
 }

 if(VAR_7 != VAR_5[0] && VAR_7 != VAR_5[1] &&
    VAR_7 != VAR_6[0] && VAR_7 != VAR_6[1]) {
  return FUNC_0(VAR_7);
 }
 err:
 VAR_3 = VAR_0;
 return -1;
}
