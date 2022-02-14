
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int n_members; TYPE_1__** members; } ;
struct TYPE_10__ {scalar_t__ amopmethod; int amoprighttype; int amoplefttype; int amopfamily; scalar_t__ amopstrategy; } ;
struct TYPE_9__ {int strategy; int oprighttype; int oplefttype; int opfamily_id; } ;
struct TYPE_8__ {int tuple; } ;
typedef int StrategyNumber ;
typedef TYPE_2__ OpBtreeInterpretation ;
typedef int Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_3__* Form_pg_amop ;
typedef TYPE_4__ CatCList ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int * VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_8 (int) ;

List *
FUNC_9(Oid VAR_5)
{
 List *VAR_6 = VAR_3;
 OpBtreeInterpretation *VAR_7;
 CatCList *VAR_8;
 int VAR_9;




 VAR_8 = FUNC_5(VAR_0, FUNC_2(VAR_5));

 for (VAR_9 = 0; VAR_9 < VAR_8->n_members; VAR_9++)
 {
  HeapTuple VAR_10 = &VAR_8->members[VAR_9]->tuple;
  Form_pg_amop VAR_11 = (Form_pg_amop) FUNC_1(VAR_10);
  StrategyNumber VAR_12;


  if (VAR_11->amopmethod != VAR_2)
   continue;


  VAR_12 = (StrategyNumber) VAR_11->amopstrategy;
  FUNC_0(VAR_12 >= 1 && VAR_12 <= 5);

  VAR_7 = (OpBtreeInterpretation *)
   FUNC_8(sizeof(OpBtreeInterpretation));
  VAR_7->opfamily_id = VAR_11->amopfamily;
  VAR_7->strategy = VAR_12;
  VAR_7->oplefttype = VAR_11->amoplefttype;
  VAR_7->oprighttype = VAR_11->amoprighttype;
  VAR_6 = FUNC_7(VAR_6, VAR_7);
 }

 FUNC_4(VAR_8);





 if (VAR_6 == VAR_3)
 {
  Oid VAR_13 = FUNC_6(VAR_5);

  if (FUNC_3(VAR_13))
  {
   VAR_8 = FUNC_5(VAR_0,
            FUNC_2(VAR_13));

   for (VAR_9 = 0; VAR_9 < VAR_8->n_members; VAR_9++)
   {
    HeapTuple VAR_14 = &VAR_8->members[VAR_9]->tuple;
    Form_pg_amop VAR_15 = (Form_pg_amop) FUNC_1(VAR_14);
    StrategyNumber VAR_16;


    if (VAR_15->amopmethod != VAR_2)
     continue;


    VAR_16 = (StrategyNumber) VAR_15->amopstrategy;
    FUNC_0(VAR_16 >= 1 && VAR_16 <= 5);


    if (VAR_16 != VAR_1)
     continue;


    VAR_7 = (OpBtreeInterpretation *)
     FUNC_8(sizeof(OpBtreeInterpretation));
    VAR_7->opfamily_id = VAR_15->amopfamily;
    VAR_7->strategy = VAR_4;
    VAR_7->oplefttype = VAR_15->amoplefttype;
    VAR_7->oprighttype = VAR_15->amoprighttype;
    VAR_6 = FUNC_7(VAR_6, VAR_7);
   }

   FUNC_4(VAR_8);
  }
 }

 return VAR_6;
}
