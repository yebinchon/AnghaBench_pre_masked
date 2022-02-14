
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alignment; int elsize; int flags; int kind; int byteorder; } ;
typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Descr ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char*,int ,char,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 char FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(PyArray_Descr* VAR_1, PyObject *VAR_2)
{
    Py_ssize_t VAR_3;
    PyObject *VAR_4, *VAR_5;
    char VAR_6 = FUNC_6(VAR_1->byteorder);





    VAR_4 = FUNC_4("(cccii)", VAR_1->kind, VAR_6,
            VAR_1->flags, VAR_1->elsize, VAR_1->alignment);

    for(VAR_3 = 0; VAR_3 < FUNC_3(VAR_4); ++VAR_3) {
        VAR_5 = FUNC_2(VAR_4, VAR_3);
        if (VAR_5 == ((void*)0)) {
            FUNC_0(VAR_0,
                    "(Hash) Error while computing builting hash");
            goto clean_t;
        }
        FUNC_1(VAR_2, VAR_5);
    }

    FUNC_5(VAR_4);
    return 0;

clean_t:
    FUNC_5(VAR_4);
    return -1;
}
