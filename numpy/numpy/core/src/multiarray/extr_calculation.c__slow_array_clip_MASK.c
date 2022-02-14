
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int maximum; int minimum; } ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *,int *,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_4(PyArrayObject *VAR_1, PyObject *VAR_2, PyObject *VAR_3, PyArrayObject *VAR_4)
{
    PyObject *VAR_5=((void*)0), *VAR_6=((void*)0);

    if (VAR_3 != ((void*)0)) {
        VAR_5 = FUNC_3(VAR_1, VAR_3, VAR_4, VAR_0.minimum);
        if (VAR_5 == ((void*)0)) {
            return ((void*)0);
        }
    }
    else {
        VAR_5 = (PyObject *)VAR_1;
        FUNC_1(VAR_5);
    }

    if (VAR_2 != ((void*)0)) {
        VAR_6 = FUNC_3((PyArrayObject *)VAR_5,
                                         VAR_2, VAR_4, VAR_0.maximum);
        if (VAR_6 == ((void*)0)) {
            FUNC_2(VAR_5);
            return ((void*)0);
        }
    }
    else {
        VAR_6 = VAR_5;
        FUNC_1(VAR_6);
    }
    FUNC_0(VAR_5);
    return VAR_6;
}
