
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline void FUNC_0(uint32_t *VAR_0, uint32_t VAR_1)
{
 size_t VAR_2, VAR_3;

 for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
  for (VAR_2 = 0; VAR_2 < 32; VAR_2++) {
   VAR_0[VAR_3 * 32 + VAR_2] = VAR_1;
  }
 }
}
