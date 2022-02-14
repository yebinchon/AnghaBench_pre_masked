
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static PyObject *
FUNC_5(PyArrayObject *VAR_1)
{
    if (!FUNC_2(VAR_1) || FUNC_3(VAR_1) != 0) {
        FUNC_4(VAR_0,
            "only integer scalar arrays can be converted to a scalar index");
        return ((void*)0);
    }
    return FUNC_1(VAR_1, FUNC_0(VAR_1));
}
