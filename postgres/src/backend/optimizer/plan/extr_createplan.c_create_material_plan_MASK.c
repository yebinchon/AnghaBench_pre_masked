
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int plan; } ;
struct TYPE_6__ {int subpath; } ;
typedef int PlannerInfo ;
typedef int Plan ;
typedef int Path ;
typedef TYPE_1__ MaterialPath ;
typedef TYPE_2__ Material ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int ,int) ;
 TYPE_2__* FUNC_2 (int *) ;

__attribute__((used)) static Material *
FUNC_3(PlannerInfo *VAR_1, MaterialPath *VAR_2, int VAR_3)
{
 Material *VAR_4;
 Plan *VAR_5;






 VAR_5 = FUNC_1(VAR_1, VAR_2->subpath,
          VAR_3 | VAR_0);

 VAR_4 = FUNC_2(VAR_5);

 FUNC_0(&VAR_4->plan, (Path *) VAR_2);

 return VAR_4;
}
