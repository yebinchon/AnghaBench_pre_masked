
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * joininfo; int lateral_referencers; scalar_t__ has_eclass_joins; int lateral_relids; int baserestrictinfo; } ;
typedef int Relids ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Path ;
typedef int List ;


 int FUNC_0 (int *,TYPE_1__*,int *) ;
 int * FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int * FUNC_4 (int *,TYPE_1__*,int ,int *,int ) ;

void
FUNC_5(PlannerInfo *VAR_1, RelOptInfo *VAR_2)
{
 List *VAR_3;





 VAR_3 = FUNC_1(VAR_2->baserestrictinfo, VAR_2);

 if (VAR_3)
 {




  Relids VAR_4 = VAR_2->lateral_relids;

  FUNC_2(VAR_2, (Path *) FUNC_3(VAR_1, VAR_2, VAR_3,
               VAR_4));
 }






 if (VAR_2->has_eclass_joins)
 {
  List *VAR_5;


  VAR_5 = FUNC_4(VAR_1,
               VAR_2,
               VAR_0,
               ((void*)0),
               VAR_2->lateral_referencers);


  FUNC_0(VAR_1, VAR_2, VAR_5);
 }






 FUNC_0(VAR_1, VAR_2, VAR_2->joininfo);
}
