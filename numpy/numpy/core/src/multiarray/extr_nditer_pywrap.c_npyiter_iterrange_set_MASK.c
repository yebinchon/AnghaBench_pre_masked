
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ npy_intp ;
struct TYPE_4__ {int started; int finished; int * iter; int * get_multi_index; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__,int *) ;
 int FUNC_3 (int *,char*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(NewNpyArrayIterObject *VAR_3, PyObject *VAR_4)
{
    npy_intp VAR_5 = 0, VAR_6 = 0;

    if (VAR_4 == ((void*)0)) {
        FUNC_4(VAR_1,
                "Cannot delete nditer iterrange");
        return -1;
    }
    if (VAR_3->iter == ((void*)0)) {
        FUNC_4(VAR_2,
                "Iterator is invalid");
        return -1;
    }

    if (!FUNC_3(VAR_4, "nn", &VAR_5, &VAR_6)) {
        return -1;
    }

    if (FUNC_2(VAR_3->iter, VAR_5, VAR_6, ((void*)0))
                                                    != VAR_0) {
        return -1;
    }
    if (VAR_5 < VAR_6) {
        VAR_3->started = VAR_3->finished = 0;
    }
    else {
        VAR_3->started = VAR_3->finished = 1;
    }

    if (VAR_3->get_multi_index == ((void*)0) && FUNC_1(VAR_3->iter)) {
        VAR_3->get_multi_index = FUNC_0(VAR_3->iter, ((void*)0));
    }


    if (FUNC_5(VAR_3) != VAR_0) {
        return -1;
    }

    return 0;
}
