
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;

__attribute__((used)) static inline uint64_t
FUNC_0(uint64_t VAR_1, uint64_t VAR_2) {
 uint64_t VAR_3 = 0;
 while(VAR_2) {
  if(VAR_2&1) {
   uint64_t VAR_4 = VAR_0-VAR_1;
   if ( VAR_3 >= VAR_4) {
    VAR_3 -= VAR_4;
   } else {
    VAR_3 += VAR_1;
   }
  }
  if (VAR_1 >= VAR_0 - VAR_1) {
   VAR_1 = VAR_1 * 2 - VAR_0;
  } else {
   VAR_1 = VAR_1 * 2;
  }
  VAR_2>>=1;
 }
 return VAR_3;
}
