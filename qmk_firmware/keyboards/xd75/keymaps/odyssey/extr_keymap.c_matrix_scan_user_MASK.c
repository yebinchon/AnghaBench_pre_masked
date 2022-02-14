
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LED_TYPE ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int FUNC_1 (int,int,int,int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

void FUNC_2(void) {
  if (VAR_3==0) return;
  if (VAR_3==1) {
    if (VAR_2 == 0) {
      VAR_2 = VAR_5;
      for(int VAR_7 = 0; VAR_7<6; VAR_7++) {
        FUNC_1(42*((VAR_6+VAR_7)%6), 255, 255, (LED_TYPE *)&VAR_1[VAR_7]);
      }
      FUNC_0();
      VAR_6++; VAR_6 = VAR_6 % 6;
    }
  } else if (VAR_3==2) {
    if (VAR_2 == 0) {
      VAR_2 = VAR_5;
      VAR_0 = (VAR_0 + 1) % 36;
      for (int VAR_8 = 0; VAR_8<6; VAR_8++) {
        if (VAR_8==VAR_6)
          FUNC_1(42*(((VAR_0-1)/6)%6), 255, 255, (LED_TYPE *)&VAR_1[(VAR_4 ? VAR_6 : 5-VAR_6)]);
        else
          FUNC_1(0, 0, 0, (LED_TYPE *)&VAR_1[VAR_4 ? VAR_8 : 5-VAR_8]);
      }
      FUNC_0();
      VAR_6++; VAR_6 = VAR_6 % 6;
      if (VAR_6 == 0) VAR_4 = !VAR_4;
    }
  }
  VAR_2--;
}
