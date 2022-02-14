
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * out; int * in; } ;
typedef TYPE_1__ ufunc_full_args ;
typedef int PyObject ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static PyObject *
FUNC_2(ufunc_full_args VAR_0) {
    if (VAR_0.out == ((void*)0)) {
        FUNC_1(VAR_0.in);
        return VAR_0.in;
    }
    else {
        return FUNC_0(VAR_0.in, VAR_0.out);
    }
}
