
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(PyArrayObject *VAR_2, PyObject *VAR_3)
{


    int VAR_4;
    PyObject *VAR_5, *VAR_6;

    VAR_5 = FUNC_1(FUNC_3((PyObject *)VAR_2,
                                                      VAR_3, VAR_1));
    if (VAR_5 == ((void*)0)) {
        return -1;
    }
    VAR_6 = FUNC_0((PyArrayObject *)VAR_5, VAR_0, ((void*)0));
    FUNC_4(VAR_5);
    VAR_4 = FUNC_2(VAR_6);
    FUNC_4(VAR_6);
    return VAR_4;
}
