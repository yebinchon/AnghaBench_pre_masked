
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static int
FUNC_0(const uint8_t *VAR_0, uint8_t * VAR_1, int VAR_2, int VAR_3) {
 uint8_t VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6;
 uint8_t * VAR_7 = VAR_1;
 ++VAR_1;
 --VAR_2;
 if (VAR_2 < 0)
  VAR_7 = ((void*)0);

 for (VAR_6=0;VAR_6<8;VAR_6++) {
  if (VAR_0[VAR_6] != 0) {
   VAR_5++;
   VAR_4 |= 1<<VAR_6;
   if (VAR_2 > 0) {
    *VAR_1 = VAR_0[VAR_6];
    ++VAR_1;
    --VAR_2;
   }
  }
 }
 if ((VAR_5 == 7 || VAR_5 == 6) && VAR_3 > 0) {
  VAR_5 = 8;
 }
 if (VAR_5 == 8) {
  if (VAR_3 > 0) {
   return 8;
  } else {
   return 10;
  }
 }
 if (VAR_7) {
  *VAR_7 = VAR_4;
 }
 return VAR_5 + 1;
}
