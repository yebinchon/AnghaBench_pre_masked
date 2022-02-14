
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int subtable_length; } ;
typedef TYPE_1__* GXV_Validator ;
typedef int FT_UShort ;
typedef int FT_ULong ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int,int,TYPE_1__*) ;
 int FUNC_4 (int,int,int ,TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_5( FT_Bytes VAR_2,
                           FT_Bytes VAR_3,
                           GXV_Validator VAR_4 )
  {
    FT_Bytes VAR_5 = VAR_2;



    FT_ULong VAR_6;
    FT_ULong VAR_7;
    FT_ULong VAR_8;


    FUNC_2( "morx chain header" );

    FUNC_1( 4 + 4 + 4 + 4 );



    VAR_5 += 4;

    VAR_6 = FUNC_0( VAR_5 );
    VAR_7 = FUNC_0( VAR_5 );
    VAR_8 = FUNC_0( VAR_5 );


    FUNC_3( VAR_5, VAR_3, VAR_7, VAR_4 );
    VAR_5 += VAR_4->subtable_length;

    if ( VAR_8 >= 0x10000L )
      VAR_0;

    FUNC_4( VAR_5, VAR_2 + VAR_6,
                                 (FT_UShort)VAR_8, VAR_4 );

    VAR_4->subtable_length = VAR_6;



    VAR_1;
  }
