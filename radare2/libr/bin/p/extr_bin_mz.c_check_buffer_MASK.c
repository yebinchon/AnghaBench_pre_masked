
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut64 ;
typedef int ut16 ;
typedef int RBuffer ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,int ,int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static bool FUNC_7(RBuffer *VAR_0) {
 FUNC_6 (VAR_0, 0);
 ut64 VAR_1 = FUNC_5 (VAR_0);
 if (VAR_1 <= 0x3d) {
  return 0;
 }


 ut8 VAR_2[2];
 if (FUNC_3 (VAR_0, 0, VAR_2, 2) != 2) {
  return 0;
 }
 if (FUNC_2 (VAR_2, "MZ", 2)) {
  return 0;
 }


 ut16 VAR_3 = FUNC_4 (VAR_0, 0x3c);
 if (VAR_1 > VAR_3 + 2) {
  if (FUNC_1 (VAR_0, VAR_3)) {
   return 0;
  }
 }


 if (!FUNC_0 (VAR_0)) {
  return 0;
 }
 return 1;
}
