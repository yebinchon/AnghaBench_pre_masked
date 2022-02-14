
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_masks; scalar_t__ num_masks; int masks; } ;
typedef TYPE_1__* PS_Mask_Table ;
typedef int PS_Mask ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Memory ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
  FUNC_2( PS_Mask_Table VAR_0,
                      FT_Memory VAR_1 )
  {
    FT_UInt VAR_2 = VAR_0->max_masks;
    PS_Mask VAR_3 = VAR_0->masks;


    for ( ; VAR_2 > 0; VAR_2--, VAR_3++ )
      FUNC_1( VAR_3, VAR_1 );

    FUNC_0( VAR_0->masks );
    VAR_0->num_masks = 0;
    VAR_0->max_masks = 0;
  }
