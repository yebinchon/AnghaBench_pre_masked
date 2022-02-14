
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int ULONG ;



__attribute__((used)) static
inline
USHORT
FUNC_0(USHORT VAR_0, USHORT VAR_1)
{
  ULONG VAR_2 = VAR_0 >> 1;

  VAR_2 |= (((VAR_0 ^ VAR_2) ^ VAR_1)) << 7;

  return VAR_2;
}
