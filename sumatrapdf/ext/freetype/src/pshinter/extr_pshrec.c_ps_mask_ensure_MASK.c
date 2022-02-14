
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_bits; int bytes; } ;
typedef TYPE_1__* PS_Mask ;
typedef int FT_UInt ;
typedef int FT_Memory ;
typedef int FT_Error ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static FT_Error
  FUNC_2( PS_Mask VAR_1,
                  FT_UInt VAR_2,
                  FT_Memory VAR_3 )
  {
    FT_UInt VAR_4 = ( VAR_1->max_bits + 7 ) >> 3;
    FT_UInt VAR_5 = ( VAR_2 + 7 ) >> 3;
    FT_Error VAR_6 = VAR_0;


    if ( VAR_5 > VAR_4 )
    {
      VAR_5 = FUNC_0( VAR_5, 8 );
      if ( !FUNC_1( VAR_1->bytes, VAR_4, VAR_5 ) )
        VAR_1->max_bits = VAR_5 * 8;
    }
    return VAR_6;
  }
