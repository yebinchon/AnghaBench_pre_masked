
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
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_4( FT_Bytes VAR_0,
                               FT_Bytes VAR_1,
                               GXV_Validator VAR_2 )
  {
    FT_Bytes VAR_3 = VAR_0;
    FT_ULong VAR_4, VAR_5;


    FUNC_1( 4 );
    VAR_4 = FUNC_0( VAR_3 );
    for ( VAR_5 = 0; VAR_5 < VAR_4; VAR_5++ )
    {
      FUNC_2(( "validating wdc pair %d/%d\n", VAR_5 + 1, VAR_4 ));
      FUNC_3( VAR_3, VAR_1, VAR_2 );
      VAR_3 += VAR_2->subtable_length;
    }

    VAR_2->subtable_length = (FT_ULong)( VAR_3 - VAR_0 );
  }
