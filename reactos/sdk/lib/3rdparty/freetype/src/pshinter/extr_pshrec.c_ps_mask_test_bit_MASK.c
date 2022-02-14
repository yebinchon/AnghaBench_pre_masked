
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_bits; int* bytes; } ;
typedef TYPE_1__* PS_Mask ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Int ;



__attribute__((used)) static FT_Int
  FUNC_0( PS_Mask VAR_0,
                    FT_Int VAR_1 )
  {
    if ( (FT_UInt)VAR_1 >= VAR_0->num_bits )
      return 0;

    return VAR_0->bytes[VAR_1 >> 3] & ( 0x80 >> ( VAR_1 & 7 ) );
  }
