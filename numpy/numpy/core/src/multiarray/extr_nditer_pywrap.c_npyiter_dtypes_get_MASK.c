
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t npy_intp ;
struct TYPE_3__ {int ** dtypes; int * iter; } ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef TYPE_1__ NewNpyArrayIterObject ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,size_t,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static PyObject *FUNC_5(NewNpyArrayIterObject *VAR_1)
{
    PyObject *VAR_2;

    npy_intp VAR_3, VAR_4;
    PyArray_Descr **VAR_5;

    if (VAR_1->iter == ((void*)0)) {
        FUNC_1(VAR_0,
                "Iterator is invalid");
        return ((void*)0);
    }
    VAR_4 = FUNC_0(VAR_1->iter);

    VAR_2 = FUNC_2(VAR_4);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    VAR_5 = VAR_1->dtypes;
    for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
        PyArray_Descr *VAR_6 = VAR_5[VAR_3];

        FUNC_4(VAR_6);
        FUNC_3(VAR_2, VAR_3, (PyObject *)VAR_6);
    }

    return VAR_2;
}
