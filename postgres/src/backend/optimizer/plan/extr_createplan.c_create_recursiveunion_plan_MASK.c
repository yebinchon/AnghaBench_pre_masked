
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int plan; } ;
struct TYPE_6__ {int distinctList; int wtParam; int numGroups; int path; int rightpath; int leftpath; } ;
typedef TYPE_1__ RecursiveUnionPath ;
typedef TYPE_2__ RecursiveUnion ;
typedef int PlannerInfo ;
typedef int Plan ;
typedef int Path ;
typedef int List ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,double) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ,int ) ;
 TYPE_2__* FUNC_4 (int *,int *,int *,int ,int ,long) ;

__attribute__((used)) static RecursiveUnion *
FUNC_5(PlannerInfo *VAR_2, RecursiveUnionPath *VAR_3)
{
 RecursiveUnion *VAR_4;
 Plan *VAR_5;
 Plan *VAR_6;
 List *VAR_7;
 long VAR_8;


 VAR_5 = FUNC_3(VAR_2, VAR_3->leftpath, VAR_0);
 VAR_6 = FUNC_3(VAR_2, VAR_3->rightpath, VAR_0);

 VAR_7 = FUNC_1(VAR_2, &VAR_3->path);


 VAR_8 = (long) FUNC_0(VAR_3->numGroups, (double) VAR_1);

 VAR_4 = FUNC_4(VAR_7,
        VAR_5,
        VAR_6,
        VAR_3->wtParam,
        VAR_3->distinctList,
        VAR_8);

 FUNC_2(&VAR_4->plan, (Path *) VAR_3);

 return VAR_4;
}
