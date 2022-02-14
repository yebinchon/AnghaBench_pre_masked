
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int natts; } ;
struct TYPE_6__ {int atttypid; } ;
struct TYPE_5__ {TYPE_4__* tupdesc; } ;
typedef int PyObject ;
typedef TYPE_1__ PLyResultObject ;
typedef TYPE_2__* Form_pg_attribute ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int,int ) ;
 TYPE_2__* FUNC_4 (TYPE_4__*,int) ;

__attribute__((used)) static PyObject *
FUNC_5(PyObject *VAR_1, PyObject *VAR_2)
{
 PLyResultObject *VAR_3 = (PLyResultObject *) VAR_1;
 PyObject *VAR_4;
 int VAR_5;

 if (!VAR_3->tupdesc)
 {
  FUNC_0(VAR_0, "command did not produce a result set");
  return ((void*)0);
 }

 VAR_4 = FUNC_2(VAR_3->tupdesc->natts);
 if (!VAR_4)
  return ((void*)0);
 for (VAR_5 = 0; VAR_5 < VAR_3->tupdesc->natts; VAR_5++)
 {
  Form_pg_attribute VAR_6 = FUNC_4(VAR_3->tupdesc, VAR_5);

  FUNC_3(VAR_4, VAR_5, FUNC_1(VAR_6->atttypid));
 }

 return VAR_4;
}
