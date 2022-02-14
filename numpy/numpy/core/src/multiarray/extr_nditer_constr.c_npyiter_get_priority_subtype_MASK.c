
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npyiter_opitflags ;
typedef int PyTypeObject ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int const VAR_0 ;
 double FUNC_0 (int *,double) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(int VAR_1, PyArrayObject **VAR_2,
                            const npyiter_opitflags *VAR_3,
                            double *VAR_4,
                            PyTypeObject **VAR_5)
{
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
        if (VAR_2[VAR_6] != ((void*)0) && VAR_3[VAR_6] & VAR_0) {
            double VAR_7 = FUNC_0((PyObject *)VAR_2[VAR_6], 0.0);
            if (VAR_7 > *VAR_4) {
                *VAR_4 = VAR_7;
                *VAR_5 = FUNC_1(VAR_2[VAR_6]);
            }
        }
    }
}
