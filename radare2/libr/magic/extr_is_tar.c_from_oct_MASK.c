
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(int VAR_0, const char *VAR_1) {
 int VAR_2 = 0;
 while (FUNC_1 ((ut8)*VAR_1)) {
  VAR_1++;
  if (--VAR_0 <= 0) {
   return -1;
  }
 }
 while (VAR_0 > 0 && FUNC_0(*VAR_1)) {
  VAR_2 = (VAR_2 << 3) | (*VAR_1++ - '0');
  --VAR_0;
 }
 if (VAR_0 > 0 && *VAR_1 && !FUNC_1 ((ut8)*VAR_1)) {
  return -1;
 }
 return VAR_2;
}
