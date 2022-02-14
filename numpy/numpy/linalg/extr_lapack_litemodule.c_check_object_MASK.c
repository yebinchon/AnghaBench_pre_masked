
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,char*,char*,...) ;

__attribute__((used)) static int
FUNC_5(PyObject *VAR_1, int VAR_2, char *VAR_3,
                        char *VAR_4, char *VAR_5)
{
    if (!FUNC_0(VAR_1)) {
        FUNC_4(VAR_0,
                     "Expected an array for parameter %s in lapack_lite.%s",
                     VAR_3, VAR_5);
        return 0;
    }
    else if (!FUNC_2((PyArrayObject *)VAR_1)) {
        FUNC_4(VAR_0,
                     "Parameter %s is not contiguous in lapack_lite.%s",
                     VAR_3, VAR_5);
        return 0;
    }
    else if (!(FUNC_3((PyArrayObject *)VAR_1) == VAR_2)) {
        FUNC_4(VAR_0,
                     "Parameter %s is not of type %s in lapack_lite.%s",
                     VAR_3, VAR_4, VAR_5);
        return 0;
    }
    else if (FUNC_1((PyArrayObject *)VAR_1)) {
        FUNC_4(VAR_0,
                     "Parameter %s has non-native byte order in lapack_lite.%s",
                     VAR_3, VAR_5);
        return 0;
    }
    else {
        return 1;
    }
}
