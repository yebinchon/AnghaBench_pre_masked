
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {size_t simple_rel_array_size; double total_table_pages; int * all_baserels; TYPE_1__** simple_rel_array; } ;
struct TYPE_12__ {size_t relid; scalar_t__ reloptkind; int relids; scalar_t__ pages; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ PlannerInfo ;
typedef int List ;
typedef size_t Index ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int * FUNC_3 (int *,size_t) ;
 int FUNC_4 (int ,int *) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

RelOptInfo *
FUNC_9(PlannerInfo *VAR_1, List *VAR_2)
{
 RelOptInfo *VAR_3;
 Index VAR_4;
 double VAR_5;




 VAR_1->all_baserels = ((void*)0);
 for (VAR_4 = 1; VAR_4 < VAR_1->simple_rel_array_size; VAR_4++)
 {
  RelOptInfo *VAR_6 = VAR_1->simple_rel_array[VAR_4];


  if (VAR_6 == ((void*)0))
   continue;

  FUNC_0(VAR_6->relid == VAR_4);


  if (VAR_6->reloptkind != VAR_0)
   continue;

  VAR_1->all_baserels = FUNC_3(VAR_1->all_baserels, VAR_6->relid);
 }


 FUNC_6(VAR_1);




 FUNC_8(VAR_1);
 VAR_5 = 0;
 for (VAR_4 = 1; VAR_4 < VAR_1->simple_rel_array_size; VAR_4++)
 {
  RelOptInfo *VAR_7 = VAR_1->simple_rel_array[VAR_4];

  if (VAR_7 == ((void*)0))
   continue;

  FUNC_0(VAR_7->relid == VAR_4);

  if (FUNC_1(VAR_7))
   continue;

  if (FUNC_2(VAR_7))
   VAR_5 += (double) VAR_7->pages;
 }
 VAR_1->total_table_pages = VAR_5;




 FUNC_7(VAR_1);




 VAR_3 = FUNC_5(VAR_1, VAR_2);




 FUNC_0(FUNC_4(VAR_3->relids, VAR_1->all_baserels));

 return VAR_3;
}
