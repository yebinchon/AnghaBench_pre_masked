
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ u; } ;
struct TYPE_5__ {int u; } ;
typedef int GXV_Validator ;
typedef TYPE_1__ GXV_LookupValueDesc ;
typedef TYPE_2__* GXV_LookupValueCPtr ;
typedef int FT_UShort ;
typedef int FT_Short ;
typedef int FT_Bytes ;


 int FUNC_0 (int ) ;

__attribute__((used)) static GXV_LookupValueDesc
  FUNC_1( FT_UShort VAR_0,
                               GXV_LookupValueCPtr VAR_1,
                               FT_Bytes VAR_2,
                               GXV_Validator VAR_3 )
  {
    GXV_LookupValueDesc VAR_4;

    FUNC_0( VAR_2 );
    FUNC_0( VAR_3 );


    VAR_4.u = (FT_UShort)( VAR_1->u +
                           VAR_0 * 4 * sizeof ( FT_Short ) );

    return VAR_4;
  }
