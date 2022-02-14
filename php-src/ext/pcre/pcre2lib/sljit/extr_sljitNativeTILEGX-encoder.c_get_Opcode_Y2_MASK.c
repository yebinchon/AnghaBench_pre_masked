
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tilegx_bundle_bits ;



__attribute__((used)) static __inline unsigned int
FUNC_0(tilegx_bundle_bits VAR_0)
{
  return (((VAR_0 >> 26)) & 0x00000001) |
         (((unsigned int)(VAR_0 >> 56)) & 0x00000002);
}
