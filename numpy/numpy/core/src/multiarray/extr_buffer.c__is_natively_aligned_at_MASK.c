
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int alignment; int elsize; } ;
typedef int Py_ssize_t ;
typedef TYPE_1__ PyArray_Descr ;
typedef int PyArrayObject ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int
FUNC_4(PyArray_Descr *VAR_0,
                        PyArrayObject *VAR_1, Py_ssize_t VAR_2)
{
    int VAR_3;

    if ((Py_ssize_t)(FUNC_0(VAR_1)) % VAR_0->alignment != 0) {
        return 0;
    }

    if (VAR_2 % VAR_0->alignment != 0) {
        return 0;
    }

    if (VAR_0->elsize % VAR_0->alignment) {
        return 0;
    }

    for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_1); ++VAR_3) {
        if (FUNC_1(VAR_1, VAR_3) > 1) {
            if (FUNC_3(VAR_1, VAR_3) % VAR_0->alignment != 0) {
                return 0;
            }
        }
    }

    return 1;
}
