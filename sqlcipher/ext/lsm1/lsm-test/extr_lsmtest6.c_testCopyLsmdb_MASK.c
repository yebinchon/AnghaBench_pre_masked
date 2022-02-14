
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;

void FUNC_4(const char *VAR_0, const char *VAR_1){
  char *VAR_2 = FUNC_2("%s-log", VAR_0);
  char *VAR_3 = FUNC_2("%s-log", VAR_1);
  char *VAR_4 = FUNC_2("%s-shm", VAR_0);
  char *VAR_5 = FUNC_2("%s-shm", VAR_1);

  FUNC_3(VAR_5);
  FUNC_3(VAR_3);
  FUNC_3(VAR_1);
  FUNC_0(VAR_0, VAR_1, 1);
  FUNC_0(VAR_2, VAR_3, 0);
  FUNC_0(VAR_4, VAR_5, 0);

  FUNC_1(VAR_2); FUNC_1(VAR_3); FUNC_1(VAR_4); FUNC_1(VAR_5);
}
