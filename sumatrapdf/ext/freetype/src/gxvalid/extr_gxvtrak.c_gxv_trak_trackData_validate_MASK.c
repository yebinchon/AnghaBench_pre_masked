
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int subtable_length; TYPE_1__* root; } ;
struct TYPE_6__ {int base; } ;
typedef TYPE_2__* GXV_Validator ;
typedef int FT_UShort ;
typedef int FT_ULong ;
typedef int FT_Bytes ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int,char*,int ) ;
 int FUNC_9 (int ,TYPE_2__*) ;
 int FUNC_10 (int,int,int,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
  FUNC_11( FT_Bytes VAR_4,
                               FT_Bytes VAR_5,
                               GXV_Validator VAR_6 )
  {
    FT_Bytes VAR_7 = VAR_4;
    FT_UShort VAR_8;
    FT_UShort VAR_9;
    FT_ULong VAR_10;

    FUNC_4( 4, VAR_1 );


    FUNC_5( VAR_1 );
    FUNC_3( "trackData" );


    FUNC_2( 2 + 2 + 4 );
    VAR_8 = FUNC_1( VAR_7 );
    VAR_9 = FUNC_1( VAR_7 );
    VAR_10 = FUNC_0( VAR_7 );

    FUNC_8( VAR_4, (FT_ULong)( VAR_7 - VAR_4 ),
                          "trackData header", VAR_1 );


    FUNC_10( VAR_7, VAR_5, VAR_8, VAR_6 );
    FUNC_8( VAR_7, VAR_6->subtable_length,
                          "trackTable", VAR_1 );


    VAR_7 = VAR_6->root->base + VAR_10;
    FUNC_2( VAR_9 * 4 );
    FUNC_8( VAR_7, VAR_9 * 4, "sizeTable", VAR_1 );


    VAR_7 = VAR_6->root->base + FUNC_7( VAR_3 );
    if ( VAR_5 - VAR_7 < VAR_8 * VAR_9 * 2 )
      FUNC_6(( "too short trackValue array\n" ));

    VAR_7 = VAR_6->root->base + FUNC_7( VAR_2 );
    FUNC_2( VAR_9 * 2 );

    FUNC_8( VAR_6->root->base
                            + FUNC_7( VAR_3 ),
                          FUNC_7( VAR_2 )
                            - FUNC_7( VAR_3 )
                            + VAR_9 * 2,
                          "trackValue array", VAR_1 );

    FUNC_9( VAR_1, VAR_6 );

    VAR_0;
  }
