
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int oldowner; int oldcontext; } ;
struct TYPE_4__ {int exited; int started; } ;
typedef int PyObject ;
typedef TYPE_1__ PLySubtransactionObject ;
typedef TYPE_2__ PLySubtransactionData ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,int **,int **,int **) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static PyObject *
FUNC_8(PyObject *VAR_6, PyObject *VAR_7)
{
 PyObject *VAR_8;
 PyObject *VAR_9;
 PyObject *VAR_10;
 PLySubtransactionData *VAR_11;
 PLySubtransactionObject *VAR_12 = (PLySubtransactionObject *) VAR_6;

 if (!FUNC_2(VAR_7, "OOO", &VAR_8, &VAR_9, &VAR_10))
  return ((void*)0);

 if (!VAR_12->started)
 {
  FUNC_1(VAR_2, "this subtransaction has not been entered");
  return ((void*)0);
 }

 if (VAR_12->exited)
 {
  FUNC_1(VAR_2, "this subtransaction has already been exited");
  return ((void*)0);
 }

 if (VAR_5 == VAR_1)
 {
  FUNC_1(VAR_2, "there is no subtransaction to exit from");
  return ((void*)0);
 }

 VAR_12->exited = 1;

 if (VAR_8 != VAR_3)
 {

  FUNC_4();
 }
 else
 {
  FUNC_3();
 }

 VAR_11 = (PLySubtransactionData *) FUNC_5(VAR_5);
 VAR_5 = FUNC_6(VAR_5);

 FUNC_0(VAR_11->oldcontext);
 VAR_0 = VAR_11->oldowner;
 FUNC_7(VAR_11);

 VAR_4;
}
