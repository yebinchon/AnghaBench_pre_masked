
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int tupdesc; int * vals; } ;
struct TYPE_7__ {int result; int portalname; scalar_t__ closed; } ;
struct TYPE_6__ {int curr_proc; } ;
typedef int ResourceOwner ;
typedef int PyObject ;
typedef int Portal ;
typedef TYPE_1__ PLyExecutionContext ;
typedef TYPE_2__ PLyCursorObject ;
typedef int MemoryContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int * FUNC_6 (int *,int ,int ,int) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int volatile,int volatile) ;
 int FUNC_9 (int volatile,int volatile) ;
 int FUNC_10 (int volatile,int volatile) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (TYPE_3__*) ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;

__attribute__((used)) static PyObject *
FUNC_15(PyObject *VAR_6)
{
 PLyCursorObject *VAR_7;
 PyObject *VAR_8;
 PLyExecutionContext *VAR_9 = FUNC_4();
 volatile MemoryContext VAR_10;
 volatile ResourceOwner VAR_11;
 Portal VAR_12;

 VAR_7 = (PLyCursorObject *) VAR_6;

 if (VAR_7->closed)
 {
  FUNC_5(VAR_3, "iterating a closed cursor");
  return ((void*)0);
 }

 VAR_12 = FUNC_0(VAR_7->portalname);
 if (!FUNC_11(VAR_12))
 {
  FUNC_5(VAR_3,
        "iterating a cursor in an aborted subtransaction");
  return ((void*)0);
 }

 VAR_10 = VAR_0;
 VAR_11 = VAR_1;

 FUNC_9(VAR_10, VAR_11);

 FUNC_3();
 {
  FUNC_13(VAR_12, 1, 1);
  if (VAR_4 == 0)
  {
   FUNC_12(VAR_2);
   VAR_8 = ((void*)0);
  }
  else
  {
   FUNC_7(&VAR_7->result, VAR_5->tupdesc,
          VAR_9->curr_proc);

   VAR_8 = FUNC_6(&VAR_7->result, VAR_5->vals[0],
            VAR_5->tupdesc, 1);
  }

  FUNC_14(VAR_5);

  FUNC_10(VAR_10, VAR_11);
 }
 FUNC_1();
 {
  FUNC_8(VAR_10, VAR_11);
  return ((void*)0);
 }
 FUNC_2();

 return VAR_8;
}
