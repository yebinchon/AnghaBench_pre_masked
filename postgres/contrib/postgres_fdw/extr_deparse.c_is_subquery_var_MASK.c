
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int varno; } ;
typedef TYPE_1__ Var ;
struct TYPE_12__ {scalar_t__ make_innerrel_subquery; scalar_t__ make_outerrel_subquery; int lower_subquery_rels; TYPE_2__* innerrel; TYPE_2__* outerrel; } ;
struct TYPE_11__ {int relids; scalar_t__ fdw_private; } ;
typedef TYPE_2__ RelOptInfo ;
typedef TYPE_3__ PgFdwRelationInfo ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int*,int*) ;

__attribute__((used)) static bool
FUNC_5(Var *VAR_0, RelOptInfo *VAR_1, int *VAR_2, int *VAR_3)
{
 PgFdwRelationInfo *VAR_4 = (PgFdwRelationInfo *) VAR_1->fdw_private;
 RelOptInfo *VAR_5 = VAR_4->outerrel;
 RelOptInfo *VAR_6 = VAR_4->innerrel;


 FUNC_0(FUNC_2(VAR_1) || FUNC_1(VAR_1));





 if (!FUNC_1(VAR_1))
  return 0;





 if (!FUNC_3(VAR_0->varno, VAR_4->lower_subquery_rels))
  return 0;

 if (FUNC_3(VAR_0->varno, VAR_5->relids))
 {




  if (VAR_4->make_outerrel_subquery)
  {
   FUNC_4(VAR_0, VAR_5, VAR_2, VAR_3);
   return 1;
  }


  return FUNC_5(VAR_0, VAR_5, VAR_2, VAR_3);
 }
 else
 {
  FUNC_0(FUNC_3(VAR_0->varno, VAR_6->relids));





  if (VAR_4->make_innerrel_subquery)
  {
   FUNC_4(VAR_0, VAR_6, VAR_2, VAR_3);
   return 1;
  }


  return FUNC_5(VAR_0, VAR_6, VAR_2, VAR_3);
 }
}
