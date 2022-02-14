
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int extra2; } ;
typedef TYPE_1__* OTV_Validator ;
typedef int FT_UInt ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
  FUNC_6( FT_Bytes VAR_4,
                            OTV_Validator VAR_5 )
  {
    FT_Bytes VAR_6 = VAR_4;
    FT_UInt VAR_7;


    FUNC_2( "MarkMarkPos" );

    FUNC_1( 2 );
    VAR_7 = FUNC_0( VAR_6 );

    FUNC_5(( " (format %d)\n", VAR_7 ));

    switch ( VAR_7 )
    {
    case 1:
      VAR_5->extra2 = 0;
      FUNC_3( VAR_2, VAR_1 );
      FUNC_4( VAR_4, VAR_5 );
      break;

    default:
      VAR_0;
    }

    VAR_3;
  }
