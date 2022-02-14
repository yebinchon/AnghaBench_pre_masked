
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_bits; int* bytes; } ;
typedef TYPE_1__* PS_Mask ;
typedef int FT_UInt ;
typedef int FT_Byte ;



__attribute__((used)) static void
  FUNC_0( PS_Mask VAR_0,
                     FT_UInt VAR_1 )
  {
    FT_Byte* VAR_2;


    if ( VAR_1 >= VAR_0->num_bits )
      return;

    VAR_2 = VAR_0->bytes + ( VAR_1 >> 3 );
    VAR_2[0] = (FT_Byte)( VAR_2[0] & ~( 0x80 >> ( VAR_1 & 7 ) ) );
  }
