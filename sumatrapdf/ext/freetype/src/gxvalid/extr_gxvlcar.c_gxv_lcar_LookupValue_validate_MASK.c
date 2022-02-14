
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ u; } ;
struct TYPE_8__ {TYPE_1__* root; } ;
struct TYPE_7__ {scalar_t__ limit; scalar_t__ base; } ;
typedef TYPE_2__* GXV_Validator ;
typedef TYPE_3__* GXV_LookupValueCPtr ;
typedef int FT_UShort ;
typedef int FT_Short ;
typedef scalar_t__ FT_Bytes ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int,TYPE_2__*) ;

__attribute__((used)) static void
  FUNC_5( FT_UShort VAR_1,
                                 GXV_LookupValueCPtr VAR_2,
                                 GXV_Validator VAR_3 )
  {
    FT_Bytes VAR_4 = VAR_3->root->base + VAR_2->u;
    FT_Bytes VAR_5 = VAR_3->root->limit;
    FT_UShort VAR_6;
    FT_Short VAR_7;
    FT_UShort VAR_8;


    FUNC_3( "element in lookupTable" );

    FUNC_2( 2 );
    VAR_6 = FUNC_1( VAR_4 );

    FUNC_2( 2 * VAR_6 );
    for ( VAR_8 = 0; VAR_8 < VAR_6; VAR_8++ )
    {
      VAR_7 = FUNC_0( VAR_4 );
      FUNC_4( VAR_7, VAR_1, VAR_3 );
    }

    VAR_0;
  }
