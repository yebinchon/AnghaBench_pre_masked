
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int npy_intp ;
struct TYPE_4__ {int * iter; scalar_t__ finished; } ;
typedef int PyObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static PyObject *FUNC_6(NewNpyArrayIterObject *VAR_1)
{
    PyObject *VAR_2;

    npy_intp VAR_3, VAR_4;

    if (VAR_1->iter == ((void*)0) || VAR_1->finished) {
        FUNC_1(VAR_0,
                "Iterator is past the end");
        return ((void*)0);
    }

    VAR_4 = FUNC_0(VAR_1->iter);


    if (VAR_4 == 1) {
        VAR_2 = FUNC_5(VAR_1, 0);
    }
    else {
        VAR_2 = FUNC_2(VAR_4);
        if (VAR_2 == ((void*)0)) {
            return ((void*)0);
        }
        for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
            PyObject *VAR_5 = FUNC_5(VAR_1, VAR_3);
            if (VAR_5 == ((void*)0)) {
                FUNC_4(VAR_2);
                return ((void*)0);
            }
            FUNC_3(VAR_2, VAR_3, VAR_5);
        }
    }

    return VAR_2;
}
