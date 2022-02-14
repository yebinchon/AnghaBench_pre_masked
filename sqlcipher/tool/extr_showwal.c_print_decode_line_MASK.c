
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
  int VAR_3,
  const char *VAR_4
){
  int VAR_5, VAR_6;
  int VAR_7 = VAR_0[VAR_1];
  char VAR_8[100];
  FUNC_1(VAR_8, " %03x: %02x", VAR_1, VAR_0[VAR_1]);
  VAR_5 = (int)FUNC_2(VAR_8);
  for(VAR_6=1; VAR_6<4; VAR_6++){
    if( VAR_6>=VAR_2 ){
      FUNC_1(&VAR_8[VAR_5], "   ");
    }else{
      FUNC_1(&VAR_8[VAR_5], " %02x", VAR_0[VAR_1+VAR_6]);
      VAR_7 = VAR_7*256 + VAR_0[VAR_1+VAR_6];
    }
    VAR_5 += (int)FUNC_2(&VAR_8[VAR_5]);
  }
  if( VAR_3 ){
    FUNC_1(&VAR_8[VAR_5], "  0x%08x", VAR_7);
  }else{
    FUNC_1(&VAR_8[VAR_5], "   %9d", VAR_7);
  }
  FUNC_0("%s  %s\n", VAR_8, VAR_4);
}
