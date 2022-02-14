
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* TupleDesc ;
struct TYPE_8__ {int relid; } ;
struct TYPE_7__ {TYPE_1__* constr; } ;
struct TYPE_6__ {scalar_t__ has_generated_stored; } ;
typedef int Relation ;
typedef TYPE_3__ RangeTblEntry ;
typedef int PlannerInfo ;
typedef int Index ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

bool
FUNC_4(PlannerInfo *VAR_1, Index VAR_2)
{
 RangeTblEntry *VAR_3 = FUNC_1(VAR_2, VAR_1);
 Relation VAR_4;
 TupleDesc VAR_5;
 bool VAR_6 = 0;


 VAR_4 = FUNC_3(VAR_3->relid, VAR_0);

 VAR_5 = FUNC_0(VAR_4);
 VAR_6 = VAR_5->constr && VAR_5->constr->has_generated_stored;

 FUNC_2(VAR_4, VAR_0);

 return VAR_6;
}
