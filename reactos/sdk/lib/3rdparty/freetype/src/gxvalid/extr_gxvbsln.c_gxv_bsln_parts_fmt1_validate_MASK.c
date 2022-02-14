
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lookupfmt4_trans; int lookupval_func; int lookupval_sign; } ;
typedef TYPE_1__* GXV_Validator ;
typedef scalar_t__ FT_Bytes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,scalar_t__,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void
  FUNC_3( FT_Bytes VAR_5,
                                FT_Bytes VAR_6,
                                GXV_Validator VAR_7 )
  {
    FT_Bytes VAR_8 = VAR_5;


    FUNC_0( "parts format 1" );


    FUNC_2( VAR_8, VAR_6, VAR_7 );


    VAR_7->lookupval_sign = VAR_2;
    VAR_7->lookupval_func = VAR_4;
    VAR_7->lookupfmt4_trans = VAR_3;
    FUNC_1( VAR_8 + 2 * VAR_0,
                              VAR_6,
                              VAR_7 );

    VAR_1;
  }
