
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
ULONG
FUNC_0(ULONG VAR_0, ULONG VAR_1, ULONG VAR_2, ULONG VAR_3)
{
  ULONG VAR_4;
  ULONG VAR_5 = 0;
  ULONG VAR_6;
static const ULONG VAR_7[16] =
    {
      0x55555555 ,
      0x555555AA ,
      0x5555AA55 ,
      0x5555AAAA ,
      0x55AA5555 ,
      0x55AA55AA ,
      0x55AAAA55 ,
      0x55AAAAAA ,
      0xAA555555 ,
      0xAA5555AA ,
      0xAA55AA55 ,
      0xAA55AAAA ,
      0xAAAA5555 ,
      0xAAAA55AA ,
      0xAAAAAA55 ,
      0xAAAAAAAA ,
    };
  static const ULONG VAR_8[16] =
    {
      0x33333333 ,
      0x333333CC ,
      0x3333CC33 ,
      0x3333CCCC ,
      0x33CC3333 ,
      0x33CC33CC ,
      0x33CCCC33 ,
      0x33CCCCCC ,
      0xCC333333 ,
      0xCC3333CC ,
      0xCC33CC33 ,
      0xCC33CCCC ,
      0xCCCC3333 ,
      0xCCCC33CC ,
      0xCCCCCC33 ,
      0xCCCCCCCC ,
    };
  static const ULONG VAR_9[16] =
    {
      0x0F0F0F0F ,
      0x0F0F0FF0 ,
      0x0F0FF00F ,
      0x0F0FF0F0 ,
      0x0FF00F0F ,
      0x0FF00FF0 ,
      0x0FF0F00F ,
      0x0FF0F0F0 ,
      0xF00F0F0F ,
      0xF00F0FF0 ,
      0xF00FF00F ,
      0xF00FF0F0 ,
      0xF0F00F0F ,
      0xF0F00FF0 ,
      0xF0F0F00F ,
      0xF0F0F0F0 ,
    };

    VAR_0 &=0xFF;
    switch(VAR_0)
    {


        case 139: return(VAR_1);
        case 143: return(0);
        case 137: return(~(VAR_1 | VAR_2));
        case 138: return(~VAR_2);
        case 131: return((~VAR_1) & VAR_2);
        case 142: return(~VAR_1);
        case 135: return(VAR_1 ^ VAR_3);
        case 130: return(VAR_1 ^ VAR_2);
        case 133: return(VAR_1 & VAR_2);
        case 140: return(VAR_1 | (~VAR_2));
        case 129: return(VAR_1 | VAR_2);
        case 141: return(VAR_2 & VAR_3);
        case 132: return(VAR_2);
        case 136: return(VAR_3);
        case 134: return(VAR_1 | (~VAR_2) | VAR_3);
        case 128: return(0xFFFFFFFF);
    }


  VAR_0 |= (VAR_0 << 24) | (VAR_0 << 16) | (VAR_0 << 8);

  VAR_5 = 0;
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
  {
    VAR_4 = VAR_0 & VAR_7[VAR_1 & 0xF] & VAR_8[VAR_2 & 0xF] & VAR_9[VAR_3 & 0xF];
    VAR_5 |= (((VAR_4 & 0xFF000000) ? 0x8 : 0x0) | ((VAR_4 & 0x00FF0000) ? 0x4 : 0x0) |
    ((VAR_4 & 0x0000FF00) ? 0x2 : 0x0) | ((VAR_4 & 0x000000FF) ? 0x1 : 0x0)) << (VAR_6 * 4);
    VAR_1 >>= 4;
    VAR_2 >>= 4;
    VAR_3 >>= 4;
  }
  return(VAR_5);
}
