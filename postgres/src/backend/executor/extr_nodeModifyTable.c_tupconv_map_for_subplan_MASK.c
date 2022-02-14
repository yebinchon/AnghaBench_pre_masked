
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TupleConversionMap ;
struct TYPE_4__ {int mt_nplans; int ** mt_per_subplan_tupconv_maps; } ;
typedef TYPE_1__ ModifyTableState ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static TupleConversionMap *
FUNC_2(ModifyTableState *VAR_0, int VAR_1)
{

 if (VAR_0->mt_per_subplan_tupconv_maps == ((void*)0))
  FUNC_1(VAR_0);

 FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_0->mt_nplans);
 return VAR_0->mt_per_subplan_tupconv_maps[VAR_1];
}
