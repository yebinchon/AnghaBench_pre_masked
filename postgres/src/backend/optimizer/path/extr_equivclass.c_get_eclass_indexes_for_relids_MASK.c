
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__** simple_rel_array; int ec_merging_done; } ;
struct TYPE_4__ {int eclass_indexes; } ;
typedef int Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef int Bitmapset ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static Bitmapset *
FUNC_3(PlannerInfo *VAR_0, Relids VAR_1)
{
 Bitmapset *VAR_2 = ((void*)0);
 int VAR_3 = -1;


 FUNC_0(VAR_0->ec_merging_done);

 while ((VAR_3 = FUNC_2(VAR_1, VAR_3)) > 0)
 {
  RelOptInfo *VAR_4 = VAR_0->simple_rel_array[VAR_3];

  VAR_2 = FUNC_1(VAR_2, VAR_4->eclass_indexes);
 }
 return VAR_2;
}
