
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt32 ;
typedef int UInt16 ;
typedef char Byte ;
typedef int Bool ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static Bool FUNC_0(Byte *VAR_3, size_t *VAR_4, const UInt16 *VAR_5, size_t VAR_6)
{
  size_t VAR_7 = 0, VAR_8 = 0;
  for (;;)
  {
    unsigned VAR_9;
    UInt32 VAR_10;
    if (VAR_8 == VAR_6)
    {
      *VAR_4 = VAR_7;
      return VAR_1;
    }
    VAR_10 = VAR_5[VAR_8++];
    if (VAR_10 < 0x80)
    {
      if (VAR_3)
        VAR_3[VAR_7] = (char)VAR_10;
      VAR_7++;
      continue;
    }
    if (VAR_10 >= 0xD800 && VAR_10 < 0xE000)
    {
      UInt32 VAR_11;
      if (VAR_10 >= 0xDC00 || VAR_8 == VAR_6)
        break;
      VAR_11 = VAR_5[VAR_8++];
      if (VAR_11 < 0xDC00 || VAR_11 >= 0xE000)
        break;
      VAR_10 = (((VAR_10 - 0xD800) << 10) | (VAR_11 - 0xDC00)) + 0x10000;
    }
    for (VAR_9 = 1; VAR_9 < 5; VAR_9++)
      if (VAR_10 < (((UInt32)1) << (VAR_9 * 5 + 6)))
        break;
    if (VAR_3)
      VAR_3[VAR_7] = (char)(VAR_2[VAR_9 - 1] + (VAR_10 >> (6 * VAR_9)));
    VAR_7++;
    do
    {
      VAR_9--;
      if (VAR_3)
        VAR_3[VAR_7] = (char)(0x80 + ((VAR_10 >> (6 * VAR_9)) & 0x3F));
      VAR_7++;
    }
    while (VAR_9 != 0);
  }
  *VAR_4 = VAR_7;
  return VAR_0;
}
