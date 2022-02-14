
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Bytes ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void
  FUNC_5( FT_Bytes VAR_1,
                           OTV_Validator VAR_2 )
  {
    FT_Bytes VAR_3 = VAR_1;
    FT_UInt VAR_4;


    FUNC_2( "BaseValues" );

    FUNC_1( 4 );

    VAR_3 += 2;
    VAR_4 = FUNC_0( VAR_3 );

    FUNC_3(( " (BaseCoordCount = %d)\n", VAR_4 ));

    FUNC_1( VAR_4 * 2 );


    for ( ; VAR_4 > 0; VAR_4-- )
      FUNC_4( VAR_1 + FUNC_0( VAR_3 ), VAR_2 );

    VAR_0;
  }
