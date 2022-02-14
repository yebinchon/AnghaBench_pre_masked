
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int int32_t ;
typedef unsigned int aarch64_insn ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline int32_t
FUNC_1 (aarch64_insn VAR_0, unsigned VAR_1)
{
  uint32_t VAR_2 = VAR_0;

  FUNC_0 (VAR_1 < 32);
  if ((VAR_0 >> VAR_1) & 0x1)
    {
      uint32_t VAR_3 = (uint32_t)(-1) << VAR_1;
      VAR_2 = VAR_2 | VAR_3;
    }
  return (int32_t) VAR_2;
}
