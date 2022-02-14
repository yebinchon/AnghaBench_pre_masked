
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1 (int VAR_0, int VAR_1, int VAR_2) {
 int VAR_3 = 8;
 int VAR_4 = 0;
 int VAR_5 = -1;
 int VAR_6, VAR_7 = 1;
 int VAR_8[][3] = {
  { 0x00,0x00,0x00 },
  { 0xd0,0x10,0x10 },
  { 0x10,0xe0,0x10 },
  { 0xf7,0xf5,0x3a },
  { 0x10,0x10,0xf0 },
  { 0xfb,0x3d,0xf8 },
  { 0x10,0xf0,0xf0 },
  { 0xf0,0xf0,0xf0 },
 };

 VAR_0 /= VAR_7; VAR_0 *= VAR_7;
 VAR_1 /= VAR_7; VAR_1 *= VAR_7;
 VAR_2 /= VAR_7; VAR_2 *= VAR_7;

 if (VAR_0<30 && VAR_1<30 && VAR_2<30) return 0;
 if (VAR_0>200&& VAR_1>200&& VAR_2>200) return 7;
 VAR_5 = -1;
 for (VAR_6 = 0; VAR_6<VAR_3; VAR_6++) {
  int VAR_9 =
     FUNC_0 (VAR_8[VAR_6][0]-VAR_0, VAR_0)
   + FUNC_0 (VAR_8[VAR_6][1]-VAR_1, VAR_1)
   + FUNC_0 (VAR_8[VAR_6][2]-VAR_2, VAR_2);
  if (VAR_5 == -1 || VAR_9 < VAR_5) {
   VAR_5 = VAR_9;
   VAR_4 = VAR_6;
  }
 }
 return VAR_4;
}
