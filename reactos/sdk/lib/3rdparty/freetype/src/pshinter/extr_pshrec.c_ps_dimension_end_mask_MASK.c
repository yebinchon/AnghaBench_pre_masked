
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_masks; scalar_t__ masks; } ;
struct TYPE_7__ {TYPE_1__ masks; } ;
struct TYPE_6__ {scalar_t__ end_point; } ;
typedef TYPE_2__* PS_Mask ;
typedef TYPE_3__* PS_Dimension ;
typedef scalar_t__ FT_UInt ;



__attribute__((used)) static void
  FUNC_0( PS_Dimension VAR_0,
                         FT_UInt VAR_1 )
  {
    FT_UInt VAR_2 = VAR_0->masks.num_masks;


    if ( VAR_2 > 0 )
    {
      PS_Mask VAR_3 = VAR_0->masks.masks + VAR_2 - 1;


      VAR_3->end_point = VAR_1;
    }
  }
