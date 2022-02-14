
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;


typedef TYPE_4__* TupleDesc ;
struct TYPE_22__ {scalar_t__ tupdescid; scalar_t__ natts; TYPE_4__* recdesc; TYPE_1__* typentry; } ;
struct TYPE_23__ {TYPE_2__ tuple; } ;
struct TYPE_25__ {scalar_t__ typoid; TYPE_3__ u; int typmod; } ;
struct TYPE_24__ {scalar_t__ natts; } ;
struct TYPE_21__ {scalar_t__ tupDesc_identifier; TYPE_4__* tupDesc; } ;
struct TYPE_20__ {int curr_proc; } ;
typedef int PyObject ;
typedef TYPE_5__ PLyObToDatum ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,int *,int) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_5__*,TYPE_4__*,int *) ;
 int FUNC_4 (TYPE_5__*,int *,int) ;
 TYPE_11__* FUNC_5 () ;
 int FUNC_6 (TYPE_5__*,TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_12 (TYPE_4__*) ;
 TYPE_4__* FUNC_13 (scalar_t__,int ) ;

__attribute__((used)) static Datum
FUNC_14(PLyObToDatum *VAR_2, PyObject *VAR_3,
       bool *VAR_4, bool VAR_5)
{
 Datum VAR_6;
 TupleDesc VAR_7;

 if (VAR_3 == VAR_0)
 {
  *VAR_4 = 1;
  return (Datum) 0;
 }
 *VAR_4 = 0;





 if (FUNC_10(VAR_3) || FUNC_11(VAR_3))
  return FUNC_4(VAR_2, VAR_3, VAR_5);







 if (VAR_2->typoid != VAR_1)
 {
  VAR_7 = FUNC_13(VAR_2->typoid, VAR_2->typmod);

  FUNC_0(VAR_7 == VAR_2->u.tuple.typentry->tupDesc);

  if (VAR_2->u.tuple.tupdescid != VAR_2->u.tuple.typentry->tupDesc_identifier)
  {
   FUNC_6(VAR_2, VAR_7,
           FUNC_5()->curr_proc);
   VAR_2->u.tuple.tupdescid = VAR_2->u.tuple.typentry->tupDesc_identifier;
  }
 }
 else
 {
  VAR_7 = VAR_2->u.tuple.recdesc;
  if (VAR_7 == ((void*)0))
  {
   VAR_7 = FUNC_13(VAR_2->typoid, VAR_2->typmod);
   VAR_2->u.tuple.recdesc = VAR_7;
  }
  else
  {

   FUNC_7(VAR_7);
  }
 }


 FUNC_0(VAR_7->natts == VAR_2->u.tuple.natts);





 if (FUNC_9(VAR_3))

  VAR_6 = FUNC_3(VAR_2, VAR_7, VAR_3);
 else if (FUNC_8(VAR_3))

  VAR_6 = FUNC_2(VAR_2, VAR_7, VAR_3);
 else

  VAR_6 = FUNC_1(VAR_2, VAR_7, VAR_3, VAR_5);

 FUNC_12(VAR_7);

 return VAR_6;
}
