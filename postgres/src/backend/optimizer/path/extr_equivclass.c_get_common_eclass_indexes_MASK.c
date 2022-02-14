
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** simple_rel_array; } ;
struct TYPE_5__ {int * eclass_indexes; } ;
typedef int Relids ;
typedef TYPE_2__ PlannerInfo ;
typedef int Bitmapset ;


 scalar_t__ FUNC_0 (int ,int*) ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static Bitmapset *
FUNC_3(PlannerInfo *VAR_0, Relids VAR_1, Relids VAR_2)
{
 Bitmapset *VAR_3;
 Bitmapset *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_0, VAR_1);





 if (FUNC_0(VAR_2, &VAR_5))
  VAR_4 = VAR_0->simple_rel_array[VAR_5]->eclass_indexes;
 else
  VAR_4 = FUNC_2(VAR_0, VAR_2);


 return FUNC_1(VAR_3, VAR_4);
}
