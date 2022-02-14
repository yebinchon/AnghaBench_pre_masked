
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char,int,int*) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0, int VAR_1, int VAR_2, int *VAR_3, int VAR_4) {
 int VAR_5, VAR_6;
 char VAR_7[5];
 if (VAR_0 == 0 && VAR_1 == 4) {
  FUNC_0('z', VAR_2, VAR_3);
 }
 else if (VAR_0 == 0x20202020 && VAR_1 == 4 && VAR_4) {
  FUNC_0('y', VAR_2, VAR_3);
 }
 else {
  for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {
   VAR_7[VAR_5] = VAR_0 % 85 + '!';
   VAR_0 /= 85;
  }
  VAR_6 = 4 - VAR_1;
  for (VAR_5 = 4; VAR_5 >= VAR_6; VAR_5--) {
   FUNC_0(VAR_7[VAR_5], VAR_2, VAR_3);
  }
 }
}
