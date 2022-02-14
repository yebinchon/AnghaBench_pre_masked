
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ npy_intp ;
struct TYPE_3__ {int * iter; } ;
typedef int PyObject ;
typedef int PyArrayObject ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 int * FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static PyObject *FUNC_6(NewNpyArrayIterObject *VAR_1)
{
    PyObject *VAR_2;

    npy_intp VAR_3, VAR_4;

    if (VAR_1->iter == ((void*)0)) {
        FUNC_2(VAR_0,
                "Iterator is invalid");
        return ((void*)0);
    }
    VAR_4 = FUNC_1(VAR_1->iter);

    VAR_2 = FUNC_3(VAR_4);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
        PyArrayObject *VAR_5 = FUNC_0(VAR_1->iter, VAR_3);

        if (VAR_5 == ((void*)0)) {
            FUNC_5(VAR_2);
            return ((void*)0);
        }
        FUNC_4(VAR_2, VAR_3, (PyObject *)VAR_5);
    }

    return VAR_2;
}
