
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* subarray; } ;
struct TYPE_5__ {int * shape; } ;
typedef int PyObject ;
typedef TYPE_2__ PyArray_Descr ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static PyObject *
FUNC_5(PyArray_Descr *VAR_0)
{
    if (!FUNC_0(VAR_0)) {
        return FUNC_2(0);
    }
    FUNC_4(FUNC_1(VAR_0->subarray->shape));
    FUNC_3(VAR_0->subarray->shape);
    return VAR_0->subarray->shape;
}
