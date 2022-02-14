
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SdbKv ;


 char* FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1) {
 const char* VAR_2 = FUNC_0 ((const SdbKv *)VAR_0);
 const char* VAR_3 = FUNC_0 ((const SdbKv *)VAR_1);
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;
 while (VAR_2[VAR_4] >= '0' && VAR_2[VAR_4] <= '9') {
  VAR_4++;
 }
 while (VAR_3[VAR_5] >= '0' && VAR_3[VAR_5] <= '9') {
  VAR_5++;
 }
 if (!VAR_4) {
  return 1;
 }
 if (!VAR_5) {
  return -1;
 }
 VAR_4--;
 VAR_5--;
 if (VAR_4 > VAR_5) {
  return 1;
 }
 if (VAR_5 > VAR_4) {
  return -1;
 }
 while (VAR_6 <= VAR_4) {
  if (VAR_2[VAR_6] < VAR_3[VAR_6]) {
   return -1;
  }
  if (VAR_2[VAR_6] > VAR_3[VAR_6]) {
   return 1;
  }
  VAR_6++;
 }
 for (; VAR_2[VAR_4] && VAR_3[VAR_4]; VAR_4++) {
  if (VAR_2[VAR_4] > VAR_3[VAR_4]) {
   return 1;
  }
  if (VAR_2[VAR_4] < VAR_3[VAR_4]) {
   return -1;
  }
 }
 if (!VAR_2[VAR_4] && VAR_3[VAR_4]) {
  return -1;
 }
 if (!VAR_3[VAR_4] && VAR_2[VAR_4]) {
  return 1;
 }
 return 0;
}
