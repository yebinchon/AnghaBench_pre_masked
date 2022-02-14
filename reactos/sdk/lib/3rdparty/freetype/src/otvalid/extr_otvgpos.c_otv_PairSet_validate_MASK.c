
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int extra3; } ;
typedef TYPE_1__* OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Bytes ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int,TYPE_1__*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
  FUNC_6( FT_Bytes VAR_1,
                        FT_UInt VAR_2,
                        FT_UInt VAR_3,
                        OTV_Validator VAR_4 )
  {
    FT_Bytes VAR_5 = VAR_1;
    FT_UInt VAR_6, VAR_7, VAR_8;


    FUNC_2( "PairSet" );

    VAR_4->extra3 = VAR_1;

    FUNC_1( 2 );
    VAR_8 = FUNC_0( VAR_5 );

    FUNC_3(( " (PairValueCount = %d)\n", VAR_8 ));

    VAR_6 = FUNC_5( VAR_2 );
    VAR_7 = FUNC_5( VAR_3 );

    FUNC_1( VAR_8 * ( VAR_6 + VAR_7 + 2 ) );


    for ( ; VAR_8 > 0; VAR_8-- )
    {
      VAR_5 += 2;

      if ( VAR_2 )
        FUNC_4( VAR_5, VAR_2, VAR_4 );
      VAR_5 += VAR_6;

      if ( VAR_3 )
        FUNC_4( VAR_5, VAR_3, VAR_4 );
      VAR_5 += VAR_7;
    }

    VAR_0;
  }
