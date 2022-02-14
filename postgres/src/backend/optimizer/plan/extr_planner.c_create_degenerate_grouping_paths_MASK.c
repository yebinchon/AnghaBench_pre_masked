
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* parse; } ;
struct TYPE_13__ {scalar_t__ havingQual; int groupingSets; } ;
struct TYPE_12__ {int reltarget; } ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__ Query ;
typedef TYPE_3__ PlannerInfo ;
typedef int Path ;
typedef int List ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_1__*,int *,int *,int *,int *,int ,int,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_1__*,int ,int *) ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(PlannerInfo *VAR_1, RelOptInfo *VAR_2,
         RelOptInfo *VAR_3)
{
 Query *VAR_4 = VAR_1->parse;
 int VAR_5;
 Path *VAR_6;

 VAR_5 = FUNC_4(VAR_4->groupingSets);
 if (VAR_5 > 1)
 {







  List *VAR_7 = VAR_0;

  while (--VAR_5 >= 0)
  {
   VAR_6 = (Path *)
    FUNC_2(VAR_1, VAR_3,
           VAR_3->reltarget,
           (List *) VAR_4->havingQual);
   VAR_7 = FUNC_3(VAR_7, VAR_6);
  }
  VAR_6 = (Path *)
   FUNC_1(VAR_1,
          VAR_3,
          VAR_7,
          VAR_0,
          VAR_0,
          ((void*)0),
          0,
          0,
          VAR_0,
          -1);
 }
 else
 {

  VAR_6 = (Path *)
   FUNC_2(VAR_1, VAR_3,
          VAR_3->reltarget,
          (List *) VAR_4->havingQual);
 }

 FUNC_0(VAR_3, VAR_6);
}
