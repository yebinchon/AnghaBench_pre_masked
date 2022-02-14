
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_6(char **VAR_1, Py_ssize_t *VAR_2, Py_ssize_t *VAR_3, char *VAR_4, int VAR_5,
          npy_intp *VAR_6, npy_intp *VAR_7, PyArrayObject* VAR_8)
{
    PyObject *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    char *VAR_11;
    npy_intp VAR_12, VAR_13, VAR_14 = 0;
    if (VAR_5 == 0) {
        if ((VAR_9 = FUNC_0(VAR_8, VAR_4)) == ((void*)0)) {
            return -1;
        }
        VAR_10 = FUNC_1(VAR_9);
        if (VAR_10 == ((void*)0)) {
            VAR_14 = -1;
            goto end;
        }
        VAR_11 = FUNC_2(VAR_10);
        VAR_13 = FUNC_3(VAR_10)*sizeof(char);
        *VAR_2 += VAR_13;
        do { if (FUNC_0(VAR_1, *VAR_2, VAR_3) == ((void*)0)) { VAR_14 = -1; goto end; } } while (0);
        FUNC_5(*VAR_1 + (*VAR_2 - VAR_13), VAR_11, VAR_13);
    }
    else {
        do { if (FUNC_0(VAR_1, *VAR_2, VAR_3) == ((void*)0)) { VAR_14 = -1; goto end; } } while (0);
        (*VAR_1)[*VAR_2] = '[';
        *VAR_2 += 1;
        for (VAR_12 = 0; VAR_12 < VAR_6[0]; VAR_12++) {
            if (FUNC_6(VAR_1, VAR_2, VAR_3,
                          VAR_4 + (*VAR_7)*VAR_12,
                          VAR_5 - 1, VAR_6 + 1,
                          VAR_7 + 1, VAR_8) < 0) {
                return -1;
            }
            do { if (FUNC_0(VAR_1, *VAR_2, VAR_3) == ((void*)0)) { VAR_14 = -1; goto end; } } while (0);
            if (VAR_12 < VAR_6[0] - 1) {
                (*VAR_1)[*VAR_2] = ',';
                (*VAR_1)[*VAR_2+1] = ' ';
                *VAR_2 += 2;
            }
        }
        do { if (FUNC_0(VAR_1, *VAR_2, VAR_3) == ((void*)0)) { VAR_14 = -1; goto end; } } while (0);
        (*VAR_1)[*VAR_2] = ']';
        *VAR_2 += 1;
    }



end:
    FUNC_4(VAR_9);
    FUNC_4(VAR_10);
    return VAR_14;
}
