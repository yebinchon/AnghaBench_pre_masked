
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;


 int FUNC_0 (char) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int ,char*,char*,int) ;
 char* FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static bool FUNC_6 (ut8 *VAR_0, const int VAR_1, char *VAR_2, ut8 VAR_3) {
 ut64 VAR_4;
 int VAR_5;
 char *VAR_6, *VAR_7;
 if ((VAR_5 = FUNC_4 (VAR_2)) < VAR_1) {
  return 0;
 }
 FUNC_2 (VAR_2, (ut32)VAR_5, "[ ", "[", 1);
 FUNC_2 (VAR_2, (ut32)VAR_5, " ]", "]", 1);
 FUNC_2 (VAR_2, (ut32)VAR_5, ", ", ",", 1);
 VAR_6 = FUNC_3 (VAR_2, (int)' ');
 if (!VAR_6) {
  return 0;
 }
 VAR_7 = FUNC_3 (VAR_6, (int)',');
 if (!VAR_7) {
  return 0;
 }
 VAR_7[0] = '\0';
 if (VAR_6[1] == '\0' || VAR_7[1] == '\0') {
  VAR_7[0] = ',';
  return 0;
 }
 VAR_4 = FUNC_1 (((void*)0), &VAR_6[1]);
 VAR_7[0] = ',';
 if (VAR_4 > 7) {
  return 0;
 }
 VAR_0[0] = VAR_3 + (ut8)VAR_4 * 8;
 VAR_5 = FUNC_0 (VAR_7[1]);
 if (VAR_5 != -1) {
  VAR_0[0] |= (ut8)VAR_5;
  return 1;
 }
 if (FUNC_4 (VAR_7 + 1) < 4) {
  return 0;
 }
 if (!FUNC_5 (VAR_7 + 1, "[hl]", 4)) {
  VAR_0[0] |= 6;
  return 1;
 }
 return 0;
}
