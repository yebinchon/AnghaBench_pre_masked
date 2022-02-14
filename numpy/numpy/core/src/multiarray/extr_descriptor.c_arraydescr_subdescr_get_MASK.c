
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* subarray; } ;
struct TYPE_5__ {int shape; scalar_t__ base; } ;
typedef int PyObject ;
typedef TYPE_2__ PyArray_Descr ;


 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (char*,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_2(PyArray_Descr *VAR_1)
{
    if (!FUNC_0(VAR_1)) {
        VAR_0;
    }
    return FUNC_1("OO",
            (PyObject *)VAR_1->subarray->base, VAR_1->subarray->shape);
}
