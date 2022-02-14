
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(bool VAR_3){
  FUNC_1();
  if(VAR_1 == 0){
    VAR_1 = 0x1F;
  }
  do {
    if(VAR_3){
      if (VAR_2 == 0){
        VAR_2 = VAR_0 - 1;
      } else{
        VAR_2 = VAR_2 - 1;
      }
    } else {
        VAR_2 = (VAR_2 + 1) % VAR_0;
    }
  } while(((1 << VAR_2) & VAR_1) == 0);
  FUNC_0();
}
