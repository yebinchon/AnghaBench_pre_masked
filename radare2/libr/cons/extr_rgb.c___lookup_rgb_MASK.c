
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, int VAR_2, int VAR_3) {
 int VAR_4, VAR_5 = (VAR_1 << 16) + (VAR_2 << 8) + VAR_3;

 for (VAR_4 = 16; VAR_4 < 256; ++VAR_4) {
  if (VAR_0[VAR_4] == VAR_5) {
   return VAR_4;
  }
 }
 return -1;
}
