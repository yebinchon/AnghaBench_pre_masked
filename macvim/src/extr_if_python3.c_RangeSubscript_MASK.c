
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ start; scalar_t__ end; } ;
typedef TYPE_1__ RangeObject ;
typedef int Py_ssize_t ;
typedef int PySliceObject_T ;
typedef int PyObject ;


 long FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*,long) ;
 int * FUNC_6 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static PyObject *
FUNC_7(PyObject *VAR_0, PyObject* VAR_1)
{
    if (FUNC_1(VAR_1))
    {
 long VAR_2 = FUNC_0(VAR_1);
 return FUNC_5((RangeObject *)(VAR_0), VAR_2);
    } else if (FUNC_2(VAR_1))
    {
 Py_ssize_t VAR_3, VAR_4, VAR_5, VAR_6;

 if (FUNC_3((PySliceObject_T *)VAR_1,
  ((RangeObject *)(VAR_0))->end-((RangeObject *)(VAR_0))->start+1,
  &VAR_3, &VAR_4,
  &VAR_5, &VAR_6) < 0)
 {
     return ((void*)0);
 }
 return FUNC_6((RangeObject *)(VAR_0), VAR_3, VAR_4);
    }
    else
    {
 FUNC_4(VAR_1);
 return ((void*)0);
    }
}
