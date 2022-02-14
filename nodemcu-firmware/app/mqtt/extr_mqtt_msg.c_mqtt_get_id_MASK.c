
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;

uint16_t FUNC_2(uint8_t* VAR_0, uint16_t VAR_1)
{
  if(VAR_1 < 1)
    return 0;

  switch(FUNC_1(VAR_0))
  {
    case 133:
    {
      int VAR_2;
      int VAR_3;

      if(FUNC_0(VAR_0) <= 0)
        return 0;

      for(VAR_2 = 1; VAR_2 < VAR_1; ++VAR_2)
      {
        if((VAR_0[VAR_2] & 0x80) == 0)
        {
          ++VAR_2;
          break;
        }
      }

      if(VAR_2 + 2 > VAR_1)
        return 0;
      VAR_3 = VAR_0[VAR_2++] << 8;
      VAR_3 |= VAR_0[VAR_2++];

      if(VAR_2 + VAR_3 > VAR_1)
        return 0;
      VAR_2 += VAR_3;

      if(VAR_2 + 2 > VAR_1)
        return 0;

      return (VAR_0[VAR_2] << 8) | VAR_0[VAR_2 + 1];
    }
    case 135:
    case 132:
    case 131:
    case 134:
    case 130:
    case 128:
    case 129:
    {


      if(VAR_1 >= 4 && (VAR_0[1] & 0x80) == 0)
        return (VAR_0[2] << 8) | VAR_0[3];
      else
        return 0;
    }

    default:
      return 0;
  }
}
