
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int oprcode; int oprcanhash; } ;
struct TYPE_4__ {scalar_t__ opno; int args; } ;
typedef TYPE_1__ OpExpr ;
typedef scalar_t__ Oid ;
typedef int Node ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_operator ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_11(OpExpr *VAR_3)
{
 Oid VAR_4 = VAR_3->opno;


 if (FUNC_9(VAR_3->args) != 2)
  return 0;
 if (VAR_4 == VAR_0)
 {


  Node *VAR_5 = FUNC_8(VAR_3->args);

  return FUNC_10(VAR_4, FUNC_6(VAR_5));
 }
 else
 {

  HeapTuple VAR_6;
  Form_pg_operator VAR_7;

  VAR_6 = FUNC_4(VAR_2, FUNC_2(VAR_4));
  if (!FUNC_1(VAR_6))
   FUNC_5(VAR_1, "cache lookup failed for operator %u", VAR_4);
  VAR_7 = (Form_pg_operator) FUNC_0(VAR_6);
  if (!VAR_7->oprcanhash || !FUNC_7(VAR_7->oprcode))
  {
   FUNC_3(VAR_6);
   return 0;
  }
  FUNC_3(VAR_6);
  return 1;
 }
}
