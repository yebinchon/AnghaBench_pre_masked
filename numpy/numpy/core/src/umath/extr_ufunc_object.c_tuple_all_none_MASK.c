
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_intp ;
typedef int npy_bool ;
typedef int PyObject ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static npy_bool
FUNC_2(PyObject *VAR_3) {
    npy_intp VAR_4;
    for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_3); ++VAR_4) {
        if (FUNC_0(VAR_3, VAR_4) != VAR_2) {
            return VAR_0;
        }
    }
    return VAR_1;
}
