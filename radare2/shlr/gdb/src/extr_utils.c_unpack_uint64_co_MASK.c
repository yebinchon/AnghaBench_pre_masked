
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (char*,int) ;

uint64_t FUNC_1(char *VAR_0, int VAR_1) {
 uint64_t VAR_2 = 0;
 int VAR_3;
 for (VAR_3 = VAR_1 - 2; VAR_3 >= 0; VAR_3 -= 2) {
  VAR_2 |= FUNC_0 (&VAR_0[VAR_3], 2);
  if (VAR_3) {
   VAR_2 <<= 8;
  }
 }
 return VAR_2;
}
