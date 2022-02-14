
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;

__attribute__((used)) static PyObject *
FUNC_10(PyArrayObject *VAR_0)
{
    PyObject *VAR_1;
    PyObject *VAR_2;

    VAR_1 = FUNC_9(FUNC_0(VAR_0));
    if (VAR_1) {
        return VAR_1;
    }
    FUNC_1();


    VAR_2 = FUNC_5(2);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }
    FUNC_6(VAR_2, 0, FUNC_4(""));
    FUNC_6(VAR_2, 1, FUNC_8(VAR_0));
    VAR_1 = FUNC_2(1);
    if (VAR_1 == ((void*)0)) {
        FUNC_7(VAR_2);
        return ((void*)0);
    }
    FUNC_3(VAR_1, 0, VAR_2);
    return VAR_1;
}
