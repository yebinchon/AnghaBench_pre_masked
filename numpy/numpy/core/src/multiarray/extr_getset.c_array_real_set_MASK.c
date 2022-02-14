
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
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(PyArrayObject *VAR_1, PyObject *VAR_2)
{
    PyArrayObject *VAR_3;
    PyArrayObject *VAR_4;
    int VAR_5;

    if (VAR_2 == ((void*)0)) {
        FUNC_3(VAR_0,
                "Cannot delete array real part");
        return -1;
    }
    if (FUNC_1(VAR_1)) {
        VAR_3 = FUNC_6(VAR_1, 0);
        if (VAR_3 == ((void*)0)) {
            return -1;
        }
    }
    else {
        FUNC_5(VAR_1);
        VAR_3 = VAR_1;
    }
    VAR_4 = (PyArrayObject *)FUNC_0(VAR_2);
    if (VAR_4 == ((void*)0)) {
        FUNC_4(VAR_3);
        return -1;
    }
    VAR_5 = FUNC_2(VAR_3, VAR_4);
    FUNC_4(VAR_3);
    FUNC_4(VAR_4);
    return VAR_5;
}
