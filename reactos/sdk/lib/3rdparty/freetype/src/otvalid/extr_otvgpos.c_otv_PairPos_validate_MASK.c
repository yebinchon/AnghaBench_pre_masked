
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int extra3; } ;
typedef TYPE_1__* OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (int,TYPE_1__*,int) ;
 int FUNC_6 (int,int,int,TYPE_1__*) ;
 int FUNC_7 (int,int,TYPE_1__*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void
  FUNC_9( FT_Bytes VAR_2,
                        OTV_Validator VAR_3 )
  {
    FT_Bytes VAR_4 = VAR_2;
    FT_UInt VAR_5;


    FUNC_2( "PairPos" );

    FUNC_1( 2 );
    VAR_5 = FUNC_0( VAR_4 );

    FUNC_3(( " (format %d)\n", VAR_5 ));

    switch ( VAR_5 )
    {
    case 1:
      {
        FT_UInt VAR_6, VAR_7, VAR_8, VAR_9;


        FUNC_1( 8 );
        VAR_6 = FUNC_0( VAR_4 );
        VAR_7 = FUNC_0( VAR_4 );
        VAR_8 = FUNC_0( VAR_4 );
        VAR_9 = FUNC_0( VAR_4 );

        FUNC_3(( " (PairSetCount = %d)\n", VAR_9 ));

        FUNC_5( VAR_2 + VAR_6, VAR_3, -1 );

        FUNC_1( VAR_9 * 2 );


        for ( ; VAR_9 > 0; VAR_9-- )
          FUNC_6( VAR_2 + FUNC_0( VAR_4 ),
                                VAR_7, VAR_8, VAR_3 );
      }
      break;

    case 2:
      {
        FT_UInt VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
        FT_UInt VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;


        FUNC_1( 14 );
        VAR_10 = FUNC_0( VAR_4 );
        VAR_11 = FUNC_0( VAR_4 );
        VAR_12 = FUNC_0( VAR_4 );
        VAR_13 = FUNC_0( VAR_4 );
        VAR_14 = FUNC_0( VAR_4 );
        VAR_15 = FUNC_0( VAR_4 );
        VAR_16 = FUNC_0( VAR_4 );

        FUNC_3(( " (ClassCount1 = %d)\n", VAR_15 ));
        FUNC_3(( " (ClassCount2 = %d)\n", VAR_16 ));

        VAR_17 = FUNC_8( VAR_11 );
        VAR_18 = FUNC_8( VAR_12 );

        FUNC_5( VAR_2 + VAR_10, VAR_3, -1 );
        FUNC_4( VAR_2 + VAR_13, VAR_3 );
        FUNC_4( VAR_2 + VAR_14, VAR_3 );

        FUNC_1( VAR_15 * VAR_16 *
                         ( VAR_17 + VAR_18 ) );

        VAR_3->extra3 = VAR_2;


        for ( ; VAR_15 > 0; VAR_15-- )
        {

          for ( VAR_19 = VAR_16; VAR_19 > 0; VAR_19-- )
          {
            if ( VAR_11 )

              FUNC_7( VAR_4, VAR_11, VAR_3 );
            VAR_4 += VAR_17;

            if ( VAR_12 )

              FUNC_7( VAR_4, VAR_12, VAR_3 );
            VAR_4 += VAR_18;
          }
        }
      }
      break;

    default:
      VAR_0;
    }

    VAR_1;
  }
