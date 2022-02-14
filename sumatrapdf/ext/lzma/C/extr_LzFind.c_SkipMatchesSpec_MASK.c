
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int CLzRef ;
typedef scalar_t__ Byte ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(UInt32 VAR_1, UInt32 VAR_2, UInt32 VAR_3, const Byte *VAR_4, CLzRef *VAR_5,
    UInt32 VAR_6, UInt32 VAR_7, UInt32 VAR_8)
{
  CLzRef *VAR_9 = VAR_5 + (VAR_6 << 1) + 1;
  CLzRef *VAR_10 = VAR_5 + (VAR_6 << 1);
  UInt32 VAR_11 = 0, VAR_12 = 0;
  for (;;)
  {
    UInt32 VAR_13 = VAR_3 - VAR_2;
    if (VAR_8-- == 0 || VAR_13 >= VAR_7)
    {
      *VAR_9 = *VAR_10 = VAR_0;
      return;
    }
    {
      CLzRef *VAR_14 = VAR_5 + ((VAR_6 - VAR_13 + ((VAR_13 > VAR_6) ? VAR_7 : 0)) << 1);
      const Byte *VAR_15 = VAR_4 - VAR_13;
      UInt32 VAR_16 = (VAR_11 < VAR_12 ? VAR_11 : VAR_12);
      if (VAR_15[VAR_16] == VAR_4[VAR_16])
      {
        while (++VAR_16 != VAR_1)
          if (VAR_15[VAR_16] != VAR_4[VAR_16])
            break;
        {
          if (VAR_16 == VAR_1)
          {
            *VAR_10 = VAR_14[0];
            *VAR_9 = VAR_14[1];
            return;
          }
        }
      }
      if (VAR_15[VAR_16] < VAR_4[VAR_16])
      {
        *VAR_10 = VAR_2;
        VAR_10 = VAR_14 + 1;
        VAR_2 = *VAR_10;
        VAR_12 = VAR_16;
      }
      else
      {
        *VAR_9 = VAR_2;
        VAR_9 = VAR_14;
        VAR_2 = *VAR_9;
        VAR_11 = VAR_16;
      }
    }
  }
}
