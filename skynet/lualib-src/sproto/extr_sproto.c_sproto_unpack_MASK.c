
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int const*,int) ;

int
FUNC_1(const void * VAR_0, int VAR_1, void * VAR_2, int VAR_3) {
 const uint8_t * VAR_4 = VAR_0;
 uint8_t * VAR_5 = VAR_2;
 int VAR_6 = 0;
 while (VAR_1 > 0) {
  uint8_t VAR_7 = VAR_4[0];
  --VAR_1;
  ++VAR_4;
  if (VAR_7 == 0xff) {
   int VAR_8;
   if (VAR_1 < 0) {
    return -1;
   }
   VAR_8 = (VAR_4[0] + 1) * 8;
   if (VAR_1 < VAR_8 + 1)
    return -1;
   VAR_1 -= VAR_8 + 1;
   ++VAR_4;
   if (VAR_3 >= VAR_8) {
    FUNC_0(VAR_5, VAR_4, VAR_8);
   }
   VAR_3 -= VAR_8;
   VAR_5 += VAR_8;
   VAR_4 += VAR_8;
   VAR_6 += VAR_8;
  } else {
   int VAR_9;
   for (VAR_9=0;VAR_9<8;VAR_9++) {
    int VAR_10 = (VAR_7 >> VAR_9) & 1;
    if (VAR_10) {
     if (VAR_1 < 0)
      return -1;
     if (VAR_3 > 0) {
      *VAR_5 = *VAR_4;
      --VAR_3;
      ++VAR_5;
     }
     ++VAR_4;
     --VAR_1;
    } else {
     if (VAR_3 > 0) {
      *VAR_5 = 0;
      --VAR_3;
      ++VAR_5;
     }
    }
    ++VAR_6;
   }
  }
 }
 return VAR_6;
}
