
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (scalar_t__) ;

__attribute__((used)) static PyObject *
FUNC_4(PyArrayObject *VAR_2)
{

    Py_ssize_t VAR_3 = VAR_1 +
        FUNC_2(VAR_2) * sizeof(npy_intp) * 2;
    if (FUNC_0(VAR_2, VAR_0)) {
        VAR_3 += FUNC_1(VAR_2);
    }
    return FUNC_3(VAR_3);
}
