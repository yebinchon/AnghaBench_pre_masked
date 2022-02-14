
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int insn_t ;



__attribute__((used)) static inline unsigned int FUNC_0 (insn_t VAR_0)
{
  if ((VAR_0 & 0x3) != 0x3)
    return 2;
  if ((VAR_0 & 0x1f) != 0x1f)
    return 4;
  if ((VAR_0 & 0x3f) == 0x1f)
    return 6;
  if ((VAR_0 & 0x7f) == 0x3f)
    return 8;

  return 2;
}
