
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ num_masks; } ;
struct TYPE_7__ {scalar_t__ num_masks; } ;
struct TYPE_6__ {scalar_t__ num_hints; } ;
struct TYPE_9__ {TYPE_3__ counters; TYPE_2__ masks; TYPE_1__ hints; } ;
typedef TYPE_4__* PS_Dimension ;



__attribute__((used)) static void
  FUNC_0( PS_Dimension VAR_0 )
  {
    VAR_0->hints.num_hints = 0;
    VAR_0->masks.num_masks = 0;
    VAR_0->counters.num_masks = 0;
  }
