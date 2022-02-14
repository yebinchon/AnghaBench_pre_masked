
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbuf ;
typedef int const byte ;


 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*) ;

int FUNC_4(vbuf *VAR_0, const byte *VAR_1, int VAR_2) {
  char VAR_3[10];
  int VAR_4, VAR_5;

  while (VAR_2) {
    VAR_3[0]= 0;
    for (VAR_4=0; VAR_4<VAR_2; VAR_4++) {
      VAR_5= VAR_1[VAR_4];
      if (VAR_5 <= ' ' || VAR_5 >= 127) {
 FUNC_2(VAR_3,"\\%03o",VAR_5);
 break;
      } else if (!FUNC_1(VAR_5)) {
 FUNC_2(VAR_3,"\\%c",VAR_5);
 break;
      }
    }
    if (!FUNC_0(VAR_0,VAR_1,VAR_4) || !FUNC_0(VAR_0,(byte*)VAR_3,(int) FUNC_3(VAR_3)))
      return 0;
    if (VAR_4<VAR_2) VAR_4++;
    VAR_1+= VAR_4;
    VAR_2-= VAR_4;
  }
  return 1;
}
