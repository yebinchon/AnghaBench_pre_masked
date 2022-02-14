
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * (* fortranfunc ) (int *,int *,int *,void*) ;
struct TYPE_5__ {TYPE_1__* defs; } ;
struct TYPE_4__ {int rank; int * data; int * func; } ;
typedef int PyObject ;
typedef TYPE_2__ PyFortranObject ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *,int *,void*) ;
 int * FUNC_2 (int *,int *,int *,void*) ;

__attribute__((used)) static PyObject*
FUNC_3(PyFortranObject *VAR_2, PyObject *VAR_3, PyObject *VAR_4) {
    int VAR_5 = 0;



    if (VAR_2->defs[VAR_5].rank==-1) {
        if (VAR_2->defs[VAR_5].func==((void*)0)) {
            FUNC_0(VAR_0, "no function to call");
            return ((void*)0);
        }
        else if (VAR_2->defs[VAR_5].data==((void*)0))

            return (*((fortranfunc)(VAR_2->defs[VAR_5].func)))((PyObject *)VAR_2,VAR_3,VAR_4,((void*)0));
        else
            return (*((fortranfunc)(VAR_2->defs[VAR_5].func)))((PyObject *)VAR_2,VAR_3,VAR_4,
                                                        (void *)VAR_2->defs[VAR_5].data);
    }
    FUNC_0(VAR_1, "this fortran object is not callable");
    return ((void*)0);
}
