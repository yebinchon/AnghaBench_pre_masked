
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int end; int start; int buf; } ;
typedef TYPE_1__ RangeObject ;
typedef int PyObject ;
typedef int PyInt ;


 int FUNC_0 (int ,int ,int *,int ,int ,int *) ;

__attribute__((used)) static PyInt
FUNC_1(PyObject *VAR_0, PyInt VAR_1, PyObject *VAR_2)
{
    return FUNC_0(((RangeObject *)(VAR_0))->buf, VAR_1, VAR_2,
       ((RangeObject *)(VAR_0))->start,
       ((RangeObject *)(VAR_0))->end,
       &((RangeObject *)(VAR_0))->end);
}
