
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_hash_t ;
typedef int PyObject ;
typedef int PyArray_Descr ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(PyArray_Descr *VAR_1, npy_hash_t *VAR_2)
{
    PyObject *VAR_3, *VAR_4;
    int VAR_5;

    VAR_3 = FUNC_2(0);
    if (VAR_3 == ((void*)0)) {
        return -1;
    }

    VAR_5 = FUNC_5(VAR_1, VAR_3);
    if (VAR_5) {
        FUNC_4(VAR_3);
        return -1;
    }





    VAR_4 = FUNC_1(VAR_3);
    FUNC_4(VAR_3);
    if (VAR_4 == ((void*)0))
        return -1;

    *VAR_2 = FUNC_3(VAR_4);
    FUNC_4(VAR_4);
    if (*VAR_2 == -1) {





        return -1;
    }

    return 0;
}
