
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_8__ {int attlen; int attbyval; } ;
struct TYPE_7__ {int natts; } ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int,TYPE_1__*,int*) ;

__attribute__((used)) static bool
FUNC_5(TupleDesc VAR_1, int VAR_2,
        HeapTuple VAR_3, HeapTuple VAR_4)
{
 Datum VAR_5,
    VAR_6;
 bool VAR_7,
    VAR_8;
 Form_pg_attribute VAR_9;






 if (VAR_2 == 0)
  return 0;






 if (VAR_2 < 0)
 {
  if (VAR_2 != VAR_0)
   return 0;
 }







 VAR_5 = FUNC_4(VAR_3, VAR_2, VAR_1, &VAR_7);
 VAR_6 = FUNC_4(VAR_4, VAR_2, VAR_1, &VAR_8);





 if (VAR_7 != VAR_8)
  return 0;




 if (VAR_7)
  return 1;
 if (VAR_2 <= 0)
 {

  return (FUNC_1(VAR_5) == FUNC_1(VAR_6));
 }
 else
 {
  FUNC_0(VAR_2 <= VAR_1->natts);
  VAR_9 = FUNC_2(VAR_1, VAR_2 - 1);
  return FUNC_3(VAR_5, VAR_6, VAR_9->attbyval, VAR_9->attlen);
 }
}
