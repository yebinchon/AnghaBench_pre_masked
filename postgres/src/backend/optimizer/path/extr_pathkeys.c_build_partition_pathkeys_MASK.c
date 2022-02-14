
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int partnatts; int * partcollation; int * partopcintype; int * partopfamily; } ;
struct TYPE_6__ {int relids; int * partexprs; int nparts; int boundinfo; TYPE_2__* part_scheme; } ;
typedef int ScanDirection ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int PathKey ;
typedef TYPE_2__* PartitionScheme ;
typedef int List ;
typedef int Expr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int * VAR_0 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,int *,int *,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (int *,int *) ;

List *
FUNC_9(PlannerInfo *VAR_1, RelOptInfo *VAR_2,
       ScanDirection VAR_3, bool *VAR_4)
{
 List *VAR_5 = VAR_0;
 PartitionScheme VAR_6 = VAR_2->part_scheme;
 int VAR_7;

 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0(FUNC_6(VAR_2->boundinfo, VAR_2->nparts));

 FUNC_0(FUNC_1(VAR_2));

 for (VAR_7 = 0; VAR_7 < VAR_6->partnatts; VAR_7++)
 {
  PathKey *VAR_8;
  Expr *VAR_9 = (Expr *) FUNC_4(VAR_2->partexprs[VAR_7]);
  VAR_8 = FUNC_5(VAR_1,
             VAR_9,
             ((void*)0),
             VAR_6->partopfamily[VAR_7],
             VAR_6->partopcintype[VAR_7],
             VAR_6->partcollation[VAR_7],
             FUNC_2(VAR_3),
             FUNC_2(VAR_3),
             0,
             VAR_2->relids,
             0);


  if (VAR_8)
  {




   if (!FUNC_8(VAR_8, VAR_5))
    VAR_5 = FUNC_3(VAR_5, VAR_8);
  }
  else
  {
   if (!FUNC_7(VAR_2, VAR_7))
   {
    *VAR_4 = 1;
    return VAR_5;
   }
  }
 }

 *VAR_4 = 0;
 return VAR_5;
}
