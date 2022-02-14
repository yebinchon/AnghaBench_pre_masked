
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int finished; int started; int * iter; int (* iternext ) (int *) ;} ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static PyObject *
FUNC_3(NewNpyArrayIterObject *VAR_1)
{
    if (VAR_1->iter == ((void*)0) || VAR_1->iternext == ((void*)0) ||
                VAR_1->finished) {
        return ((void*)0);
    }





    if (VAR_1->started) {
        if (!VAR_1->iternext(VAR_1->iter)) {
            VAR_1->finished = 1;
            return ((void*)0);
        }


        if (FUNC_0(VAR_1) != VAR_0) {
            return ((void*)0);
        }
    }
    VAR_1->started = 1;

    return FUNC_1(VAR_1);
}
