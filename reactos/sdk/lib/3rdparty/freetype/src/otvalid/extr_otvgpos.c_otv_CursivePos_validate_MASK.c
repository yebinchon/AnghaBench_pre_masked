
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Int ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ,int ) ;

__attribute__((used)) static void
  FUNC_9( FT_Bytes VAR_4,
                           OTV_Validator VAR_5 )
  {
    FT_Bytes VAR_6 = VAR_4;
    FT_UInt VAR_7;


    FUNC_2( "CursivePos" );

    FUNC_1( 2 );
    VAR_7 = FUNC_0( VAR_6 );

    FUNC_6(( " (format %d)\n", VAR_7 ));

    switch ( VAR_7 )
    {
    case 1:
      {
        FT_UInt VAR_8;
        FT_UInt VAR_9, VAR_10;

        FUNC_4( VAR_0 );
        FUNC_4( VAR_1 );


        FUNC_1( 4 );
        VAR_9 = FUNC_0( VAR_6 );
        VAR_10 = FUNC_0( VAR_6 );

        FUNC_6(( " (EntryExitCount = %d)\n", VAR_10 ));

        FUNC_8( VAR_4 + VAR_9,
                               VAR_5,
                               (FT_Int)VAR_10 );

        FUNC_1( VAR_10 * 4 );

        VAR_8 = VAR_10 * 4 + 4;


        for ( ; VAR_10 > 0; VAR_10-- )
        {
          FUNC_3( VAR_0 );
          FUNC_3( VAR_1 );

          FUNC_5( VAR_0 );
          if ( VAR_0 )
            FUNC_7( VAR_4 + VAR_0, VAR_5 );

          FUNC_5( VAR_1 );
          if ( VAR_1 )
            FUNC_7( VAR_4 + VAR_1, VAR_5 );
        }
      }
      break;

    default:
      VAR_2;
    }

    VAR_3;
  }
