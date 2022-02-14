
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* type_resolver ) (TYPE_1__*,int ,int **,int *,int **) ;} ;
typedef TYPE_1__ PyUFuncObject ;
typedef int PyObject ;
typedef int PyArray_Descr ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_1 ;
 int * FUNC_2 (int,int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int ,int **,int *,int **) ;
 char* FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(PyUFuncObject *VAR_3, PyArrayObject *VAR_4,
                        PyArray_Descr *VAR_5, PyArray_Descr **VAR_6)
{
    int VAR_7, VAR_8;
    PyArrayObject *VAR_9[3] = {VAR_4, VAR_4, ((void*)0)};
    PyArray_Descr *VAR_10[3] = {((void*)0), ((void*)0), ((void*)0)};
    const char *VAR_11 = FUNC_5(VAR_3);
    PyObject *VAR_12 = ((void*)0);

    *VAR_6 = ((void*)0);





    if (VAR_5 != ((void*)0)) {
        VAR_12 = FUNC_2(3, VAR_5, VAR_5, VAR_2);
        if (VAR_12 == ((void*)0)) {
            return -1;
        }
    }


    VAR_8 = VAR_3->type_resolver(
                        VAR_3, VAR_0,
                        VAR_9, VAR_12, VAR_10);
    FUNC_3(VAR_12);
    if (VAR_8 == -1) {
        return -1;
    }
    else if (VAR_8 == -2) {
        FUNC_1(VAR_1,
                "type resolution returned NotImplemented to "
                "reduce ufunc %s", VAR_11);
        return -1;
    }







    if (!FUNC_0(VAR_10[0], VAR_10[1])) {
        for (VAR_7 = 0; VAR_7 < 3; ++VAR_7) {
            FUNC_3(VAR_10[VAR_7]);
        }
        FUNC_1(VAR_1,
                "could not find a type resolution appropriate for "
                "reduce ufunc %s", VAR_11);
        return -1;
    }

    FUNC_3(VAR_10[0]);
    FUNC_3(VAR_10[1]);
    *VAR_6 = VAR_10[2];

    return 0;
}
