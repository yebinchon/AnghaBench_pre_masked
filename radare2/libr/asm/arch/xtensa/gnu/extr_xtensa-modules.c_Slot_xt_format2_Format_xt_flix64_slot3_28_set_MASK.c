
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* xtensa_insnbuf ;



__attribute__((used)) static void
FUNC_0 (xtensa_insnbuf VAR_0,
           const xtensa_insnbuf VAR_1)
{
  VAR_0[0] = (VAR_0[0] & ~0xf0000000) | ((VAR_1[0] & 0xf) << 28);
  VAR_0[1] = (VAR_0[1] & ~0xfffffff) | ((VAR_1[0] & 0xfffffff0) >> 4);
  VAR_0[1] = (VAR_0[1] & ~0x70000000) | ((VAR_1[1] & 0x7) << 28);
}
