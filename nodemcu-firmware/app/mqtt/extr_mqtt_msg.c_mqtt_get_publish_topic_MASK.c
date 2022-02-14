
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



const char* FUNC_0(uint8_t* VAR_0, uint16_t* VAR_1)
{
  int VAR_2;
  int VAR_3 = 0;
  int VAR_4;

  for(VAR_2 = 1; VAR_2 < *VAR_1; ++VAR_2)
  {
    VAR_3 += (VAR_0[VAR_2] & 0x7f) << (7 * (VAR_2 -1));
    if((VAR_0[VAR_2] & 0x80) == 0)
    {
      ++VAR_2;
      break;
    }
  }
  VAR_3 += VAR_2;

  if(VAR_2 + 2 > *VAR_1)
    return ((void*)0);
  VAR_4 = VAR_0[VAR_2++] << 8;
  VAR_4 |= VAR_0[VAR_2++];

  if(VAR_2 + VAR_4 > *VAR_1)
    return ((void*)0);

  *VAR_1 = VAR_4;
  return (const char*)(VAR_0 + VAR_2);
}
