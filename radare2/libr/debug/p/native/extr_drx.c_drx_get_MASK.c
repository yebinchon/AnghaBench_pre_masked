
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int drxt ;


 size_t VAR_0 ;




 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

ut64 FUNC_3(drxt *VAR_1, int VAR_2, int *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6) {
 int VAR_7 = FUNC_0 (VAR_1[VAR_0], VAR_2);
 if (VAR_5) {
  *VAR_5 = FUNC_2 (VAR_1[7], VAR_2);
 }
 if (VAR_4) {
  switch (VAR_7 & 0xA) {
  case 131: *VAR_4 = 1; break;
  case 130: *VAR_4 = 2; break;
  case 129: *VAR_4 = 4; break;
  case 128: *VAR_4 = 8; break;
  default: *VAR_4 = 0; break;
  }
 }
 if (VAR_6) {
  *VAR_6 = FUNC_1 (VAR_1[7], VAR_2);
 }
 if (VAR_3) {
  *VAR_3 = VAR_7 & 0x3;
 }
 return (ut64) VAR_1[VAR_2];
}
