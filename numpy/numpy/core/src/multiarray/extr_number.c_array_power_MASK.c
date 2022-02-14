
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int power; } ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *,int *,int ,int * (*) (int *,int *,int *)) ;
 int * FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_3 (int *,int *,int ,int **) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static PyObject *
FUNC_4(PyArrayObject *VAR_4, PyObject *VAR_5, PyObject *VAR_6)
{
    PyObject *VAR_7 = ((void*)0);

    if (VAR_6 != VAR_0) {

        FUNC_2(VAR_1);
        return VAR_1;
    }

    FUNC_0(VAR_4, VAR_5, VAR_3, FUNC_4);
    if (FUNC_3(VAR_4, VAR_5, 0, &VAR_7) != 0) {
        VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_2.power);
    }
    return VAR_7;
}
