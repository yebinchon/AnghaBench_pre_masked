
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int subtable_length; } ;
typedef TYPE_1__* GXV_Validator ;
typedef int FT_UShort ;
typedef int FT_ULong ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 int FUNC_7 (int ,int ,TYPE_1__*) ;
 int FUNC_8 (int ,int ,TYPE_1__*) ;
 int FUNC_9 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_10( FT_Bytes VAR_2,
                                  FT_Bytes VAR_3,
                                  GXV_Validator VAR_4 )
  {
    FT_Bytes VAR_5 = VAR_2;
    FT_UShort VAR_6;
    FT_UShort VAR_7;
    FT_ULong VAR_8;


    FUNC_3( "just actSubrecord" );

    FUNC_2( 2 + 2 + 4 );
    VAR_6 = FUNC_1( VAR_5 );
    VAR_7 = FUNC_1( VAR_5 );
    VAR_8 = FUNC_0( VAR_5 );


    if ( ( VAR_6 & 0xFF80 ) != 0 )
      FUNC_4( VAR_0 );

    if ( VAR_7 == 0 )
      FUNC_5( VAR_5, VAR_3, VAR_4 );
    else if ( VAR_7 == 1 )
      FUNC_6( VAR_5, VAR_3, VAR_4 );
    else if ( VAR_7 == 2 )
      FUNC_7( VAR_5, VAR_3, VAR_4 );
    else if ( VAR_7 == 3 )
      ;
    else if ( VAR_7 == 4 )
      FUNC_8( VAR_5, VAR_3, VAR_4 );
    else if ( VAR_7 == 5 )
      FUNC_9( VAR_5, VAR_3, VAR_4 );
    else
      VAR_0;

    VAR_4->subtable_length = VAR_8;

    VAR_1;
  }
