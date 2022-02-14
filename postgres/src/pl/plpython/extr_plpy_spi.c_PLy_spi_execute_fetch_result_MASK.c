
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_13__ {int curr_proc; } ;
struct TYPE_12__ {struct TYPE_12__* rows; int tupdesc; struct TYPE_12__* nrows; struct TYPE_12__* status; } ;
struct TYPE_11__ {int tupdesc; int * vals; } ;
typedef TYPE_1__ SPITupleTable ;
typedef int PyObject ;
typedef TYPE_2__ PLyResultObject ;
typedef TYPE_3__ PLyExecutionContext ;
typedef int PLyDatumToOb ;
typedef int volatile MemoryContext ;


 int VAR_0 ;
 int volatile FUNC_0 (int volatile,char*,int ) ;
 int FUNC_1 (int ) ;
 int volatile VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int volatile) ;
 int volatile FUNC_3 (int volatile) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_3__* FUNC_8 () ;
 int * FUNC_9 (int *,int ,int ,int) ;
 int FUNC_10 (int *,int volatile,int ,int,int ) ;
 int FUNC_11 (int *,int ,int ) ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_13 (int) ;
 TYPE_2__* FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_2__*,scalar_t__,int *) ;
 void* FUNC_16 (scalar_t__) ;
 int FUNC_17 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_18 (TYPE_1__*) ;
 int volatile VAR_6 ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (char*) ;

__attribute__((used)) static PyObject *
FUNC_22(SPITupleTable *VAR_7, uint64 VAR_8, int VAR_9)
{
 PLyResultObject *VAR_10;
 PLyExecutionContext *VAR_11 = FUNC_8();
 volatile MemoryContext VAR_12;

 VAR_10 = (PLyResultObject *) FUNC_12();
 if (!VAR_10)
 {
  FUNC_18(VAR_7);
  return ((void*)0);
 }
 FUNC_17(VAR_10->status);
 VAR_10->status = FUNC_13(VAR_9);

 if (VAR_9 > 0 && VAR_7 == ((void*)0))
 {
  FUNC_17(VAR_10->nrows);
  VAR_10->nrows = FUNC_16(VAR_8);
 }
 else if (VAR_9 > 0 && VAR_7 != ((void*)0))
 {
  PLyDatumToOb VAR_13;
  MemoryContext VAR_14;

  FUNC_17(VAR_10->nrows);
  VAR_10->nrows = FUNC_16(VAR_8);

  VAR_14 = FUNC_0(VAR_1,
         "PL/Python temp context",
         VAR_0);


  FUNC_10(&VAR_13, VAR_14, VAR_5, -1,
        VAR_11->curr_proc);

  VAR_12 = VAR_1;
  FUNC_7();
  {
   MemoryContext VAR_15;

   if (VAR_8)
   {
    uint64 VAR_16;






    if (VAR_8 > (uint64) VAR_4)
     FUNC_19(VAR_3,
       (FUNC_20(VAR_2),
        FUNC_21("query result has too many rows to fit in a Python list")));

    FUNC_17(VAR_10->rows);
    VAR_10->rows = FUNC_14(VAR_8);
    if (VAR_10->rows)
    {
     FUNC_11(&VAR_13, VAR_7->tupdesc,
            VAR_11->curr_proc);

     for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++)
     {
      PyObject *VAR_17 = FUNC_9(&VAR_13,
                  VAR_7->vals[VAR_16],
                  VAR_7->tupdesc,
                  1);

      FUNC_15(VAR_10->rows, VAR_16, VAR_17);
     }
    }
   }
   VAR_15 = FUNC_3(VAR_6);
   VAR_10->tupdesc = FUNC_1(VAR_7->tupdesc);
   FUNC_3(VAR_15);
  }
  FUNC_4();
  {
   FUNC_3(VAR_12);
   FUNC_2(VAR_14);
   FUNC_17(VAR_10);
   FUNC_6();
  }
  FUNC_5();

  FUNC_2(VAR_14);
  FUNC_18(VAR_7);


  if (!VAR_10->rows)
  {
   FUNC_17(VAR_10);
   VAR_10 = ((void*)0);
  }
 }

 return (PyObject *) VAR_10;
}
