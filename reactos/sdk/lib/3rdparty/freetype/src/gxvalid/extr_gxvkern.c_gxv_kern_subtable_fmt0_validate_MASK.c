
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GXV_Validator ;
typedef int FT_UShort ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int,int*,int*,int ) ;
 int FUNC_3 (int,int,int,int ) ;

__attribute__((used)) static void
  FUNC_4( FT_Bytes VAR_2,
                                   FT_Bytes VAR_3,
                                   GXV_Validator VAR_4 )
  {
    FT_Bytes VAR_5 = VAR_2 + VAR_1;

    FT_UShort VAR_6;
    FT_UShort VAR_7;


    FUNC_1( "kern subtable format 0" );

    VAR_7 = 2 + 2 + 2;
    VAR_6 = 0;


    FUNC_0( 2 + 2 + 2 + 2 );
    FUNC_2( VAR_5, VAR_3, &VAR_7, &VAR_6, VAR_4 );
    VAR_5 += 2 + 2 + 2 + 2;

    FUNC_3( VAR_5, VAR_3, VAR_6, VAR_4 );

    VAR_0;
  }
