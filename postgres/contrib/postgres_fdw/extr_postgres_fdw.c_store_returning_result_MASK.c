
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_3__ {int temp_cxt; int retrieved_attrs; int attinmeta; int rel; } ;
typedef TYPE_1__ PgFdwModifyState ;
typedef int PGresult ;
typedef int HeapTuple ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ,int ,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_7(PgFdwModifyState *VAR_0,
        TupleTableSlot *VAR_1, PGresult *VAR_2)
{
 FUNC_4();
 {
  HeapTuple VAR_3;

  VAR_3 = FUNC_6(VAR_2, 0,
           VAR_0->rel,
           VAR_0->attinmeta,
           VAR_0->retrieved_attrs,
           ((void*)0),
           VAR_0->temp_cxt);





  FUNC_0(VAR_3, VAR_1, 1);
 }
 FUNC_1();
 {
  if (VAR_2)
   FUNC_5(VAR_2);
  FUNC_3();
 }
 FUNC_2();
}
