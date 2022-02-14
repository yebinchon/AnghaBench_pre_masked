
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int end; int start; int buf; } ;
typedef TYPE_1__ RangeObject ;
typedef int Py_ssize_t ;
typedef int PyObject ;


 int FUNC_0 (int ,int ,int ,int *,int ,int ,int *) ;

__attribute__((used)) static Py_ssize_t
FUNC_1(PyObject *VAR_0, Py_ssize_t VAR_1, Py_ssize_t VAR_2, PyObject *VAR_3)
{
    return FUNC_0(((RangeObject *)(VAR_0))->buf, VAR_1, VAR_2, VAR_3,
      ((RangeObject *)(VAR_0))->start,
      ((RangeObject *)(VAR_0))->end,
      &((RangeObject *)(VAR_0))->end);
}
