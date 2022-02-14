
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int readbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void) {
  char VAR_9[512], *VAR_10;
  int VAR_11, VAR_12, VAR_13;

  while ((VAR_11= FUNC_3(0,VAR_9,sizeof(VAR_9))) <= 0) {
    if (VAR_11 == 0) { VAR_8= 1; return; }
    if (VAR_11 == VAR_0) return;
    if (VAR_11 != VAR_1) FUNC_6("read stdin");
  }
  for (VAR_10=VAR_9; VAR_11>0; VAR_11--,VAR_10++) {
    VAR_12= *VAR_10;
    if (VAR_5==-1 && VAR_3 && VAR_12=='[') {
      VAR_2[VAR_6++]= VAR_12;
      FUNC_5();
    } else if (VAR_5==-1 && !VAR_3 && !FUNC_0(VAR_12)) {
      FUNC_2(VAR_12);
      FUNC_5();
    } else if (VAR_5>=0 && VAR_7<3 && VAR_12>='0' && VAR_12<='9' &&
        (VAR_13= VAR_4[VAR_5]*10 + (VAR_12-'0')) <= 255) {
      VAR_4[VAR_5]= VAR_13;
      VAR_2[VAR_6++]= VAR_12;
      VAR_7++;
    } else if (VAR_5>=0 && VAR_5<3 && VAR_7>0 && VAR_12=='.') {
      VAR_4[++VAR_5]= 0;
      VAR_2[VAR_6++]= VAR_12;
      VAR_7= 0;
    } else if (VAR_5==3 && VAR_7>0 && VAR_3 && VAR_12==']') {
      VAR_2[VAR_6++]= VAR_12;
      FUNC_1();
    } else if (VAR_5==3 && VAR_7>0 && !VAR_3 && !FUNC_0(VAR_12)) {
      FUNC_1();
      FUNC_2(VAR_12);
      FUNC_5();
    } else {
      FUNC_4();
      FUNC_2(VAR_12);
      VAR_5= -1;
      if (!VAR_3 && !FUNC_0(VAR_12)) FUNC_5();
    }
  }
}
