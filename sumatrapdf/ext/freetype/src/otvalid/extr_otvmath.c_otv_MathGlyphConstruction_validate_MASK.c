
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int glyph_count; } ;
typedef TYPE_1__* OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_6( FT_Bytes VAR_2,
                                      OTV_Validator VAR_3 )
  {
    FT_Bytes VAR_4 = VAR_2;
    FT_UInt VAR_5, VAR_6;
    FT_UInt VAR_7;

    FUNC_3( VAR_1 );




    FUNC_1( 4 );

    FUNC_2( VAR_1 );
    VAR_5 = FUNC_0( VAR_4 );

    FUNC_1( 4 * VAR_5 );
    VAR_6 = 4 + 4 * VAR_5;

    for ( VAR_7 = 0; VAR_7 < VAR_5; VAR_7++ )
    {
      FT_UInt VAR_8;


      VAR_8 = FUNC_0( VAR_4 );
      if ( VAR_8 >= VAR_3->glyph_count )
        VAR_0;
      VAR_4 += 2;
    }

    FUNC_4( VAR_1 );
    if ( VAR_1 )
      FUNC_5( VAR_2+VAR_1, VAR_3 );


  }
