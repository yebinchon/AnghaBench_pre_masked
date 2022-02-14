
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ width; scalar_t__ total; scalar_t__* line; int pitch; } ;
typedef TYPE_1__* PFR_BitWriter ;
typedef scalar_t__ FT_UInt ;
typedef scalar_t__ FT_Int ;
typedef scalar_t__ FT_Byte ;



__attribute__((used)) static void
  FUNC_0( PFR_BitWriter VAR_0,
                             FT_Byte* VAR_1,
                             FT_Byte* VAR_2 )
  {
    FT_Int VAR_3, VAR_4;
    FT_UInt VAR_5, VAR_6;
    FT_UInt VAR_7 = VAR_0->width;
    FT_Byte* VAR_8 = VAR_0->line;
    FT_UInt VAR_9 = 0x80;
    FT_UInt VAR_10 = 0;


    VAR_5 = VAR_0->total;

    VAR_3 = 1;
    VAR_4 = 0;
    VAR_6 = 1;

    for ( ; VAR_5 > 0; VAR_5-- )
    {
      if ( VAR_6 )
      {
        do
        {
          if ( VAR_1 >= VAR_2 )
            break;

          VAR_4 = *VAR_1++;
          VAR_3 = VAR_3 ^ 1;

        } while ( VAR_4 == 0 );
      }

      if ( VAR_3 )
        VAR_10 |= VAR_9;

      VAR_9 >>= 1;

      if ( --VAR_7 <= 0 )
      {
        VAR_8[0] = (FT_Byte)VAR_10;
        VAR_10 = 0;
        VAR_9 = 0x80;
        VAR_7 = VAR_0->width;

        VAR_0->line += VAR_0->pitch;
        VAR_8 = VAR_0->line;
      }
      else if ( VAR_9 == 0 )
      {
        VAR_8[0] = (FT_Byte)VAR_10;
        VAR_10 = 0;
        VAR_9 = 0x80;
        VAR_8++;
      }

      VAR_6 = ( --VAR_4 <= 0 );
    }

    if ( VAR_9 != 0x80 )
      VAR_8[0] = (FT_Byte) VAR_10;
  }
