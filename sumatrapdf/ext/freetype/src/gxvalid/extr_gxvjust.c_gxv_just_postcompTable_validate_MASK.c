
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ subtable_length; } ;
typedef TYPE_1__* GXV_Validator ;
typedef scalar_t__ FT_ULong ;
typedef scalar_t__ FT_Bytes ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,scalar_t__,TYPE_1__*) ;
 int FUNC_2 (scalar_t__,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_3( FT_Bytes VAR_1,
                                   FT_Bytes VAR_2,
                                   GXV_Validator VAR_3 )
  {
    FT_Bytes VAR_4 = VAR_1;


    FUNC_0( "just postcompTable" );

    FUNC_2( VAR_4, VAR_2, VAR_3 );
    VAR_4 += VAR_3->subtable_length;

    FUNC_1( VAR_4, VAR_2, VAR_3 );
    VAR_4 += VAR_3->subtable_length;

    VAR_3->subtable_length = (FT_ULong)( VAR_4 - VAR_1 );

    VAR_0;
  }
