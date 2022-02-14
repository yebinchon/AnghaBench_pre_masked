
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pathkeys; } ;
struct TYPE_8__ {int numkeys; TYPE_1__ path; int subpath; } ;
typedef TYPE_2__ UpperUniquePath ;
struct TYPE_9__ {int plan; } ;
typedef TYPE_3__ Unique ;
typedef int PlannerInfo ;
typedef int Plan ;
typedef int Path ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int ,int) ;
 TYPE_3__* FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static Unique *
FUNC_3(PlannerInfo *VAR_1, UpperUniquePath *VAR_2, int VAR_3)
{
 Unique *VAR_4;
 Plan *VAR_5;





 VAR_5 = FUNC_1(VAR_1, VAR_2->subpath,
          VAR_3 | VAR_0);

 VAR_4 = FUNC_2(VAR_5,
          VAR_2->path.pathkeys,
          VAR_2->numkeys);

 FUNC_0(&VAR_4->plan, (Path *) VAR_2);

 return VAR_4;
}
