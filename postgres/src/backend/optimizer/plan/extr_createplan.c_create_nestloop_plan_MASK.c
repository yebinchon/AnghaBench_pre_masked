
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;
typedef struct TYPE_19__ TYPE_12__ ;


struct TYPE_23__ {int plan; } ;
struct TYPE_26__ {TYPE_3__ join; } ;
struct TYPE_20__ {scalar_t__ param_info; TYPE_1__* parent; } ;
struct TYPE_25__ {TYPE_16__ path; int inner_unique; int jointype; TYPE_12__* outerjoinpath; TYPE_12__* innerjoinpath; int * joinrestrictinfo; } ;
struct TYPE_24__ {int curOuterRels; } ;
struct TYPE_22__ {int relids; } ;
struct TYPE_21__ {int relids; } ;
struct TYPE_19__ {TYPE_2__* parent; } ;
typedef int Relids ;
typedef TYPE_4__ PlannerInfo ;
typedef int Plan ;
typedef int Node ;
typedef TYPE_5__ NestPath ;
typedef TYPE_6__ NestLoop ;
typedef int List ;


 scalar_t__ FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (TYPE_4__*,TYPE_16__*) ;
 int FUNC_4 (int *,TYPE_16__*) ;
 int * FUNC_5 (TYPE_4__*,TYPE_12__*,int ) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int **,int **) ;
 int * FUNC_8 (TYPE_4__*,int ) ;
 TYPE_6__* FUNC_9 (int *,int *,int *,int *,int *,int *,int ,int ) ;
 int * FUNC_10 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_11 (TYPE_4__*,int *) ;

__attribute__((used)) static NestLoop *
FUNC_12(PlannerInfo *VAR_1,
      NestPath *VAR_2)
{
 NestLoop *VAR_3;
 Plan *VAR_4;
 Plan *VAR_5;
 List *VAR_6 = FUNC_3(VAR_1, &VAR_2->path);
 List *VAR_7 = VAR_2->joinrestrictinfo;
 List *VAR_8;
 List *VAR_9;
 Relids VAR_10;
 List *VAR_11;
 Relids VAR_12 = VAR_1->curOuterRels;


 VAR_4 = FUNC_5(VAR_1, VAR_2->outerjoinpath, 0);


 VAR_1->curOuterRels = FUNC_2(VAR_1->curOuterRels,
           VAR_2->outerjoinpath->parent->relids);

 VAR_5 = FUNC_5(VAR_1, VAR_2->innerjoinpath, 0);


 FUNC_1(VAR_1->curOuterRels);
 VAR_1->curOuterRels = VAR_12;


 VAR_7 = FUNC_10(VAR_1, VAR_7);



 if (FUNC_0(VAR_2->jointype))
 {
  FUNC_7(VAR_7,
         VAR_2->path.parent->relids,
         &VAR_8, &VAR_9);
 }
 else
 {

  VAR_8 = FUNC_6(VAR_7, 0);
  VAR_9 = VAR_0;
 }


 if (VAR_2->path.param_info)
 {
  VAR_8 = (List *)
   FUNC_11(VAR_1, (Node *) VAR_8);
  VAR_9 = (List *)
   FUNC_11(VAR_1, (Node *) VAR_9);
 }





 VAR_10 = VAR_2->outerjoinpath->parent->relids;
 VAR_11 = FUNC_8(VAR_1, VAR_10);

 VAR_3 = FUNC_9(VAR_6,
         VAR_8,
         VAR_9,
         VAR_11,
         VAR_4,
         VAR_5,
         VAR_2->jointype,
         VAR_2->inner_unique);

 FUNC_4(&VAR_3->join.plan, &VAR_2->path);

 return VAR_3;
}
