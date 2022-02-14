
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*) ;
 size_t FUNC_3 (char const*) ;

void FUNC_4(const char *VAR_0, const char *VAR_1, int VAR_2) {
  char *VAR_3, *VAR_4;
  if (VAR_2 < 0) {
    VAR_2 = FUNC_3(VAR_0);
    if (FUNC_3(VAR_1) > (size_t) VAR_2) VAR_2 = FUNC_3(VAR_1);
  }
  VAR_3 = FUNC_0(VAR_0, VAR_2);
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  FUNC_2("Expected: %s\nActual  : %s\n", VAR_4, VAR_3);
  FUNC_1(VAR_3);
  FUNC_1(VAR_4);
}
