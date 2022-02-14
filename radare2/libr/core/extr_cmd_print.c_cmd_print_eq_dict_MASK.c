
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef int RCore ;


 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static void FUNC_1(RCore *VAR_0, const ut8 *VAR_1, int VAR_2) {
 int VAR_3;
 int VAR_4 = -1;
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;
 bool VAR_8[256] = {0};
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_8[VAR_1[VAR_3]] = 1;
 }
 for (VAR_3 = 0; VAR_3 < 256; VAR_3++) {
  if (VAR_8[VAR_3]) {
   if (VAR_4 == -1) {
    VAR_4 = VAR_3;
   }
   VAR_5 = VAR_3;
   VAR_6++;
  }
 }
 VAR_7 = VAR_5 - VAR_4;
 FUNC_0 ("min:              %d  0x%x\n", VAR_4, VAR_4);
 FUNC_0 ("max:              %d  0x%x\n", VAR_5, VAR_5);
 FUNC_0 ("unique (count):   %d  0x%x\n", VAR_6, VAR_6);
 FUNC_0 ("range (max-min):  %d  0x%x\n", VAR_7, VAR_7);
 FUNC_0 ("size (of block):  %d  0x%x\n", VAR_2, VAR_2);
}
