
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int ut32 ;


 int FUNC_0 (char) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,char*,char) ;
 int FUNC_3 (char*,int ,char*,char*,int) ;
 int VAR_0 ;
 int const FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int FUNC_6 (ut8 *VAR_1, const int VAR_2, char *VAR_3, ut8 VAR_4, ut8 VAR_5) {
 int VAR_6;
 ut64 VAR_7;
 if (FUNC_4 (VAR_3) < VAR_2) {
  return 0;
 }
 VAR_1[0] = VAR_4;
 char *VAR_8 = VAR_3 + VAR_2 - 1;
 VAR_6 = FUNC_4 (VAR_8);
 FUNC_3 (VAR_8, (ut32)VAR_6, "[ ", "[", 1);
 FUNC_3 (VAR_8, (ut32)VAR_6, " ]", "]", 1);
 FUNC_2 (VAR_0, VAR_3, ' ');
 VAR_6 = FUNC_0 (VAR_3[VAR_2 - 1]);
 if (VAR_6 != -1) {
  VAR_1[0] |= (ut8)VAR_6;
 } else if (!FUNC_5 (VAR_3 + VAR_2 - 1, "[hl]", 4)) {
  VAR_1[0] |= 6;
 } else {
  VAR_1[0] = VAR_5;
  VAR_7 = FUNC_1 (((void*)0), VAR_3 + VAR_2 - 1);
  VAR_1[1] = (ut8)(VAR_7 & 0xff);
  return 2;
 }
 return 1;
}
