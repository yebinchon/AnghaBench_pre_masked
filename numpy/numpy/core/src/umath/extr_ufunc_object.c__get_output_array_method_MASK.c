
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static PyObject *
FUNC_6(PyObject *VAR_2, PyObject *VAR_3,
                         PyObject *VAR_4) {
    if (VAR_2 != VAR_0) {
        PyObject *VAR_5;

        if (FUNC_0(VAR_2)) {




            VAR_1;
        }

        VAR_5 = FUNC_3(VAR_2, VAR_3);
        if (VAR_5 == ((void*)0)) {
            FUNC_2();
        }
        else if (!FUNC_1(VAR_5)) {
            FUNC_4(VAR_5);
        }
        else {

            return VAR_5;
        }
    }


    FUNC_5(VAR_4);
    return VAR_4;
}
