
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int subtable_length; TYPE_1__* root; } ;
struct TYPE_9__ {scalar_t__ base; } ;
typedef TYPE_2__* GXV_Validator ;
typedef scalar_t__ FT_UShort ;
typedef scalar_t__ FT_Bytes ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,scalar_t__,TYPE_2__*) ;
 int FUNC_7 (scalar_t__,scalar_t__,TYPE_2__*) ;
 int FUNC_8 (scalar_t__,scalar_t__,TYPE_2__*) ;
 int FUNC_9 (scalar_t__,scalar_t__,TYPE_2__*) ;
 int FUNC_10 (scalar_t__,int ,char*,int ) ;
 int FUNC_11 (int ,TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static void
  FUNC_12( FT_Bytes VAR_2,
                              FT_Bytes VAR_3,
                              GXV_Validator VAR_4 )
  {




    FT_UShort VAR_5;
    FT_UShort VAR_6;
    FT_UShort VAR_7;
    FT_Bytes VAR_8 = VAR_2;

    FUNC_3( 4, VAR_1 );


    FUNC_2( "just justData" );

    FUNC_4( VAR_1 );
    FUNC_1( 2 + 2 + 2 );
    VAR_5 = FUNC_0( VAR_8 );
    VAR_6 = FUNC_0( VAR_8 );
    VAR_7 = FUNC_0( VAR_8 );

    FUNC_5(( " (justClassTableOffset = 0x%04x)\n", VAR_5 ));
    FUNC_5(( " (wdcTableOffset = 0x%04x)\n", VAR_6 ));
    FUNC_5(( " (pcTableOffset = 0x%04x)\n", VAR_7 ));

    FUNC_7( VAR_8, VAR_3, VAR_4 );
    FUNC_10( VAR_8, VAR_4->subtable_length,
                          "just_LookupTable", VAR_1 );

    if ( VAR_6 )
    {
      FUNC_9(
        VAR_4->root->base + VAR_6, VAR_3, VAR_4 );
      FUNC_10( VAR_4->root->base + VAR_6,
                            VAR_4->subtable_length, "just_wdcTable", VAR_1 );
    }

    if ( VAR_7 )
    {
      FUNC_8( VAR_4->root->base + VAR_7,
                                       VAR_3, VAR_4 );
      FUNC_10( VAR_4->root->base + VAR_7,
                            VAR_4->subtable_length, "just_pcTable", VAR_1 );
    }

    if ( VAR_5 )
    {
      FUNC_6(
        VAR_4->root->base + VAR_5, VAR_3, VAR_4 );
      FUNC_10( VAR_4->root->base + VAR_5,
                            VAR_4->subtable_length, "just_justClassTable",
                            VAR_1 );
    }

    FUNC_11( VAR_1, VAR_4 );

    VAR_0;
  }
