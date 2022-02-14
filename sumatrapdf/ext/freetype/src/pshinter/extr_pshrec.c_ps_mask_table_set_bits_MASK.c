
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_bits; int* bytes; } ;
typedef int PS_Mask_Table ;
typedef TYPE_1__* PS_Mask ;
typedef int FT_UInt ;
typedef int FT_Memory ;
typedef int FT_Int ;
typedef scalar_t__ FT_Error ;
typedef int FT_Byte ;


 scalar_t__ FUNC_0 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__**) ;

__attribute__((used)) static FT_Error
  FUNC_2( PS_Mask_Table VAR_0,
                          const FT_Byte* VAR_1,
                          FT_UInt VAR_2,
                          FT_UInt VAR_3,
                          FT_Memory VAR_4 )
  {
    FT_Error VAR_5;
    PS_Mask VAR_6;


    VAR_5 = FUNC_1( VAR_0, VAR_4, &VAR_6 );
    if ( VAR_5 )
      goto Exit;

    VAR_5 = FUNC_0( VAR_6, VAR_3, VAR_4 );
    if ( VAR_5 )
      goto Exit;

    VAR_6->num_bits = VAR_3;


    {
      FT_Byte* VAR_7 = (FT_Byte*)VAR_1 + ( VAR_2 >> 3 );
      FT_Int VAR_8 = 0x80 >> ( VAR_2 & 7 );
      FT_Byte* VAR_9 = VAR_6->bytes;
      FT_Int VAR_10 = 0x80;
      FT_Int VAR_11;


      for ( ; VAR_3 > 0; VAR_3-- )
      {
        VAR_11 = VAR_9[0] & ~VAR_10;

        if ( VAR_7[0] & VAR_8 )
          VAR_11 |= VAR_10;

        VAR_9[0] = (FT_Byte)VAR_11;

        VAR_8 >>= 1;
        if ( VAR_8 == 0 )
        {
          VAR_7++;
          VAR_8 = 0x80;
        }

        VAR_10 >>= 1;
        if ( VAR_10 == 0 )
        {
          VAR_9++;
          VAR_10 = 0x80;
        }
      }
    }

  Exit:
    return VAR_5;
  }
