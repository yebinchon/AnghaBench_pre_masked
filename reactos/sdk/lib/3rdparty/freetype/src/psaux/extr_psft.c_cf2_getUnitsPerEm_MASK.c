
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* face; } ;
struct TYPE_7__ {TYPE_2__ builder; } ;
struct TYPE_5__ {int units_per_EM; } ;
typedef TYPE_3__ PS_Decoder ;
typedef int FT_UShort ;


 int FUNC_0 (int) ;

__attribute__((used)) static FT_UShort
  FUNC_1( PS_Decoder* VAR_0 )
  {
    FUNC_0( VAR_0 && VAR_0->builder.face );
    FUNC_0( VAR_0->builder.face->units_per_EM );

    return VAR_0->builder.face->units_per_EM;
  }
