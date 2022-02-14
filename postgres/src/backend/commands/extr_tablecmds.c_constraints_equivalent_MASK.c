
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_2__ {scalar_t__ condeferrable; scalar_t__ condeferred; } ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_constraint ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static bool
FUNC_3(HeapTuple VAR_0, HeapTuple VAR_1, TupleDesc VAR_2)
{
 Form_pg_constraint VAR_3 = (Form_pg_constraint) FUNC_0(VAR_0);
 Form_pg_constraint VAR_4 = (Form_pg_constraint) FUNC_0(VAR_1);

 if (VAR_3->condeferrable != VAR_4->condeferrable ||
  VAR_3->condeferred != VAR_4->condeferred ||
  FUNC_2(FUNC_1(VAR_0, VAR_2),
      FUNC_1(VAR_1, VAR_2)) != 0)
  return 0;
 else
  return 1;
}
