
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dv_refcount; } ;
typedef TYPE_1__ dict_T ;
typedef int PyTypeObject ;
typedef int PyObject ;
typedef int DictionaryObject ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 int * FUNC_1 (int *,int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 () ;

__attribute__((used)) static PyObject *
FUNC_5(PyTypeObject *VAR_0, PyObject *VAR_1, PyObject *VAR_2)
{
    DictionaryObject *VAR_3;
    dict_T *VAR_4;

    if (!(VAR_4 = FUNC_4()))
 return ((void*)0);

    VAR_3 = (DictionaryObject *) FUNC_0(VAR_0, VAR_4);

    --VAR_4->dv_refcount;

    if (VAR_2 || FUNC_2(VAR_1))
    {
 PyObject *VAR_5;
 if (!(VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_2)))
 {
     FUNC_3(VAR_3);
     return ((void*)0);
 }

 FUNC_3(VAR_5);
    }

    return (PyObject *)(VAR_3);
}
