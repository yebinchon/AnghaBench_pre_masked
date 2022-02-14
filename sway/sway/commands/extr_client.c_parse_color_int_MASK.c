
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char**,int) ;

__attribute__((used)) static bool FUNC_2(char *VAR_0, uint32_t *VAR_1) {
 if (VAR_0[0] != '#') {
  return 0;
 }

 if (FUNC_0(VAR_0) != 7 && FUNC_0(VAR_0) != 9) {
  return 0;
 }

 ++VAR_0;
 char *VAR_2;
 uint32_t VAR_3 = FUNC_1(VAR_0, &VAR_2, 16);

 if (*VAR_2 != '\0') {
  return 0;
 }

 if (FUNC_0(VAR_0) == 6) {

  VAR_3 = (VAR_3 << 8) | 0xff;
 }

 *VAR_1 = VAR_3;
 return 1;
}
