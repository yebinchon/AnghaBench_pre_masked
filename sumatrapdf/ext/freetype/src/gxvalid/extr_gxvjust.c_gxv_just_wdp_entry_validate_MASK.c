
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subtable_length; } ;
typedef TYPE_1__* GXV_Validator ;
typedef int FT_UShort ;
typedef int FT_ULong ;
typedef void* FT_Fixed ;
typedef scalar_t__ FT_Bytes ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
  FUNC_5( FT_Bytes VAR_1,
                               FT_Bytes VAR_2,
                               GXV_Validator VAR_3 )
  {
    FT_Bytes VAR_4 = VAR_1;
    FT_ULong VAR_5;
    FUNC_2( 4 + 4 + 4 + 4 + 4 + 2 + 2 );
    VAR_5 = FUNC_0( VAR_4 );

    VAR_4 += 4 + 4 + 4 + 4 + 2 + 2;
    if ( ( VAR_5 & 0xFFFFFF80UL ) != 0 )
    {
      FUNC_4(( "just table includes non-zero value"
                  " in unused justClass higher bits"
                  " of WidthDeltaPair" ));
      FUNC_3( VAR_0 );
    }

    VAR_3->subtable_length = (FT_ULong)( VAR_4 - VAR_1 );
  }
