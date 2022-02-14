
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;

__attribute__((used)) static int
FUNC_6(PyArrayObject *VAR_2, PyObject *VAR_3)
{
    if (VAR_3 == ((void*)0)) {
        FUNC_3(VAR_0,
                "Cannot delete array imaginary part");
        return -1;
    }
    if (FUNC_1(VAR_2)) {
        PyArrayObject *VAR_4;
        PyArrayObject *VAR_5;
        int VAR_6;

        VAR_4 = FUNC_5(VAR_2, 1);
        if (VAR_4 == ((void*)0)) {
            return -1;
        }
        VAR_5 = (PyArrayObject *)FUNC_0(VAR_3);
        if (VAR_5 == ((void*)0)) {
            FUNC_4(VAR_4);
            return -1;
        }
        VAR_6 = FUNC_2(VAR_4, VAR_5);
        FUNC_4(VAR_4);
        FUNC_4(VAR_5);
        return VAR_6;
    }
    else {
        FUNC_3(VAR_1,
                "array does not have imaginary part to set");
        return -1;
    }
}
