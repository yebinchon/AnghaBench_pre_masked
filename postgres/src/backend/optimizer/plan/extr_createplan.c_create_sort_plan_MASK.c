
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int parent; } ;
struct TYPE_12__ {int plan; } ;
struct TYPE_9__ {TYPE_2__* parent; int pathkeys; } ;
struct TYPE_11__ {TYPE_1__ path; TYPE_8__* subpath; } ;
struct TYPE_10__ {int * relids; } ;
typedef TYPE_3__ SortPath ;
typedef TYPE_4__ Sort ;
typedef int PlannerInfo ;
typedef int Plan ;
typedef int Path ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,TYPE_8__*,int) ;
 TYPE_4__* FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static Sort *
FUNC_4(PlannerInfo *VAR_1, SortPath *VAR_2, int VAR_3)
{
 Sort *VAR_4;
 Plan *VAR_5;






 VAR_5 = FUNC_2(VAR_1, VAR_2->subpath,
          VAR_3 | VAR_0);







 VAR_4 = FUNC_3(VAR_5, VAR_2->path.pathkeys,
           FUNC_0(VAR_2->subpath->parent) ?
           VAR_2->path.parent->relids : ((void*)0));

 FUNC_1(&VAR_4->plan, (Path *) VAR_2);

 return VAR_4;
}
