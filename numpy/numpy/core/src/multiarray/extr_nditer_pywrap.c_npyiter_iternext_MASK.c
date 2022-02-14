
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int finished; int * iter; scalar_t__ (* iternext ) (int *) ;} ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static PyObject *
FUNC_2(NewNpyArrayIterObject *VAR_3)
{
    if (VAR_3->iter != ((void*)0) && VAR_3->iternext != ((void*)0) &&
                        !VAR_3->finished && VAR_3->iternext(VAR_3->iter)) {

        if (FUNC_0(VAR_3) != VAR_0) {
            return ((void*)0);
        }

        VAR_2;
    }
    else {
        VAR_3->finished = 1;
        VAR_1;
    }
}
