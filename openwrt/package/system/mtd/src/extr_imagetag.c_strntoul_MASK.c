
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 char* FUNC_0 (size_t,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static uint32_t FUNC_4(char *VAR_0, char **VAR_1, int VAR_2, size_t VAR_3) {
  char *VAR_4;
  uint32_t VAR_5 = 0;

  VAR_4 = FUNC_0(VAR_3 + 1, sizeof(char));
  if (VAR_4) {
 FUNC_2(VAR_4, VAR_0, VAR_3);
 VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_2);
 FUNC_1(VAR_4);
  }
  return VAR_5;
}
