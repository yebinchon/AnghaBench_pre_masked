
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int CLzmaProb ;


 scalar_t__ FUNC_0 (int const,int) ;

__attribute__((used)) static UInt32 FUNC_1(const CLzmaProb *VAR_0, UInt32 VAR_1, UInt32 *VAR_2)
{
  UInt32 VAR_3 = 0;
  VAR_1 |= 0x100;
  do
  {
    VAR_3 += FUNC_0(VAR_0[VAR_1 >> 8], (VAR_1 >> 7) & 1);
    VAR_1 <<= 1;
  }
  while (VAR_1 < 0x10000);
  return VAR_3;
}
