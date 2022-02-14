
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; int len; } ;
typedef int PyObject ;
typedef TYPE_1__ PyArray_Dims ;
typedef int PyArrayObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int **,int *) ;
 int * FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,char*) ;

__attribute__((used)) static void
FUNC_6(PyArray_Dims *VAR_1, PyArrayObject *VAR_2)
{
    PyObject *VAR_3 = FUNC_3("cannot reshape array of size %zd "
                                         "into shape ", FUNC_0(VAR_2));
    PyObject *VAR_4 = FUNC_5(VAR_1->len, VAR_1->ptr, "");

    FUNC_2(&VAR_3, VAR_4);
    if (VAR_3 != ((void*)0)) {
        FUNC_1(VAR_0, VAR_3);
        FUNC_4(VAR_3);
    }
}
