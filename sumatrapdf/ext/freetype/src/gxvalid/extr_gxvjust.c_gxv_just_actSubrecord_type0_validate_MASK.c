
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ subtable_length; } ;
typedef TYPE_1__* GXV_Validator ;
typedef scalar_t__ FT_UShort ;
typedef scalar_t__ FT_ULong ;
typedef scalar_t__ FT_UInt ;
typedef scalar_t__ FT_Fixed ;
typedef scalar_t__ FT_Bytes ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,char*,TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_6( FT_Bytes VAR_1,
                                        FT_Bytes VAR_2,
                                        GXV_Validator VAR_3 )
  {
    FT_Bytes VAR_4 = VAR_1;

    FT_Fixed VAR_5;
    FT_Fixed VAR_6;



    FT_UShort VAR_7;

    FT_UInt VAR_8;


    FUNC_2( 4 + 4 + 2 + 2 );
    VAR_5 = FUNC_0( VAR_4 );
    VAR_6 = FUNC_0( VAR_4 );



    VAR_4 += 2;

    VAR_7 = FUNC_1( VAR_4 );

    if ( VAR_5 >= VAR_6 )
    {
      FUNC_4(( "just table includes invalid range spec:"
                  " lowerLimit(%d) > upperLimit(%d)\n" ));
      FUNC_3( VAR_0 );
    }

    for ( VAR_8 = 0; VAR_8 < VAR_7; VAR_8++ )
    {
      FT_UShort VAR_9;


      FUNC_2( 2 );
      VAR_9 = FUNC_1( VAR_4 );
      FUNC_5( VAR_9, "type0:glyphs", VAR_3 );
    }

    VAR_3->subtable_length = (FT_ULong)( VAR_4 - VAR_1 );
  }
