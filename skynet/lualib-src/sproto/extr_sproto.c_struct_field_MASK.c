
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int
FUNC_2(const uint8_t * VAR_3, size_t VAR_4) {
 const uint8_t * VAR_5;
 int VAR_6, VAR_7, VAR_8;
 if (VAR_4 < VAR_2)
  return -1;
 VAR_6 = FUNC_1(VAR_3);
 VAR_7 = VAR_1 + VAR_0 * VAR_6;
 if (VAR_4 < VAR_7)
  return -1;
 VAR_5 = VAR_3 + VAR_1;
 VAR_4 -= VAR_7;
 VAR_3 += VAR_7;
 for (VAR_8=0;VAR_8<VAR_6;VAR_8++) {
  int VAR_9= FUNC_1(VAR_5 + VAR_8 * VAR_0);
  uint32_t VAR_10;
  if (VAR_9 != 0)
   continue;
  if (VAR_4 < VAR_2)
   return -1;
  VAR_10 = FUNC_0(VAR_3);
  if (VAR_4 < VAR_2 + VAR_10)
   return -1;
  VAR_3 += VAR_2 + VAR_10;
  VAR_4 -= VAR_2 + VAR_10;
 }

 return VAR_6;
}
