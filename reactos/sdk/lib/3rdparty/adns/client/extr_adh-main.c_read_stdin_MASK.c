
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (char*,char,int) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (int ,char*,int) ;
 char* FUNC_4 (char*,int) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(void) {
  int VAR_6, VAR_7;
  char *VAR_8, *VAR_9;

  VAR_6= 0;
  while (!VAR_6 || VAR_5) {
    while (!(VAR_8= FUNC_0(VAR_2,'\n',VAR_5))) {
      if (VAR_5 == VAR_1) {
 VAR_1 += 20; VAR_1 <<= 1;
 VAR_2= FUNC_4(VAR_2,VAR_1);
 if (!VAR_2) FUNC_6("realloc stdin buffer",VAR_3);
      }
      do {
 VAR_7= FUNC_3(0,VAR_2+VAR_5,VAR_1-VAR_5);
      } while (VAR_7 < 0 && VAR_3 == VAR_0);
      if (VAR_7 == 0) {
 if (VAR_5) {

   VAR_2[VAR_5++]= '\n';
   VAR_7= 1;
 } else {
   VAR_4= 0;
   return;
 }
      }
      if (VAR_7 < 0) FUNC_6("read stdin",VAR_3);
      VAR_5 += VAR_7;
    }
    *VAR_8++= 0;
    VAR_9= FUNC_5(VAR_2,' ');
    if (VAR_9) *VAR_9++= 0;
    FUNC_2(VAR_2,0,VAR_9);
    VAR_5 -= (VAR_8-VAR_2);
    FUNC_1(VAR_2,VAR_8,VAR_5);
    VAR_6= 1;
  }
}
