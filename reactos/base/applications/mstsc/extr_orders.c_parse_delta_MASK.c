
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;



__attribute__((used)) static int
FUNC_0(uint8 * VAR_0, int *VAR_1)
{
 int VAR_2 = VAR_0[(*VAR_1)++];
 int VAR_3 = VAR_2 & 0x80;

 if (VAR_2 & 0x40)
  VAR_2 |= ~0x3f;
 else
  VAR_2 &= 0x3f;

 if (VAR_3)
  VAR_2 = (VAR_2 << 8) | VAR_0[(*VAR_1)++];

 return VAR_2;
}
