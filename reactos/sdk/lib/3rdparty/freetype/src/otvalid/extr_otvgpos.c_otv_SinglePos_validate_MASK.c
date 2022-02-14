
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int extra3; } ;
typedef TYPE_1__* OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Int ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,TYPE_1__*,int) ;
 int FUNC_5 (int,int,TYPE_1__*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
  FUNC_7( FT_Bytes VAR_2,
                          OTV_Validator VAR_3 )
  {
    FT_Bytes VAR_4 = VAR_2;
    FT_UInt VAR_5;


    FUNC_2( "SinglePos" );

    FUNC_1( 2 );
    VAR_5 = FUNC_0( VAR_4 );

    FUNC_3(( " (format %d)\n", VAR_5 ));

    VAR_3->extra3 = VAR_2;

    switch ( VAR_5 )
    {
    case 1:
      {
        FT_UInt VAR_6, VAR_7;


        FUNC_1( 4 );
        VAR_6 = FUNC_0( VAR_4 );
        VAR_7 = FUNC_0( VAR_4 );

        FUNC_4( VAR_2 + VAR_6, VAR_3, -1 );
        FUNC_5( VAR_4, VAR_7, VAR_3 );
      }
      break;

    case 2:
      {
        FT_UInt VAR_8, VAR_9, VAR_10, VAR_11;


        FUNC_1( 6 );
        VAR_8 = FUNC_0( VAR_4 );
        VAR_9 = FUNC_0( VAR_4 );
        VAR_10 = FUNC_0( VAR_4 );

        FUNC_3(( " (ValueCount = %d)\n", VAR_10 ));

        VAR_11 = FUNC_6( VAR_9 );

        FUNC_4( VAR_2 + VAR_8,
                               VAR_3,
                               (FT_Int)VAR_10 );

        FUNC_1( VAR_10 * VAR_11 );


        for ( ; VAR_10 > 0; VAR_10-- )
        {
          FUNC_5( VAR_4, VAR_9, VAR_3 );
          VAR_4 += VAR_11;
        }
      }
      break;

    default:
      VAR_0;
    }

    VAR_1;
  }
