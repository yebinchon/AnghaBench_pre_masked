
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dv_refcount; } ;
typedef TYPE_1__ dict_T ;
struct TYPE_9__ {int ref; TYPE_1__* dict; } ;
struct TYPE_8__ {scalar_t__ (* tp_alloc ) (TYPE_2__*,int ) ;} ;
typedef TYPE_2__ PyTypeObject ;
typedef int PyObject ;
typedef TYPE_3__ DictionaryObject ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static PyObject *
FUNC_2(PyTypeObject *VAR_1, dict_T *VAR_2)
{
    DictionaryObject *VAR_3;

    VAR_3 = (DictionaryObject *) VAR_1->tp_alloc(VAR_1, 0);
    if (VAR_3 == ((void*)0))
 return ((void*)0);
    VAR_3->dict = VAR_2;
    ++VAR_2->dv_refcount;

    FUNC_0((PyObject *)(VAR_3), &VAR_3->ref, &VAR_0);

    return (PyObject *)(VAR_3);
}
