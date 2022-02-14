
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* subarray; } ;
struct TYPE_6__ {TYPE_2__* base; } ;
typedef int PyObject ;
typedef TYPE_2__ PyArray_Descr ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static PyObject *
FUNC_2(PyArray_Descr *VAR_0)
{
    if (!FUNC_0(VAR_0)) {
        FUNC_1(VAR_0);
        return (PyObject *)VAR_0;
    }
    FUNC_1(VAR_0->subarray->base);
    return (PyObject *)(VAR_0->subarray->base);
}
