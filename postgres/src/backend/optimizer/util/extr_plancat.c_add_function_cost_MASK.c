
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int procost; int prosupport; } ;
struct TYPE_7__ {int per_tuple; int startup; } ;
struct TYPE_6__ {scalar_t__ per_tuple; scalar_t__ startup; int * node; int funcid; int * root; int type; } ;
typedef TYPE_1__ SupportRequestCost ;
typedef TYPE_2__ QualCost ;
typedef int PlannerInfo ;
typedef int Oid ;
typedef int Node ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_proc ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ,char*,int ) ;

void
FUNC_10(PlannerInfo *VAR_4, Oid VAR_5, Node *VAR_6,
      QualCost *VAR_7)
{
 HeapTuple VAR_8;
 Form_pg_proc VAR_9;

 VAR_8 = FUNC_8(VAR_1, FUNC_3(VAR_5));
 if (!FUNC_2(VAR_8))
  FUNC_9(VAR_0, "cache lookup failed for function %u", VAR_5);
 VAR_9 = (Form_pg_proc) FUNC_1(VAR_8);

 if (FUNC_5(VAR_9->prosupport))
 {
  SupportRequestCost VAR_10;
  SupportRequestCost *VAR_11;

  VAR_10.type = VAR_2;
  VAR_10.root = VAR_4;
  VAR_10.funcid = VAR_5;
  VAR_10.node = VAR_6;


  VAR_10.startup = 0;
  VAR_10.per_tuple = 0;

  VAR_11 = (SupportRequestCost *)
   FUNC_0(FUNC_4(VAR_9->prosupport,
            FUNC_6(&VAR_10)));

  if (VAR_11 == &VAR_10)
  {

   VAR_7->startup += VAR_10.startup;
   VAR_7->per_tuple += VAR_10.per_tuple;
   FUNC_7(VAR_8);
   return;
  }
 }


 VAR_7->per_tuple += VAR_9->procost * VAR_3;

 FUNC_7(VAR_8);
}
