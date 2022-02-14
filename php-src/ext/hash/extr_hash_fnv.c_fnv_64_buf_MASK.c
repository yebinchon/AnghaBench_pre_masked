
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;

__attribute__((used)) static uint64_t
FUNC_0(void *VAR_1, size_t VAR_2, uint64_t VAR_3, int VAR_4)
{
 unsigned char *VAR_5 = (unsigned char *)VAR_1;
 unsigned char *VAR_6 = VAR_5 + VAR_2;





 if (VAR_4 == 0) {
  while (VAR_5 < VAR_6) {

   VAR_3 *= VAR_0;


   VAR_3 ^= (uint64_t)*VAR_5++;
  }
  } else {
  while (VAR_5 < VAR_6) {

   VAR_3 ^= (uint64_t)*VAR_5++;


   VAR_3 *= VAR_0;
   }
 }


 return VAR_3;
}
