
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(UInt32 *VAR_4)
{
  UInt32 VAR_5;
  for (VAR_5 = (1 << VAR_3) / 2; VAR_5 < VAR_0; VAR_5 += (1 << VAR_3))
  {
    const int VAR_6 = VAR_2;
    UInt32 VAR_7 = VAR_5;
    UInt32 VAR_8 = 0;
    int VAR_9;
    for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
    {
      VAR_7 = VAR_7 * VAR_7;
      VAR_8 <<= 1;
      while (VAR_7 >= ((UInt32)1 << 16))
      {
        VAR_7 >>= 1;
        VAR_8++;
      }
    }
    VAR_4[VAR_5 >> VAR_3] = ((VAR_1 << VAR_6) - 15 - VAR_8);
  }
}
