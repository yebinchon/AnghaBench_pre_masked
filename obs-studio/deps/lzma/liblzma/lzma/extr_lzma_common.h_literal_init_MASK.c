
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int probability ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(probability (*VAR_2)[VAR_0],
  uint32_t VAR_3, uint32_t VAR_4)
{
 FUNC_0(VAR_3 + VAR_4 <= VAR_1);

 const uint32_t VAR_5 = 1U << (VAR_3 + VAR_4);

 for (uint32_t VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6)
  for (uint32_t VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7)
   FUNC_1(VAR_2[VAR_6][VAR_7]);

 return;
}
