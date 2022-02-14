
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int CLzmaProb ;


 scalar_t__ FUNC_0 (int const,int) ;

__attribute__((used)) static UInt32 FUNC_1(const CLzmaProb *VAR_0, int VAR_1, UInt32 VAR_2, UInt32 *VAR_3)
{
  UInt32 VAR_4 = 0;
  VAR_2 |= (1 << VAR_1);
  while (VAR_2 != 1)
  {
    VAR_4 += FUNC_0(VAR_0[VAR_2 >> 1], VAR_2 & 1);
    VAR_2 >>= 1;
  }
  return VAR_4;
}
