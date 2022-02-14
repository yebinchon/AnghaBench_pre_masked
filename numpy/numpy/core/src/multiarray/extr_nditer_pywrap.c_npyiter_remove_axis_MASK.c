
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int started; int finished; int * iter; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static PyObject *
FUNC_5(NewNpyArrayIterObject *VAR_3, PyObject *VAR_4)
{
    int VAR_5 = 0;

    if (VAR_3->iter == ((void*)0)) {
        FUNC_3(VAR_1,
                "Iterator is invalid");
        return ((void*)0);
    }

    if (!FUNC_2(VAR_4, "i:remove_axis", &VAR_5)) {
        return ((void*)0);
    }

    if (FUNC_1(VAR_3->iter, VAR_5) != VAR_0) {
        return ((void*)0);
    }

    if (FUNC_4(VAR_3) < 0) {
        return ((void*)0);
    }

    if (FUNC_0(VAR_3->iter) == 0) {
        VAR_3->started = 1;
        VAR_3->finished = 1;
    }
    else {
        VAR_3->started = 0;
        VAR_3->finished = 0;
    }

    VAR_2;
}
