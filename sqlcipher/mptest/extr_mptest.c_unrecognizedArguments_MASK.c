
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(
  const char *VAR_1,
  int VAR_2,
  char **VAR_3
){
  int VAR_4;
  FUNC_1(VAR_0,"%s: unrecognized arguments:", VAR_1);
  for(VAR_4=0; VAR_4<VAR_2; VAR_4++){
    FUNC_1(VAR_0," %s", VAR_3[VAR_4]);
  }
  FUNC_1(VAR_0,"\n");
  FUNC_0(1);
}
