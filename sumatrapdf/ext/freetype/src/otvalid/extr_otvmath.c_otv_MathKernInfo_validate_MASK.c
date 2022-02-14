
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Int ;
typedef scalar_t__ FT_Bytes ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (scalar_t__,int ) ;

__attribute__((used)) static void
  FUNC_8( FT_Bytes VAR_3,
                             OTV_Validator VAR_4 )
  {
    FT_Bytes VAR_5 = VAR_3;
    FT_UInt VAR_6, VAR_7, VAR_8, VAR_9;

    FUNC_4( VAR_0 );
    FUNC_4( VAR_1 );


    FUNC_2( "MathKernInfo" );

    FUNC_1( 4 );

    FUNC_3( VAR_0 );
    VAR_8 = FUNC_0( VAR_5 );

    FUNC_1( 8 * VAR_8 );
    VAR_9 = 4 + 8 * VAR_8;

    FUNC_5( VAR_0 );
    FUNC_6( VAR_3 + VAR_0, VAR_4, (FT_Int)VAR_8 );

    for ( VAR_6 = 0; VAR_6 < VAR_8; VAR_6++ )
    {
      for ( VAR_7 = 0; VAR_7 < 4; VAR_7++ )
      {
        FUNC_3( VAR_1 );
        FUNC_5( VAR_1 );
        if ( VAR_1 )
          FUNC_7( VAR_3 + VAR_1, VAR_4 );
      }
    }

    VAR_2;
  }
