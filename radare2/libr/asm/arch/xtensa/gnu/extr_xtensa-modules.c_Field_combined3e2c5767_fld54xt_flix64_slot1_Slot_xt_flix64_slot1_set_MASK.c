
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* xtensa_insnbuf ;
typedef int uint32 ;



__attribute__((used)) static void
FUNC_0 (xtensa_insnbuf VAR_0, uint32 VAR_1)
{
  uint32 VAR_2;
  VAR_2 = (VAR_1 << 26) >> 26;
  VAR_0[0] = (VAR_0[0] & ~0x3f) | (VAR_2 << 0);
  VAR_2 = (VAR_1 << 21) >> 27;
  VAR_0[0] = (VAR_0[0] & ~0xf80) | (VAR_2 << 7);
}
