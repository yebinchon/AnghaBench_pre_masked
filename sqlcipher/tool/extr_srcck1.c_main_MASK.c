
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int VAR_0 ;

int FUNC_4(int VAR_1, char **VAR_2){
  char *VAR_3;
  unsigned int VAR_4 = 0;
  if( VAR_1!=2 ){
    FUNC_1(VAR_0, "Usage: %s FILENAME\n", VAR_2[0]);
    return 1;
  }
  VAR_3 = FUNC_3(VAR_2[1]);
  VAR_4 = FUNC_0(VAR_3);
  FUNC_2(VAR_3);
  if( VAR_4 ){
    FUNC_1(VAR_0, "Found %u undesirable side-effects\n", VAR_4);
    return 1;
  }
  return 0;
}
