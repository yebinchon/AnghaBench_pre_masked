
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_4(PyObject *VAR_2, PyArrayObject **VAR_3)
{
    if (VAR_2 == VAR_1) {

        return 0;
    }
    if (FUNC_0(VAR_2)) {

        if (FUNC_1((PyArrayObject *)VAR_2,
                                        "output array") < 0) {
            return -1;
        }
        FUNC_3(VAR_2);
        *VAR_3 = (PyArrayObject *)VAR_2;

        return 0;
    }
    FUNC_2(VAR_0, "return arrays must be of ArrayType");

    return -1;
}
