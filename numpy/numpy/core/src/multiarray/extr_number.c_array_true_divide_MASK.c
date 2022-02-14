
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int true_divide; } ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,int *,int ,int * (*) (int *,int *)) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int *,int *,int *,int **,int ) ;

__attribute__((used)) static PyObject *
FUNC_6(PyArrayObject *VAR_3, PyObject *VAR_4)
{
    PyObject *VAR_5;

    FUNC_0(VAR_3, VAR_4, VAR_2, FUNC_6);
    if (FUNC_1(VAR_3) &&
            (FUNC_4(VAR_3) || FUNC_3(VAR_3)) &&
            FUNC_5(VAR_3, VAR_4, &VAR_0, &VAR_5, 0)) {
        return VAR_5;
    }
    return FUNC_2(VAR_3, VAR_4, VAR_1.true_divide);
}
