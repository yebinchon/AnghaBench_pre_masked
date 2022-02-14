
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rows; } ;
typedef int Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_1__ PLyResultObject ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static PyObject *
FUNC_2(PyObject *VAR_0, Py_ssize_t VAR_1)
{
 PyObject *VAR_2;
 PLyResultObject *VAR_3 = (PLyResultObject *) VAR_0;

 VAR_2 = FUNC_0(VAR_3->rows, VAR_1);
 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2);
 return VAR_2;
}
