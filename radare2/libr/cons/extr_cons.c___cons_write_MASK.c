
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,unsigned int const) ;

__attribute__((used)) static inline void FUNC_1(const char *VAR_0, int VAR_1) {
 const unsigned int VAR_2 = 64 * 1024;
 unsigned int VAR_3;
 for (VAR_3 = 0; (VAR_3 + VAR_2) < VAR_1; VAR_3 += VAR_2) {
  FUNC_0 (VAR_0 + VAR_3, VAR_2);
 }
 if (VAR_3 < VAR_1) {
  FUNC_0 (VAR_0 + VAR_3, VAR_1 - VAR_3);
 }
}
