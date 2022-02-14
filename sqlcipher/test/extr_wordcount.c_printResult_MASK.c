
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 char* VAR_0 ;

__attribute__((used)) static int FUNC_1(void *VAR_1, int VAR_2, char **VAR_3, char **VAR_4){
  int VAR_5;
  FUNC_0("%s", VAR_0);
  for(VAR_5=0; VAR_5<VAR_2; VAR_5++){
    FUNC_0(" %s", VAR_3[VAR_5] ? VAR_3[VAR_5] : "(null)");
  }
  FUNC_0("\n");
  return 0;
}
