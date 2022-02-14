
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int npy_bool ;
struct TYPE_4__ {int identity; int * identity_value; } ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyObject ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int) ;






 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static PyObject *
FUNC_4(PyUFuncObject *VAR_2, npy_bool *VAR_3) {
    switch(VAR_2->identity) {
    case 130:
        *VAR_3 = 1;
        return FUNC_1(1);

    case 128:
        *VAR_3 = 1;
        return FUNC_1(0);

    case 132:
        *VAR_3 = 1;
        return FUNC_1(-1);

    case 129:
        *VAR_3 = 1;
        VAR_1;

    case 131:
        *VAR_3 = 0;
        VAR_1;

    case 133:
        *VAR_3 = 1;
        FUNC_2(VAR_2->identity_value);
        return VAR_2->identity_value;

    default:
        FUNC_0(VAR_0,
                "ufunc %s has an invalid identity", FUNC_3(VAR_2));
        return ((void*)0);
    }
}
