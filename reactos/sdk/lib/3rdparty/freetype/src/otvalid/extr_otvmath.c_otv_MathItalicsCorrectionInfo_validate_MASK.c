
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OTV_Validator ;
typedef int FT_UInt ;
typedef scalar_t__ FT_Int ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int ,scalar_t__) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void
  FUNC_9( FT_Bytes VAR_3,
                                          OTV_Validator VAR_4,
                                          FT_Int VAR_5 )
  {
    FT_Bytes VAR_6 = VAR_3;
    FT_UInt VAR_7, VAR_8, VAR_9;

    FUNC_5( VAR_0 );
    FUNC_5( VAR_1 );

    FUNC_1( VAR_5 );


    FUNC_3( VAR_5 ? "MathItalicsCorrectionInfo"
                             : "MathTopAccentAttachment" );

    FUNC_2( 4 );

    FUNC_4( VAR_0 );
    VAR_8 = FUNC_0( VAR_6 );

    FUNC_2( 4 * VAR_8 );
    VAR_9 = 4 + 4 * VAR_8;

    FUNC_6( VAR_0 );
    FUNC_7( VAR_3 + VAR_0, VAR_4, (FT_Int)VAR_8 );

    for ( VAR_7 = 0; VAR_7 < VAR_8; VAR_7++ )
    {
      VAR_6 += 2;
      FUNC_4( VAR_1 );
      FUNC_6( VAR_1 );
      if ( VAR_1 )
        FUNC_8( VAR_3 + VAR_1, VAR_4 );
    }

    VAR_2;
  }
