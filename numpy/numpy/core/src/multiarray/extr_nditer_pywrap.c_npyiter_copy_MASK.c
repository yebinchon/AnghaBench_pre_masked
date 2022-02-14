
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int finished; int started; int * iter; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static PyObject *
FUNC_5(NewNpyArrayIterObject *VAR_2)
{
    NewNpyArrayIterObject *VAR_3;

    if (VAR_2->iter == ((void*)0)) {
        FUNC_1(VAR_1,
                "Iterator is invalid");
        return ((void*)0);
    }


    VAR_3 = (NewNpyArrayIterObject *)FUNC_4(&VAR_0, ((void*)0), ((void*)0));
    if (VAR_3 == ((void*)0)) {
        return ((void*)0);
    }


    VAR_3->iter = FUNC_0(VAR_2->iter);
    if (VAR_3->iter == ((void*)0)) {
        FUNC_2(VAR_3);
        return ((void*)0);
    }


    if (FUNC_3(VAR_3) < 0) {
        FUNC_2(VAR_3);
        return ((void*)0);
    }

    VAR_3->started = VAR_2->started;
    VAR_3->finished = VAR_2->finished;

    return (PyObject *)VAR_3;
}
