
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int natts; } ;
struct TYPE_6__ {int attname; } ;
struct TYPE_5__ {TYPE_4__* tupdesc; } ;
typedef int PyObject ;
typedef TYPE_1__ PLyResultObject ;
typedef TYPE_2__* Form_pg_attribute ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (TYPE_4__*,int) ;

__attribute__((used)) static PyObject *
FUNC_6(PyObject *VAR_1, PyObject *VAR_2)
{
 PLyResultObject *VAR_3 = (PLyResultObject *) VAR_1;
 PyObject *VAR_4;
 int VAR_5;

 if (!VAR_3->tupdesc)
 {
  FUNC_1(VAR_0, "command did not produce a result set");
  return ((void*)0);
 }

 VAR_4 = FUNC_2(VAR_3->tupdesc->natts);
 if (!VAR_4)
  return ((void*)0);
 for (VAR_5 = 0; VAR_5 < VAR_3->tupdesc->natts; VAR_5++)
 {
  Form_pg_attribute VAR_6 = FUNC_5(VAR_3->tupdesc, VAR_5);

  FUNC_3(VAR_4, VAR_5, FUNC_4(FUNC_0(VAR_6->attname)));
 }

 return VAR_4;
}
