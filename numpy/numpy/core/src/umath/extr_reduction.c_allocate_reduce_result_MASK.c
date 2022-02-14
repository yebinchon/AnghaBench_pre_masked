
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int shape ;
struct TYPE_8__ {size_t perm; } ;
typedef TYPE_1__ npy_stride_sort_item ;
typedef size_t npy_intp ;
typedef scalar_t__ npy_bool ;
struct TYPE_9__ {size_t elsize; } ;
typedef int PyObject ;
typedef TYPE_2__ PyArray_Descr ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int FUNC_0 (int,int ,TYPE_1__*) ;
 size_t* FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,TYPE_2__*,int,size_t*,size_t*,int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_2__*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (size_t*,size_t*,int) ;

__attribute__((used)) static PyArrayObject *
FUNC_9(PyArrayObject *VAR_2, const npy_bool *VAR_3,
                        PyArray_Descr *VAR_4, int VAR_5)
{
    npy_intp VAR_6[VAR_0], VAR_7;
    npy_intp VAR_8[VAR_0], *VAR_9 = FUNC_1(VAR_2);
    npy_stride_sort_item VAR_10[VAR_0];
    int VAR_11, VAR_12 = FUNC_3(VAR_2);

    if (VAR_4 == ((void*)0)) {
        VAR_4 = FUNC_2(VAR_2);
        FUNC_6(VAR_4);
    }

    FUNC_0(FUNC_3(VAR_2),
                                    FUNC_5(VAR_2), VAR_10);


    VAR_7 = VAR_4->elsize;
    if (VAR_12) {
        FUNC_8(VAR_8, VAR_9, VAR_12 * sizeof(VAR_8[0]));
    }
    for (VAR_11 = VAR_12-1; VAR_11 >= 0; --VAR_11) {
        npy_intp VAR_13 = VAR_10[VAR_11].perm;
        if (VAR_3[VAR_13]) {
            VAR_6[VAR_13] = 0;
            VAR_8[VAR_13] = 1;
        }
        else {
            VAR_6[VAR_13] = VAR_7;
            VAR_7 *= VAR_8[VAR_13];
        }
    }


    return (PyArrayObject *)FUNC_4(
                                    VAR_5 ? FUNC_7(VAR_2) : &VAR_1,
                                    VAR_4, VAR_12, VAR_8, VAR_6,
                                    ((void*)0), 0, VAR_5 ? (PyObject *)VAR_2 : ((void*)0));
}
