
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lookupval_func; int lookupval_sign; } ;
typedef TYPE_1__* GXV_Validator ;
typedef int GXV_JUST_DATA ;
typedef int FT_Bytes ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static void
  FUNC_2( FT_Bytes VAR_3,
                                   FT_Bytes VAR_4,
                                   GXV_Validator VAR_5 )
  {
    FT_Bytes VAR_6 = VAR_3;


    FUNC_0( "just pcLookupTable" );
    GXV_JUST_DATA( VAR_7 ) = 0x0000;
    GXV_JUST_DATA( VAR_8 ) = 0xFFFFU;

    VAR_5->lookupval_sign = VAR_1;
    VAR_5->lookupval_func = VAR_2;

    FUNC_1( VAR_6, VAR_4, VAR_5 );



    VAR_0;
  }
