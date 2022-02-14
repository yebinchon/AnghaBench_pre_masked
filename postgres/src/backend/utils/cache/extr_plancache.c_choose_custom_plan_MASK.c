
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cursor_options; int num_custom_plans; double total_custom_cost; double generic_cost; scalar_t__ is_oneshot; } ;
typedef int * ParamListInfo ;
typedef TYPE_1__ CachedPlanSource ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bool
FUNC_1(CachedPlanSource *VAR_5, ParamListInfo VAR_6)
{
 double VAR_7;


 if (VAR_5->is_oneshot)
  return 1;


 if (VAR_6 == ((void*)0))
  return 0;

 if (FUNC_0(VAR_5))
  return 0;


 if (VAR_4 == VAR_3)
  return 0;
 if (VAR_4 == VAR_2)
  return 1;


 if (VAR_5->cursor_options & VAR_1)
  return 0;
 if (VAR_5->cursor_options & VAR_0)
  return 1;


 if (VAR_5->num_custom_plans < 5)
  return 1;

 VAR_7 = VAR_5->total_custom_cost / VAR_5->num_custom_plans;
 if (VAR_5->generic_cost < VAR_7)
  return 0;

 return 1;
}
