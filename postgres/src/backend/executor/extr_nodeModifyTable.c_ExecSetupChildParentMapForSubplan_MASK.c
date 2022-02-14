
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleDesc ;
typedef int TupleConversionMap ;
struct TYPE_7__ {int mt_nplans; int ** mt_per_subplan_tupconv_maps; TYPE_1__* resultRelInfo; } ;
struct TYPE_6__ {int ri_RelationDesc; } ;
typedef TYPE_1__ ResultRelInfo ;
typedef TYPE_2__ ModifyTableState ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(ModifyTableState *VAR_0)
{
 ResultRelInfo *VAR_1 = FUNC_2(VAR_0);
 ResultRelInfo *VAR_2 = VAR_0->resultRelInfo;
 TupleDesc VAR_3;
 int VAR_4 = VAR_0->mt_nplans;
 int VAR_5;
 VAR_3 = FUNC_0(VAR_1->ri_RelationDesc);

 VAR_0->mt_per_subplan_tupconv_maps = (TupleConversionMap **)
  FUNC_3(sizeof(TupleConversionMap *) * VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5)
 {
  VAR_0->mt_per_subplan_tupconv_maps[VAR_5] =
   FUNC_1(FUNC_0(VAR_2[VAR_5].ri_RelationDesc),
           VAR_3);
 }
}
