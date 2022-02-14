
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int ut32 ;
typedef int drxt ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(drxt *VAR_3, int VAR_4, ut64 VAR_5, int VAR_6, int VAR_7, int VAR_8) {
 ut32 VAR_9 = VAR_3[VAR_0];
 if (VAR_4 < 0 || VAR_4 >= VAR_1) {
  FUNC_4 ("Invalid DRX index (0-%d)\n", VAR_1 - 1);
  return 0;
 }
 switch (VAR_7) {
 case 1: VAR_7 = 0; break;
 case 2: VAR_7 = 1; break;
 case 4: VAR_7 = 3; break;
 default:
  VAR_7 = 0;
 }
 switch (VAR_6) {
 case 1: VAR_6 = 0; break;
 case 2: VAR_6 = 1 << 2; break;
 case 4: VAR_6 = 3 << 2; break;
 case 8: VAR_6 = 2 << 2; break;
 case -1:
 {
  FUNC_0 (VAR_9, VAR_4);
  VAR_9 &= VAR_2;
  VAR_3[VAR_0] = VAR_9;
  VAR_3[VAR_4] = 0;
  return 1;
 }
 default:
  FUNC_4 ("Invalid DRX length (%d) must be 1, 2, 4, 8 bytes\n", VAR_6);
  return 0;
 }
 FUNC_3 (VAR_9, VAR_4, VAR_6 | VAR_7);
 if (VAR_8) {
  FUNC_1 (VAR_9, VAR_4);

 } else {
  FUNC_2 (VAR_9, VAR_4);

 }
 VAR_9 &= VAR_2;
 VAR_3[VAR_4] = VAR_5;

 VAR_3[VAR_0] = VAR_9;

 return 1;
}
