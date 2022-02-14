
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
  FUNC_6( FT_Bytes VAR_5,
                              OTV_Validator VAR_6 )
  {
    FT_Bytes VAR_7 = VAR_5;
    FT_UInt VAR_8;


    FUNC_2( "LigatureSubst" );

    FUNC_1( 2 );
    VAR_8 = FUNC_0( VAR_7 );

    FUNC_5(( " (format %d)\n", VAR_8 ));

    switch ( VAR_8 )
    {
    case 1:
      FUNC_3( VAR_3, VAR_2, VAR_1 );
      FUNC_4( VAR_5, VAR_6 );
      break;

    default:
      VAR_0;
    }

    VAR_4;
  }
