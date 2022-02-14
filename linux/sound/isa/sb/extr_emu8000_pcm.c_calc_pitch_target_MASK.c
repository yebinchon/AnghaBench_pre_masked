
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
 int VAR_1 = 1 << (VAR_0 >> 12);
 if (VAR_0 & 0x800) VAR_1 += (VAR_1 * 0x102e) / 0x2710;
 if (VAR_0 & 0x400) VAR_1 += (VAR_1 * 0x764) / 0x2710;
 if (VAR_0 & 0x200) VAR_1 += (VAR_1 * 0x389) / 0x2710;
 VAR_1 += (VAR_1 >> 1);
 if (VAR_1 > 0xffff) VAR_1 = 0xffff;
 return VAR_1;
}
