
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ u; } ;
struct TYPE_10__ {int u; } ;
struct TYPE_9__ {TYPE_1__* root; } ;
struct TYPE_8__ {int base; int limit; } ;
typedef TYPE_2__* GXV_Validator ;
typedef TYPE_3__ GXV_LookupValueDesc ;
typedef TYPE_4__* GXV_LookupValueCPtr ;
typedef int FT_UShort ;
typedef int FT_Bytes ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static GXV_LookupValueDesc
  FUNC_3( FT_UShort VAR_0,
                               GXV_LookupValueCPtr VAR_1,
                               FT_Bytes VAR_2,
                               GXV_Validator VAR_3 )
  {
    FT_Bytes VAR_4;
    FT_Bytes VAR_5;
    FT_UShort VAR_6;
    GXV_LookupValueDesc VAR_7;

    FUNC_1( VAR_2 );


    VAR_6 = (FT_UShort)( VAR_1->u +
                          VAR_0 * sizeof ( FT_UShort ) );
    VAR_4 = VAR_3->root->base + VAR_6;
    VAR_5 = VAR_3->root->limit;

    FUNC_2 ( 2 );
    VAR_7.u = FUNC_0( VAR_4 );

    return VAR_7;
  }
