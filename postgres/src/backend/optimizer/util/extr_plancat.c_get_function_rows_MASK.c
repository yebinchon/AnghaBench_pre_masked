
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {double prorows; int prosupport; int proretset; } ;
struct TYPE_4__ {double rows; int * node; int funcid; int * root; int type; } ;
typedef TYPE_1__ SupportRequestRows ;
typedef int PlannerInfo ;
typedef int Oid ;
typedef int Node ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_2 ;
 int FUNC_10 (int ,char*,int ) ;

double
FUNC_11(PlannerInfo *VAR_3, Oid VAR_4, Node *VAR_5)
{
 HeapTuple VAR_6;
 Form_pg_proc VAR_7;
 double VAR_8;

 VAR_6 = FUNC_9(VAR_1, FUNC_4(VAR_4));
 if (!FUNC_3(VAR_6))
  FUNC_10(VAR_0, "cache lookup failed for function %u", VAR_4);
 VAR_7 = (Form_pg_proc) FUNC_2(VAR_6);

 FUNC_0(VAR_7->proretset);

 if (FUNC_6(VAR_7->prosupport))
 {
  SupportRequestRows VAR_9;
  SupportRequestRows *VAR_10;

  VAR_9.type = VAR_2;
  VAR_9.root = VAR_3;
  VAR_9.funcid = VAR_4;
  VAR_9.node = VAR_5;

  VAR_9.rows = 0;

  VAR_10 = (SupportRequestRows *)
   FUNC_1(FUNC_5(VAR_7->prosupport,
            FUNC_7(&VAR_9)));

  if (VAR_10 == &VAR_9)
  {

   FUNC_8(VAR_6);
   return VAR_9.rows;
  }
 }


 VAR_8 = VAR_7->prorows;

 FUNC_8(VAR_6);

 return VAR_8;
}
