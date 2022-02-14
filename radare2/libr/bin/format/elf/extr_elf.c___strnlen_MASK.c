
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static inline int FUNC_1(const char *VAR_0, int VAR_1) {
 int VAR_2 = 0;
 while (FUNC_0 (*VAR_0) && --VAR_1) {
  if (((ut8)*VAR_0) == 0xff) {
   break;
  }
  VAR_0++;
  VAR_2++;
 }
 return VAR_2 + 1;
}
