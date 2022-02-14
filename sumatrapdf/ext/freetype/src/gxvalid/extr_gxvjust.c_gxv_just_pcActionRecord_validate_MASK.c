
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ subtable_length; } ;
typedef TYPE_1__* GXV_Validator ;
typedef scalar_t__ FT_ULong ;
typedef scalar_t__ FT_Bytes ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_4( FT_Bytes VAR_1,
                                    FT_Bytes VAR_2,
                                    GXV_Validator VAR_3 )
  {
    FT_Bytes VAR_4 = VAR_1;
    FT_ULong VAR_5;
    FT_ULong VAR_6;


    FUNC_1( 4 );
    VAR_5 = FUNC_0( VAR_4 );
    FUNC_2(( "actionCount = %d\n", VAR_5 ));

    for ( VAR_6 = 0; VAR_6 < VAR_5; VAR_6++ )
    {
      FUNC_3( VAR_4, VAR_2, VAR_3 );
      VAR_4 += VAR_3->subtable_length;
    }

    VAR_3->subtable_length = (FT_ULong)( VAR_4 - VAR_1 );

    VAR_0;
  }
