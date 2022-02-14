
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int ,char*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(PyObject *VAR_1,
                              char *VAR_2,
                              int VAR_3,
                              PyArrayObject **VAR_4
                              )
{
    int VAR_5;

    if (!FUNC_1(VAR_1) || FUNC_3(VAR_1) != VAR_3) {
        FUNC_0(VAR_0,
                "parameter %s must be a sequence of length %d",
                VAR_2, VAR_3);
        return -1;
    }

    for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
        PyObject *VAR_6 = FUNC_2(VAR_1, VAR_5);
        if (VAR_6 == ((void*)0)) {
            goto fail;
        }
        VAR_4[VAR_5] = FUNC_6(VAR_6);
        FUNC_4(VAR_6);
        if (VAR_4[VAR_5] == ((void*)0)) {
            goto fail;
        }
    }

    return 0;

fail:
    while (--VAR_5 >= 0) {
        FUNC_5(VAR_4[VAR_5]);
        VAR_4[VAR_5] = ((void*)0);
    }
    return -1;
}
