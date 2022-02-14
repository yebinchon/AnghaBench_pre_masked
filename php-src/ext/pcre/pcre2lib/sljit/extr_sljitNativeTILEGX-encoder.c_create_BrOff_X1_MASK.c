
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tilegx_bundle_bits ;



__attribute__((used)) static __inline tilegx_bundle_bits
FUNC_0(int VAR_0)
{
  const unsigned int VAR_1 = (unsigned int)VAR_0;
  return (((tilegx_bundle_bits)(VAR_1 & 0x0000003f)) << 31) |
         (((tilegx_bundle_bits)(VAR_1 & 0x0001ffc0)) << 37);
}
