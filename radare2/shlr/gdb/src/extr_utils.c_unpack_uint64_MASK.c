
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int ) ;

uint64_t FUNC_1(char *VAR_0, int VAR_1) {
 int VAR_2;
 uint64_t VAR_3 = 0;
 while (VAR_1) {
  VAR_2 = FUNC_0 (*VAR_0++);
  VAR_3 |= VAR_2;
  VAR_1--;
  if (VAR_1) {
   VAR_3 = VAR_3 << 4;
  }
 }
 return VAR_3;
}
