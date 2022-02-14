
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;


 int FUNC_0 (char) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static bool FUNC_4 (ut8 *VAR_0, char *VAR_1) {
 int VAR_2;
 ut64 VAR_3;
 if (FUNC_2 (VAR_1) < 6) {
  return 0;
 }
 if (VAR_1[4] == ',') {
  if ((VAR_2 = FUNC_0 (VAR_1[3])) == -1) {
   return 0;
  }
  VAR_0[0] = 0x6 + (ut8)(VAR_2 * 8);
  VAR_3 = FUNC_1 (((void*)0), VAR_1 + 5);
  VAR_0[1] = (ut8)(VAR_3 & 0xff);
  return 1;
 } else if (!FUNC_3 (VAR_1 + 3, "[hl],", 5)) {
  VAR_0[0] = 0x36;
  VAR_3 = FUNC_1 (((void*)0), VAR_1 + 8);
  VAR_0[1] = (ut8)(VAR_3 & 0xff);
  return 1;
 }
 return 0;
}
