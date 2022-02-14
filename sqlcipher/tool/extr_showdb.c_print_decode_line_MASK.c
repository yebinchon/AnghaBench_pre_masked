
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char const*) ;
 int FUNC_1 (char*,char*,...) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(
  unsigned char *VAR_0,
  int VAR_1, int VAR_2,
  const char *VAR_3
){
  int VAR_4, VAR_5;
  int VAR_6 = VAR_0[VAR_1];
  char VAR_7[100];
  FUNC_1(VAR_7, " %03x: %02x", VAR_1, VAR_0[VAR_1]);
  VAR_4 = (int)FUNC_2(VAR_7);
  for(VAR_5=1; VAR_5<4; VAR_5++){
    if( VAR_5>=VAR_2 ){
      FUNC_1(&VAR_7[VAR_4], "   ");
    }else{
      FUNC_1(&VAR_7[VAR_4], " %02x", VAR_0[VAR_1+VAR_5]);
      VAR_6 = VAR_6*256 + VAR_0[VAR_1+VAR_5];
    }
    VAR_4 += (int)FUNC_2(&VAR_7[VAR_4]);
  }
  FUNC_1(&VAR_7[VAR_4], "   %9d", VAR_6);
  FUNC_0("%s  %s\n", VAR_7, VAR_3);
}
