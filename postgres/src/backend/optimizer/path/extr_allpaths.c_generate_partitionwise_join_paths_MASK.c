
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int nparts; struct TYPE_11__** part_rels; int consider_partitionwise_join; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int List ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int * VAR_0 ;
 int FUNC_4 (int *,TYPE_1__*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int * FUNC_7 (int *,TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

void
FUNC_11(PlannerInfo *VAR_1, RelOptInfo *VAR_2)
{
 List *VAR_3 = VAR_0;
 int VAR_4;
 int VAR_5;
 RelOptInfo **VAR_6;


 if (!FUNC_2(VAR_2))
  return;


 if (!FUNC_3(VAR_2))
  return;


 FUNC_0(VAR_2->consider_partitionwise_join);


 FUNC_5();

 VAR_5 = VAR_2->nparts;
 VAR_6 = VAR_2->part_rels;


 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
 {
  RelOptInfo *VAR_7 = VAR_6[VAR_4];


  if (VAR_7 == ((void*)0))
   continue;


  FUNC_11(VAR_1, VAR_7);

  FUNC_10(VAR_7);


  if (FUNC_1(VAR_7))
   continue;





  VAR_3 = FUNC_7(VAR_3, VAR_7);
 }


 if (!VAR_3)
 {
  FUNC_9(VAR_2);
  return;
 }


 FUNC_4(VAR_1, VAR_2, VAR_3);
 FUNC_8(VAR_3);
}
