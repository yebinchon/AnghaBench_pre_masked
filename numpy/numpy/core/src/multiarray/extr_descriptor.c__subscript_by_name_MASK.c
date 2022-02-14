
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fields; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_0 ;
 int * FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static PyObject *
FUNC_8(PyArray_Descr *VAR_1, PyObject *VAR_2)
{
    PyObject *VAR_3 = FUNC_1(VAR_1->fields, VAR_2);
    PyObject *VAR_4;
    PyObject *VAR_5;

    if (VAR_3 == ((void*)0)) {
        if (FUNC_5(VAR_2)) {
            VAR_5 = FUNC_4(VAR_2);
        }
        else {
            VAR_5 = VAR_2;
        }

        FUNC_2(VAR_0,
                "Field named \'%s\' not found.", FUNC_0(VAR_5));
        if (VAR_5 != VAR_2) {
            FUNC_6(VAR_5);
        }
        return ((void*)0);
    }
    VAR_4 = FUNC_3(VAR_3, 0);
    FUNC_7(VAR_4);
    return VAR_4;
}
