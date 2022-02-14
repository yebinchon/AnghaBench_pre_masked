
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int FUNC_0 (char) ;
 int FUNC_1 (int ,char*,char) ;
 int FUNC_2 (char*,int,char*,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static bool FUNC_5 (ut8 *VAR_1, const int VAR_2, char *VAR_3) {
 int VAR_4;
 FUNC_2 (VAR_3, FUNC_3 (VAR_3), ", ", ",", 1);
 if ((VAR_4 = FUNC_3 (VAR_3)) < VAR_2) {
  return 0;
 }
 FUNC_1 (VAR_0, VAR_3, '\0');
 if (VAR_3[4] == ',') {
  VAR_4 = FUNC_0 (VAR_3[3]);
  if (VAR_4 == (-1)) {
   return 0;
  }
  VAR_1[0] = (ut8)(0x40 + (VAR_4 * 8));
  if ((VAR_4 = FUNC_0 (VAR_3[5])) == (-1)) {
   return 0;
  }
  VAR_1[0] |= (ut8)VAR_4;
 } else if (!FUNC_4 (VAR_3 + 3, "[hl],", 5)) {
  if ((VAR_4 = FUNC_0 (VAR_3[8])) == (-1)) {
   return 0;
  }
  VAR_1[0] = 0x70 | (ut8)VAR_4;
 }
 return 1;
}
