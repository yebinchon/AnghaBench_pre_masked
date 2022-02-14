
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mt19937_state ;
typedef double int32_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline double FUNC_1(mt19937_state *VAR_0) {
  int32_t VAR_1 = FUNC_0(VAR_0) >> 5, VAR_2 = FUNC_0(VAR_0) >> 6;
  return (VAR_1 * 67108864.0 + VAR_2) / 9007199254740992.0;
}
