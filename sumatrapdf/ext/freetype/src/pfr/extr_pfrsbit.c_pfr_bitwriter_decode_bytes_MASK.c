
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int total; scalar_t__* line; int pitch; } ;
typedef TYPE_1__* PFR_BitWriter ;
typedef int FT_UInt ;
typedef scalar_t__ FT_Byte ;



__attribute__((used)) static void
  FUNC_0( PFR_BitWriter VAR_0,
                              FT_Byte* VAR_1,
                              FT_Byte* VAR_2 )
  {
    FT_UInt VAR_3, VAR_4;
    FT_UInt VAR_5 = VAR_0->width;
    FT_Byte* VAR_6 = VAR_0->line;
    FT_UInt VAR_7 = 0x80;
    FT_UInt VAR_8 = 0;
    FT_UInt VAR_9 = 0;


    VAR_3 = (FT_UInt)( VAR_2 - VAR_1 ) * 8;
    if ( VAR_3 > VAR_0->total )
      VAR_3 = VAR_0->total;

    VAR_4 = VAR_3 & 7;

    for ( ; VAR_3 > 0; VAR_3-- )
    {
      if ( ( VAR_3 & 7 ) == VAR_4 )
        VAR_8 = *VAR_1++;

      if ( VAR_8 & 0x80 )
        VAR_9 |= VAR_7;

      VAR_8 <<= 1;
      VAR_7 >>= 1;

      if ( --VAR_5 <= 0 )
      {
        VAR_6[0] = (FT_Byte)VAR_9;
        VAR_5 = VAR_0->width;
        VAR_7 = 0x80;

        VAR_0->line += VAR_0->pitch;
        VAR_6 = VAR_0->line;
        VAR_9 = 0;
      }
      else if ( VAR_7 == 0 )
      {
        VAR_6[0] = (FT_Byte)VAR_9;
        VAR_7 = 0x80;
        VAR_9 = 0;
        VAR_6++;
      }
    }

    if ( VAR_7 != 0x80 )
      VAR_6[0] = (FT_Byte)VAR_9;
  }
