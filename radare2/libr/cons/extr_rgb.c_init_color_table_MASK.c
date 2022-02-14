
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0() {
 int VAR_2, VAR_3, VAR_4, VAR_5;

 VAR_0[0] = 0x000000;
 VAR_0[1] = 0x800000;
 VAR_0[2] = 0x008000;
 VAR_0[3] = 0x808000;
 VAR_0[4] = 0x000080;
 VAR_0[5] = 0x800080;
 VAR_0[6] = 0x008080;
 VAR_0[7] = 0xc0c0c0;
 VAR_0[8] = 0x808080;
 VAR_0[9] = 0xff0000;
 VAR_0[10] = 0x00ff00;
 VAR_0[11] = 0xffff00;
 VAR_0[12] = 0x0000ff;
 VAR_0[13] = 0xff00ff;
 VAR_0[14] = 0x00ffff;
 VAR_0[15] = 0xffffff;

 for (VAR_2 = 0; VAR_2 < 216; VAR_2++) {
  VAR_3 = VAR_1[(VAR_2 / 36) % 6];
  VAR_4 = VAR_1[(VAR_2 / 6) % 6];
  VAR_5 = VAR_1[VAR_2 % 6];
  VAR_0[VAR_2 + 16] = ((VAR_3 << 16) & 0xffffff) +
   ((VAR_4 << 8) & 0xffff) + (VAR_5 & 0xff);
 }

 for (VAR_2 = 0; VAR_2 < 24; VAR_2++) {
  VAR_3 = 8 + (VAR_2 * 10);
  VAR_0[VAR_2 + 232] = ((VAR_3 << 16) & 0xffffff) +
   ((VAR_3 << 8) & 0xffff) + (VAR_3 & 0xff);
 }
}
