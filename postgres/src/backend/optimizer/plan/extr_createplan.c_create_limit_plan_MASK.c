
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int plan; } ;
struct TYPE_6__ {int limitCount; int limitOffset; int subpath; } ;
typedef int PlannerInfo ;
typedef int Plan ;
typedef int Path ;
typedef TYPE_1__ LimitPath ;
typedef TYPE_2__ Limit ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int ,int) ;
 TYPE_2__* FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static Limit *
FUNC_3(PlannerInfo *VAR_0, LimitPath *VAR_1, int VAR_2)
{
 Limit *VAR_3;
 Plan *VAR_4;


 VAR_4 = FUNC_1(VAR_0, VAR_1->subpath, VAR_2);

 VAR_3 = FUNC_2(VAR_4,
       VAR_1->limitOffset,
       VAR_1->limitCount);

 FUNC_0(&VAR_3->plan, (Path *) VAR_1);

 return VAR_3;
}
