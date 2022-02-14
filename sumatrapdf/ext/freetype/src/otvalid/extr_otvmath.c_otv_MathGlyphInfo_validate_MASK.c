
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OTV_Validator ;
typedef scalar_t__ FT_UInt ;
typedef scalar_t__ FT_Bytes ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static void
  FUNC_6( FT_Bytes VAR_3,
                              OTV_Validator VAR_4 )
  {
    FT_Bytes VAR_5 = VAR_3;
    FT_UInt VAR_6, VAR_7;
    FT_UInt VAR_8, VAR_9;


    FUNC_2( "MathGlyphInfo" );

    FUNC_1( 8 );

    VAR_6 = FUNC_0( VAR_5 );
    VAR_7 = FUNC_0( VAR_5 );
    VAR_8 = FUNC_0( VAR_5 );
    VAR_9 = FUNC_0( VAR_5 );

    if ( VAR_6 )
      FUNC_4(
        VAR_3 + VAR_6, VAR_4, VAR_2 );


    if ( VAR_7 )
      FUNC_4(
        VAR_3 + VAR_7, VAR_4, VAR_0 );

    if ( VAR_8 )
    {
      FUNC_2( "ExtendedShapeCoverage" );
      FUNC_3( VAR_3 + VAR_8, VAR_4, -1 );
      VAR_1;
    }

    if ( VAR_9 )
      FUNC_5( VAR_3 + VAR_9, VAR_4 );

    VAR_1;
  }
