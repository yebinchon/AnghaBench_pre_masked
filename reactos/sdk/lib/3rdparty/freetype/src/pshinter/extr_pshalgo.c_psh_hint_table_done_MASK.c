
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * sort_global; scalar_t__ max_hints; scalar_t__ num_hints; int hints; int sort; int * zone; scalar_t__ num_zones; int zones; } ;
typedef TYPE_1__* PSH_Hint_Table ;
typedef int FT_Memory ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
  FUNC_1( PSH_Hint_Table VAR_0,
                       FT_Memory VAR_1 )
  {
    FUNC_0( VAR_0->zones );
    VAR_0->num_zones = 0;
    VAR_0->zone = ((void*)0);

    FUNC_0( VAR_0->sort );
    FUNC_0( VAR_0->hints );
    VAR_0->num_hints = 0;
    VAR_0->max_hints = 0;
    VAR_0->sort_global = ((void*)0);
  }
