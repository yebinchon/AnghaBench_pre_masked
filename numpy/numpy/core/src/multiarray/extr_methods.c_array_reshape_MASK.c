
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int PyArray_Dims ;
typedef int PyArrayObject ;
typedef int NPY_ORDER ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char**,int ,int *) ;
 int FUNC_1 (int *,char*,int (*) (int *,int *),int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int *,int ) ;
 int VAR_1 ;
 int * FUNC_4 (int *,int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static PyObject *
FUNC_10(PyArrayObject *VAR_4, PyObject *VAR_5, PyObject *VAR_6)
{
    static char *VAR_7[] = {"order", ((void*)0)};
    PyArray_Dims VAR_8;
    PyObject *VAR_9;
    NPY_ORDER VAR_10 = VAR_0;
    Py_ssize_t VAR_11 = FUNC_8(VAR_5);

    if (!FUNC_0(VAR_6, "|O&", VAR_7,
                VAR_1, &VAR_10)) {
        return ((void*)0);
    }

    if (VAR_11 <= 1) {
        if (VAR_11 != 0 && FUNC_7(VAR_5, 0) == VAR_3) {
            return FUNC_4(VAR_4, ((void*)0), ((void*)0));
        }
        if (!FUNC_1(VAR_5, "O&:reshape", FUNC_2,
                              &VAR_8)) {
            return ((void*)0);
        }
    }
    else {
        if (!FUNC_2(VAR_5, &VAR_8)) {
            if (!FUNC_5()) {
                FUNC_6(VAR_2,
                                "invalid shape");
            }
            goto fail;
        }
    }
    VAR_9 = FUNC_3(VAR_4, &VAR_8, VAR_10);
    FUNC_9(VAR_8);
    return VAR_9;

 fail:
    FUNC_9(VAR_8);
    return ((void*)0);
}
