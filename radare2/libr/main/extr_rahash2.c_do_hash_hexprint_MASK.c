
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const ut8 *VAR_0, int VAR_1, int VAR_2, int VAR_3) {
 int VAR_4;
 if (VAR_2) {
  for (VAR_4 = VAR_1 - 1; VAR_4 >= 0; VAR_4--) {
   FUNC_0 ("%02x", VAR_0[VAR_4]);
  }
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   FUNC_0 ("%02x", VAR_0[VAR_4]);
  }
 }
 if (VAR_3 != 'j') {
  FUNC_0 ("\n");
 }
}
