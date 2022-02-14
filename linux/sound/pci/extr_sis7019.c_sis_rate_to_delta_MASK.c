
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(unsigned int VAR_0)
{
 u32 VAR_1;
 if (VAR_0 == 44100)
  VAR_1 = 0xeb3;
 else if (VAR_0 == 8000)
  VAR_1 = 0x2ab;
 else if (VAR_0 == 48000)
  VAR_1 = 0x1000;
 else
  VAR_1 = (((VAR_0 << 12) + 24000) / 48000) & 0x0000ffff;
 return VAR_1;
}
