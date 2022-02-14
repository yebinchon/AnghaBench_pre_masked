
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int int32_t ;



int32_t FUNC_0(uint8_t* VAR_0, uint16_t VAR_1)
{
  int VAR_2;
  int VAR_3 = 0;

  if(VAR_1 == 1)
    return -1;

  for(VAR_2 = 1; VAR_2 < VAR_1; ++VAR_2)
  {
    VAR_3 += (VAR_0[VAR_2] & 0x7f) << (7 * (VAR_2 - 1));
    if((VAR_0[VAR_2] & 0x80) == 0)
    {
      ++VAR_2;
      break;
    }

    if(VAR_2 == VAR_1)
      return -1;
  }

  VAR_3 += VAR_2;

  return VAR_3;
}
