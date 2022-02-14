
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int **) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static PyArrayObject *
FUNC_10(PyObject *VAR_4) {
    PyArrayObject *VAR_5;

    if (!FUNC_0(VAR_4)) {

        PyArray_Descr *VAR_6 = ((void*)0);
        if (FUNC_1(VAR_4, VAR_2, &VAR_6) < 0) {
            return ((void*)0);
        }
        if (VAR_6 == ((void*)0)) {
            if (FUNC_6(VAR_4) && FUNC_7(VAR_4) == 0) {
                FUNC_5(VAR_3, VAR_0);
            }
            return ((void*)0);
        }
        VAR_5 = (PyArrayObject*)FUNC_2(VAR_4, VAR_6, 0, 0, 0, ((void*)0));
        if (VAR_5 == ((void*)0)) {
            return ((void*)0);
        }
    }
    else {
        VAR_5 = (PyArrayObject *)VAR_4;
        FUNC_9(VAR_5);
    }

    if (!(FUNC_4(VAR_5) || FUNC_3(VAR_5))) {

        FUNC_5(VAR_3, VAR_1);
        FUNC_8(VAR_5);
        return ((void*)0);
    }

    return VAR_5;
}
