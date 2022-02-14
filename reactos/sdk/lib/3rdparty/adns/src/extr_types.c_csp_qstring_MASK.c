
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vbuf ;
typedef int adns_status ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,unsigned char) ;

__attribute__((used)) static adns_status FUNC_3(vbuf *VAR_2, const char *VAR_3, int VAR_4) {
  unsigned char VAR_5;
  char VAR_6[10];
  int VAR_7;

  FUNC_0("\"");
  for (VAR_7=0; VAR_7<VAR_4; VAR_7++) {
    VAR_5= *VAR_3++;
    if (VAR_5 == '\\') {
      FUNC_0("\\\\");
    } else if (VAR_5 == '"') {
      FUNC_0("\\\"");
    } else if (VAR_5 >= 32 && VAR_5 <= 126) {
      if (!FUNC_1(VAR_2,&VAR_5,1)) VAR_0;
    } else {
      FUNC_2(VAR_6,"\\x%02x",VAR_5);
      FUNC_0(VAR_6);
    }
  }
  FUNC_0("\"");

  return VAR_1;
}
