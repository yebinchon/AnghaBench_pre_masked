
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int subtable_length; } ;
typedef TYPE_1__* GXV_Validator ;
typedef int FT_ULong ;
typedef scalar_t__ FT_Fixed ;
typedef scalar_t__ FT_Bytes ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void
  FUNC_4( FT_Bytes VAR_2,
                                        FT_Bytes VAR_3,
                                        GXV_Validator VAR_4 )
  {
    FT_Bytes VAR_5 = VAR_2;
    FT_ULong VAR_6;
    FT_Fixed VAR_7;
    FT_Fixed VAR_8;
    FT_Fixed VAR_9;


    FUNC_2( 4 + 4 + 4 + 4 );
    VAR_6 = FUNC_1( VAR_5 );
    VAR_7 = FUNC_0( VAR_5 );
    VAR_8 = FUNC_0( VAR_5 );
    VAR_9 = FUNC_0( VAR_5 );

    VAR_4->subtable_length = (FT_ULong)( VAR_5 - VAR_2 );

    if ( VAR_6 != 0x64756374L )
      FUNC_3(( "variantsAxis 0x%08x is non default value",
                   VAR_6 ));

    if ( VAR_7 > VAR_8 )
      FUNC_3(( "type4:minimumLimit 0x%08x > noStretchValue 0x%08x\n",
                  VAR_7, VAR_8 ));
    else if ( VAR_8 > VAR_9 )
      FUNC_3(( "type4:noStretchValue 0x%08x > maximumLimit 0x%08x\n",
                  VAR_8, VAR_9 ));
    else if ( !VAR_1 )
      return;

    VAR_0;
  }
