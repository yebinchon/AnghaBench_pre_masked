
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(uint32_t *VAR_0)
{
 size_t VAR_1, VAR_2;

 for (VAR_2 = 0; VAR_2 < 20; VAR_2++) {
  for (VAR_1 = 0; VAR_1 < 20; VAR_1++) {
   uint32_t VAR_3 = 0;
   VAR_3 |= (FUNC_0() % 256);
   VAR_3 |= (FUNC_0() % 256) << 8;
   VAR_3 |= (FUNC_0() % 256) << 16;


   VAR_0[VAR_2 * 20 + VAR_1] = VAR_3;
  }
 }
}
