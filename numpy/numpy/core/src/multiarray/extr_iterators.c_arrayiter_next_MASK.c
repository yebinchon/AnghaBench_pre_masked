
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ index; scalar_t__ size; int ao; int dataptr; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArrayIterObject ;


 int FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (int ,int ) ;

__attribute__((used)) static PyObject *
FUNC_2(PyArrayIterObject *VAR_0)
{
    PyObject *VAR_1;

    if (VAR_0->index < VAR_0->size) {
        VAR_1 = FUNC_1(VAR_0->dataptr, VAR_0->ao);
        FUNC_0(VAR_0);
        return VAR_1;
    }
    return ((void*)0);
}
