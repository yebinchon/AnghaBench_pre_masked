
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int out_i; int ufunc; int args; } ;
typedef TYPE_1__ _ufunc_context ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int * FUNC_0 (int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int * FUNC_3 (int *,int *,int *,...) ;
 int * FUNC_4 (char*,int ,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * VAR_1 ;
 int * FUNC_7 (int ) ;

__attribute__((used)) static PyObject *
FUNC_8(
            PyObject *VAR_2, PyArrayObject *VAR_3, _ufunc_context const *VAR_4) {
    if (VAR_2 == ((void*)0)) {

        return FUNC_0(VAR_3);
    }
    else if (VAR_2 == VAR_1) {
        FUNC_5(VAR_2);
        return (PyObject *)VAR_3;
    }
    else {
        PyObject *VAR_5;
        PyObject *VAR_6 = ((void*)0);


        if (VAR_4 == ((void*)0)) {
            VAR_6 = VAR_1;
            FUNC_6(VAR_6);
        }
        else {
            PyObject *VAR_7;

            VAR_7 = FUNC_7(VAR_4->args);
            if (VAR_7 == ((void*)0)) {
                goto fail;
            }
            VAR_6 = FUNC_4("OOi",
                VAR_4->ufunc, VAR_7, VAR_4->out_i);
            FUNC_5(VAR_7);
            if (VAR_6 == ((void*)0)) {
                goto fail;
            }
        }

        VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_6, ((void*)0));
        FUNC_5(VAR_6);


        if (VAR_5 == ((void*)0) && FUNC_2(VAR_0)) {
            FUNC_1();
            VAR_5 = FUNC_3(VAR_2, VAR_3, ((void*)0));
        }
        FUNC_5(VAR_2);
        FUNC_5(VAR_3);
        return VAR_5;
    fail:
        FUNC_5(VAR_2);
        FUNC_5(VAR_3);
        return ((void*)0);
    }
}
