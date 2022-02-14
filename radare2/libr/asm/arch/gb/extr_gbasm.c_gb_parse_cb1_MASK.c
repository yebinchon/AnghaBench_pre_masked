
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;


 int FUNC_0 (char) ;
 int FUNC_1 (int ,char*,char) ;
 int FUNC_2 (char*,int ,char*,char*,int) ;
 int VAR_0 ;
 int const FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static bool FUNC_5 (ut8 *VAR_1, const int VAR_2, char *VAR_3, ut8 VAR_4) {
 int VAR_5;
 if (FUNC_3 (VAR_3) < VAR_2 || VAR_2 < 1) {
  return 0;
 }
 VAR_1[0] = VAR_4;
 char *VAR_6 = VAR_3 + VAR_2 - 1;
 VAR_5 = FUNC_3 (VAR_6);
 FUNC_2 (VAR_6, (ut32)VAR_5, "[ ", "[", 1);
 FUNC_2 (VAR_6, (ut32)VAR_5, " ]", "]", 1);
 FUNC_1 (VAR_0, VAR_3, ' ');
 VAR_5 = FUNC_0 (VAR_3[VAR_2 - 1]);
 if (VAR_5 != (-1)) {
  VAR_1[0] |= (ut8)VAR_5;
  return 1;
 }
 if (!FUNC_4 (VAR_3, "[hl]", 4)) {
  VAR_1[0] |= 6;
  return 1;
 }
 return 0;
}
