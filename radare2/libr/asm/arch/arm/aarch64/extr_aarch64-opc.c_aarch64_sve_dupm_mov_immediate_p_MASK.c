
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int bfd_boolean ;


 int VAR_0 ;

bfd_boolean
FUNC_0 (uint64_t VAR_1, int VAR_2)
{
  int64_t VAR_3 = VAR_1;
  uint64_t VAR_4 = (uint64_t) -1 << (VAR_2 * 4) << (VAR_2 * 4);

  if ((VAR_1 & ~VAR_4) != VAR_1 && (VAR_1 | VAR_4) != VAR_1)
    return VAR_0;
  if (VAR_2 <= 4 || (uint32_t) VAR_1 == (uint32_t) (VAR_1 >> 32))
    {
      VAR_3 = (int32_t) VAR_1;
      if (VAR_2 <= 2 || (uint16_t) VAR_1 == (uint16_t) (VAR_1 >> 16))
 {
   VAR_3 = (int16_t) VAR_1;
   if (VAR_2 == 1 || (uint8_t) VAR_1 == (uint8_t) (VAR_1 >> 8))
     return VAR_0;
 }
    }
  if ((VAR_3 & 0xff) == 0)
    VAR_3 /= 256;
  return VAR_3 < -128 || VAR_3 >= 128;
}
