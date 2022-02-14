
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_intp ;
typedef int npy_bool ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__* FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ,int ,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int,scalar_t__*,int *,int *,int ,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int,char*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_11(PyObject *VAR_7, PyArrayObject **VAR_8)
{
    PyArray_Descr *VAR_9;
    PyArrayObject *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    int VAR_12, VAR_13;
    npy_intp VAR_14, VAR_15, VAR_16;
    npy_bool *VAR_17;
    npy_intp VAR_18[VAR_5], VAR_19[VAR_5];
    npy_intp *VAR_20[VAR_5];
    static npy_intp VAR_21 = 1;
    VAR_1;

    VAR_9=FUNC_3(VAR_2);
    VAR_10 = (PyArrayObject *)FUNC_4(VAR_7, VAR_9, 0, 0,
                                          VAR_0, ((void*)0));
    if (VAR_10 == ((void*)0)) {
        return -1;
    }
    VAR_12 = FUNC_5(VAR_10);

    for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
        VAR_8[VAR_13] = ((void*)0);
    }
    VAR_14 = FUNC_7(VAR_10);
    VAR_17 = (npy_bool *)FUNC_1(VAR_10);





    VAR_16 = FUNC_10(1, (char*)VAR_17, &VAR_14, &VAR_21);


    for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
        VAR_11 = (PyArrayObject *)FUNC_6(
            &VAR_6, FUNC_3(VAR_4),
            1, &VAR_16, ((void*)0), ((void*)0),
            0, ((void*)0));
        if (VAR_11 == ((void*)0)) {
            goto fail;
        }
        VAR_8[VAR_13] = VAR_11;

        VAR_20[VAR_13] = (npy_intp *)FUNC_1(VAR_11);
        VAR_18[VAR_13] = 0;
        VAR_19[VAR_13] = FUNC_2(VAR_10)[VAR_13]-1;
    }
    if (VAR_16 == 0) {
        goto finish;
    }





    FUNC_0(VAR_14);
    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
        if (*(VAR_17++)) {
            for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
                *(VAR_20[VAR_13]++) = VAR_18[VAR_13];
            }
        }

        for (VAR_13 = VAR_12 - 1; VAR_13 >= 0; VAR_13--) {
            if (VAR_18[VAR_13] < VAR_19[VAR_13]) {
                VAR_18[VAR_13]++;
                break;
            }
            else {
                VAR_18[VAR_13] = 0;
            }
        }
    }
    VAR_3;

 finish:
    FUNC_8(VAR_10);
    return VAR_12;

 fail:
    for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
        FUNC_9(VAR_8[VAR_13]);
    }
    FUNC_9(VAR_10);
    return -1;
}
