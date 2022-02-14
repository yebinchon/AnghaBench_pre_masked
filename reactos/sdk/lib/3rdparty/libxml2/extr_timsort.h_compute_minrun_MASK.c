
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const,int) ;

__attribute__((used)) static __inline int FUNC_2(const uint64_t VAR_0) {
  const int VAR_1 = 64 - FUNC_0(VAR_0);
  const int VAR_2 = FUNC_1(VAR_1, 6) - 6;
  const int VAR_3 = VAR_0 >> VAR_2;
  const uint64_t VAR_4 = (1ULL << VAR_2) - 1;

  if (VAR_4 & VAR_0) {
    return VAR_3 + 1;
  }

  return VAR_3;
}
