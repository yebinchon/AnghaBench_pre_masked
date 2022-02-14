
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int started; int finished; int * iter; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static PyObject *
FUNC_4(NewNpyArrayIterObject *VAR_2)
{
    if (VAR_2->iter == ((void*)0)) {
        FUNC_2(VAR_0,
                "Iterator is invalid");
        return ((void*)0);
    }

    FUNC_1(VAR_2->iter);

    FUNC_3(VAR_2);

    if (FUNC_0(VAR_2->iter) == 0) {
        VAR_2->started = 1;
        VAR_2->finished = 1;
    }
    else {
        VAR_2->started = 0;
        VAR_2->finished = 0;
    }

    VAR_1;
}
