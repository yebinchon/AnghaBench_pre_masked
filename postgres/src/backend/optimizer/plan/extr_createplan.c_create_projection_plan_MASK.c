
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_14__ {int parallel_safe; TYPE_10__* pathtarget; int rows; int total_cost; int startup_cost; } ;
struct TYPE_13__ {int parallel_safe; int plan_width; int plan_rows; int total_cost; int startup_cost; int * targetlist; } ;
struct TYPE_12__ {TYPE_3__ path; int subpath; } ;
struct TYPE_11__ {int width; } ;
typedef TYPE_1__ ProjectionPath ;
typedef int PlannerInfo ;
typedef TYPE_2__ Plan ;
typedef int Path ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_10__*) ;
 int * FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int *,TYPE_2__*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *,TYPE_3__*,int) ;

__attribute__((used)) static Plan *
FUNC_8(PlannerInfo *VAR_2, ProjectionPath *VAR_3, int VAR_4)
{
 Plan *VAR_5;
 Plan *VAR_6;
 List *VAR_7;
 bool VAR_8 = 0;
 if (FUNC_7(VAR_2, &VAR_3->path, VAR_4))
 {





  VAR_6 = FUNC_3(VAR_2, VAR_3->subpath, 0);
  VAR_7 = VAR_6->targetlist;
  if (VAR_4 & VAR_1)
   FUNC_0(VAR_7,
              VAR_3->path.pathtarget);
 }
 else if (FUNC_4(VAR_3->subpath))
 {






  VAR_6 = FUNC_3(VAR_2, VAR_3->subpath,
           VAR_0);
  VAR_7 = FUNC_1(VAR_2, &VAR_3->path);
 }
 else
 {




  VAR_6 = FUNC_3(VAR_2, VAR_3->subpath, 0);
  VAR_7 = FUNC_1(VAR_2, &VAR_3->path);
  VAR_8 = !FUNC_6(VAR_7, VAR_6->targetlist);
 }
 if (!VAR_8)
 {

  VAR_5 = VAR_6;
  VAR_5->targetlist = VAR_7;


  VAR_5->startup_cost = VAR_3->path.startup_cost;
  VAR_5->total_cost = VAR_3->path.total_cost;
  VAR_5->plan_rows = VAR_3->path.rows;
  VAR_5->plan_width = VAR_3->path.pathtarget->width;
  VAR_5->parallel_safe = VAR_3->path.parallel_safe;

 }
 else
 {

  VAR_5 = (Plan *) FUNC_5(VAR_7, ((void*)0), VAR_6);

  FUNC_2(VAR_5, (Path *) VAR_3);
 }

 return VAR_5;
}
