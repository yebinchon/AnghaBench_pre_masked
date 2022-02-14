
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_bits; int* bytes; } ;
typedef TYPE_1__* PS_Mask ;
typedef int FT_UInt ;
typedef int FT_Memory ;
typedef scalar_t__ FT_Error ;
typedef int FT_Byte ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int,int ) ;

__attribute__((used)) static FT_Error
  FUNC_1( PS_Mask VAR_1,
                   FT_UInt VAR_2,
                   FT_Memory VAR_3 )
  {
    FT_Error VAR_4 = VAR_0;
    FT_Byte* VAR_5;


    if ( VAR_2 >= VAR_1->num_bits )
    {
      VAR_4 = FUNC_0( VAR_1, VAR_2 + 1, VAR_3 );
      if ( VAR_4 )
        goto Exit;

      VAR_1->num_bits = VAR_2 + 1;
    }

    VAR_5 = VAR_1->bytes + ( VAR_2 >> 3 );
    VAR_5[0] = (FT_Byte)( VAR_5[0] | ( 0x80 >> ( VAR_2 & 7 ) ) );

  Exit:
    return VAR_4;
  }
