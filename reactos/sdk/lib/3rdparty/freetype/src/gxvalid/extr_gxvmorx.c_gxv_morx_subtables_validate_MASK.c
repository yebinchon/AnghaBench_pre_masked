
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int subtable_length; } ;
typedef TYPE_1__* GXV_Validator ;
typedef int (* GXV_Validate_Func ) (scalar_t__,scalar_t__,TYPE_1__*) ;
typedef scalar_t__ FT_UShort ;
typedef int FT_ULong ;
typedef scalar_t__ FT_Bytes ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,TYPE_1__*) ;
 int FUNC_5 (scalar_t__,scalar_t__,TYPE_1__*) ;
 int FUNC_6 (scalar_t__,scalar_t__,TYPE_1__*) ;
 int FUNC_7 (scalar_t__,scalar_t__,TYPE_1__*) ;
 int FUNC_8 (scalar_t__,scalar_t__,TYPE_1__*) ;
 int FUNC_9 (scalar_t__,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_10( FT_Bytes VAR_2,
                               FT_Bytes VAR_3,
                               FT_UShort VAR_4,
                               GXV_Validator VAR_5 )
  {
    FT_Bytes VAR_6 = VAR_2;

    GXV_Validate_Func VAR_7[] =
    {
      FUNC_5,
      FUNC_6,
      FUNC_7,
      ((void*)0),
      FUNC_8,
      FUNC_9,

    };

    FT_UShort VAR_8;


    FUNC_2( "subtables in a chain" );

    for ( VAR_8 = 0; VAR_8 < VAR_4; VAR_8++ )
    {
      GXV_Validate_Func VAR_9;

      FT_ULong VAR_10;
      FT_ULong VAR_11;



      FT_ULong VAR_12;
      FT_ULong VAR_13;


      FUNC_1( 4 + 4 + 4 );
      VAR_10 = FUNC_0( VAR_6 );
      VAR_11 = FUNC_0( VAR_6 );



      VAR_6 += 4;


      FUNC_3(( "validating chain subtable %d/%d (%d bytes)\n",
                  VAR_8 + 1, VAR_4, VAR_10 ));

      VAR_12 = VAR_11 & 0x0007;
      VAR_13 = VAR_10 - ( 4 + 4 + 4 );
      FUNC_1( VAR_13 );


      FUNC_4( (FT_UShort)( ( VAR_11 >> 16 ) | VAR_11 ),
                                  VAR_5 );
      if ( VAR_12 > 5 )
        VAR_0;

      VAR_9 = VAR_7[VAR_12];
      if ( !VAR_9 )
        FUNC_3(( "morx type %d is reserved\n", VAR_12 ));

      VAR_9( VAR_6, VAR_6 + VAR_13, VAR_5 );


      VAR_6 += VAR_13;
    }

    VAR_5->subtable_length = (FT_ULong)( VAR_6 - VAR_2 );

    VAR_1;
  }
