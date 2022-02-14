
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,unsigned long long*,int,size_t) ;

size_t FUNC_2(size_t VAR_3) {
  static int VAR_4 = -1;
  if (VAR_4 == -1) {
    VAR_4 = FUNC_0("/proc/self/pagemap", VAR_1);
    if (VAR_4 < 0) {
      VAR_2 = VAR_0;
      return 0;
    }
  }
  uint64_t VAR_5;
  int VAR_6 = FUNC_1(VAR_4, &VAR_5, 8, (VAR_3 / 0x1000) * 8);
  if (VAR_6 != 8) {
    VAR_2 = VAR_0;
    return 0;
  }
  uint64_t VAR_7 = VAR_5 & ((1ULL << 54) - 1);
  if (VAR_7 == 0) {
    VAR_2 = VAR_0;
    return 0;
  }
  return VAR_7 * 0x1000 + VAR_3 % 0x1000;
}
