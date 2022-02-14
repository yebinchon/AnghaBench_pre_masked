
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int masks; } ;
typedef int PS_Mask ;
typedef TYPE_1__* PS_Dimension ;
typedef int FT_UInt ;
typedef int FT_Memory ;
typedef int FT_Error ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static FT_Error
  FUNC_2( PS_Dimension VAR_0,
                           FT_UInt VAR_1,
                           FT_Memory VAR_2 )
  {
    PS_Mask VAR_3;



    FUNC_0( VAR_0, VAR_1 );


    return FUNC_1( &VAR_0->masks, VAR_2, &VAR_3 );
  }
