
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(register uint32_t (*VAR_1)[VAR_0])
{
  register int VAR_2;
  register int VAR_3;

  for (VAR_3 = 0;VAR_3 < 16;++VAR_3) {
    for (VAR_2 = 0;VAR_2 < VAR_0;++VAR_2)
      (*VAR_1)[VAR_2] = (uint32_t)~0;
    ++VAR_1;
  }
}
