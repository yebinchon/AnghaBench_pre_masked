
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int plan; } ;
struct TYPE_6__ {int path; int subpath; } ;
typedef TYPE_1__ ProjectSetPath ;
typedef TYPE_2__ ProjectSet ;
typedef int PlannerInfo ;
typedef int Plan ;
typedef int Path ;
typedef int List ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int ,int ) ;
 TYPE_2__* FUNC_3 (int *,int *) ;

__attribute__((used)) static ProjectSet *
FUNC_4(PlannerInfo *VAR_0, ProjectSetPath *VAR_1)
{
 ProjectSet *VAR_2;
 Plan *VAR_3;
 List *VAR_4;


 VAR_3 = FUNC_2(VAR_0, VAR_1->subpath, 0);

 VAR_4 = FUNC_0(VAR_0, &VAR_1->path);

 VAR_2 = FUNC_3(VAR_4, VAR_3);

 FUNC_1(&VAR_2->plan, (Path *) VAR_1);

 return VAR_2;
}
