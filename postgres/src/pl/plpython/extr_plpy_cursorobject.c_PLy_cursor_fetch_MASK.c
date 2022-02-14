
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_15__ {int tupdesc; int * vals; } ;
struct TYPE_14__ {int result; int portalname; scalar_t__ closed; } ;
struct TYPE_13__ {int curr_proc; } ;
struct TYPE_12__ {struct TYPE_12__* rows; struct TYPE_12__* nrows; struct TYPE_12__* status; } ;
typedef int ResourceOwner ;
typedef int PyObject ;
typedef int Portal ;
typedef TYPE_1__ PLyResultObject ;
typedef TYPE_2__ PLyExecutionContext ;
typedef TYPE_3__ PLyCursorObject ;
typedef int MemoryContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int * FUNC_6 (int *,int ,int ,int) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int volatile,int volatile) ;
 int FUNC_10 (int volatile,int volatile) ;
 int FUNC_11 (int volatile,int volatile) ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,char*,int*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_14 (int ) ;
 TYPE_1__* FUNC_15 (scalar_t__) ;
 int FUNC_16 (TYPE_1__*,scalar_t__,int *) ;
 TYPE_1__* FUNC_17 (scalar_t__) ;
 int FUNC_18 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_19 (int ,int,int) ;
 int FUNC_20 (TYPE_4__*) ;
 scalar_t__ VAR_7 ;
 TYPE_4__* VAR_8 ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (char*) ;

__attribute__((used)) static PyObject *
FUNC_24(PyObject *VAR_9, PyObject *VAR_10)
{
 PLyCursorObject *VAR_11;
 int VAR_12;
 PLyResultObject *VAR_13;
 PLyExecutionContext *VAR_14 = FUNC_4();
 volatile MemoryContext VAR_15;
 volatile ResourceOwner VAR_16;
 Portal VAR_17;

 if (!FUNC_13(VAR_10, "i:fetch", &VAR_12))
  return ((void*)0);

 VAR_11 = (PLyCursorObject *) VAR_9;

 if (VAR_11->closed)
 {
  FUNC_5(VAR_5, "fetch from a closed cursor");
  return ((void*)0);
 }

 VAR_17 = FUNC_0(VAR_11->portalname);
 if (!FUNC_12(VAR_17))
 {
  FUNC_5(VAR_5,
        "iterating a cursor in an aborted subtransaction");
  return ((void*)0);
 }

 VAR_13 = (PLyResultObject *) FUNC_8();
 if (VAR_13 == ((void*)0))
  return ((void*)0);

 VAR_15 = VAR_0;
 VAR_16 = VAR_1;

 FUNC_10(VAR_15, VAR_16);

 FUNC_3();
 {
  FUNC_19(VAR_17, 1, VAR_12);

  FUNC_18(VAR_13->status);
  VAR_13->status = FUNC_14(VAR_6);

  FUNC_18(VAR_13->nrows);
  VAR_13->nrows = FUNC_17(VAR_7);

  if (VAR_7 != 0)
  {
   uint64 VAR_18;






   if (VAR_7 > (uint64) VAR_4)
    FUNC_21(VAR_3,
      (FUNC_22(VAR_2),
       FUNC_23("query result has too many rows to fit in a Python list")));

   FUNC_18(VAR_13->rows);
   VAR_13->rows = FUNC_15(VAR_7);
   if (!VAR_13->rows)
   {
    FUNC_18(VAR_13);
    VAR_13 = ((void*)0);
   }
   else
   {
    FUNC_7(&VAR_11->result, VAR_8->tupdesc,
           VAR_14->curr_proc);

    for (VAR_18 = 0; VAR_18 < VAR_7; VAR_18++)
    {
     PyObject *VAR_19 = FUNC_6(&VAR_11->result,
                 VAR_8->vals[VAR_18],
                 VAR_8->tupdesc,
                 1);

     FUNC_16(VAR_13->rows, VAR_18, VAR_19);
    }
   }
  }

  FUNC_20(VAR_8);

  FUNC_11(VAR_15, VAR_16);
 }
 FUNC_1();
 {
  FUNC_9(VAR_15, VAR_16);
  return ((void*)0);
 }
 FUNC_2();

 return (PyObject *) VAR_13;
}
