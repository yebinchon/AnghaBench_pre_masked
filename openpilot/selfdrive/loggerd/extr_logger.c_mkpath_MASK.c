
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static int FUNC_3(char* VAR_2) {
  FUNC_0(VAR_2 && *VAR_2);
  char* VAR_3;
  for (VAR_3=FUNC_2(VAR_2+1, '/'); VAR_3; VAR_3=FUNC_2(VAR_3+1, '/')) {
    *VAR_3 = '\0';
    if (FUNC_1(VAR_2, 0777)==-1) {
      if (VAR_1 != VAR_0) {
        *VAR_3 = '/';
        return -1;
      }
    }
    *VAR_3 = '/';
  }
  return 0;
}
