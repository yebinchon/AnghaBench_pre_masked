
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_intp ;
typedef int PyObject ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static npy_intp
FUNC_1(PyObject **VAR_1, PyObject *VAR_2)
{
    PyObject **VAR_3 = VAR_1;
    while (*VAR_3 != ((void*)0) && *VAR_3 != VAR_2) {
        VAR_3++;
    }

    if (*VAR_3 == ((void*)0)) {
        int VAR_4 = 0;
        VAR_3 = VAR_1;
        while (*VAR_3 != ((void*)0) &&
               (VAR_4 = FUNC_0(VAR_2, *VAR_3,
                                               VAR_0)) == 0) {
            VAR_3++;
        }
        if (VAR_4 < 0) {
            return -1;
        }
    }
    return VAR_3 - VAR_1;
}
