
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef int TransactionId ;
struct TYPE_3__ {int es_snapshot; } ;
typedef int Relation ;
typedef TYPE_1__ EState ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,int*) ;
 int FUNC_8 (int ,int *,int ) ;

__attribute__((used)) static void
FUNC_9(EState *VAR_3,
       Relation VAR_4,
       TupleTableSlot *VAR_5)
{
 if (!FUNC_2())
  return;

 if (!FUNC_8(VAR_4, VAR_5, VAR_3->es_snapshot))
 {
  Datum VAR_6;
  TransactionId VAR_7;
  bool VAR_8;

  VAR_6 = FUNC_7(VAR_5, VAR_2, &VAR_8);
  FUNC_0(!VAR_8);
  VAR_7 = FUNC_1(VAR_6);







  if (!FUNC_3(VAR_7))
   FUNC_4(VAR_1,
     (FUNC_5(VAR_0),
      FUNC_6("could not serialize access due to concurrent update")));
 }
}
