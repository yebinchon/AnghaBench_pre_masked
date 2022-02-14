
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * TupleDesc ;
struct TYPE_2__ {scalar_t__ prorettype; int prokind; } ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_proc ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ,int ,int*) ;
 int * FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int *) ;

TupleDesc
FUNC_6(HeapTuple VAR_5)
{
 Form_pg_proc VAR_6 = (Form_pg_proc) FUNC_1(VAR_5);
 Datum VAR_7;
 Datum VAR_8;
 Datum VAR_9;
 bool VAR_10;


 if (VAR_6->prorettype != VAR_4)
  return ((void*)0);


 if (FUNC_5(VAR_5, VAR_0, ((void*)0)) ||
  FUNC_5(VAR_5, VAR_1, ((void*)0)))
  return ((void*)0);


 VAR_7 = FUNC_3(VAR_3, VAR_5,
          VAR_0,
          &VAR_10);
 FUNC_0(!VAR_10);
 VAR_8 = FUNC_3(VAR_3, VAR_5,
          VAR_1,
          &VAR_10);
 FUNC_0(!VAR_10);
 VAR_9 = FUNC_3(VAR_3, VAR_5,
          VAR_2,
          &VAR_10);
 if (VAR_10)
  VAR_9 = FUNC_2(((void*)0));

 return FUNC_4(VAR_6->prokind,
             VAR_7,
             VAR_8,
             VAR_9);
}
