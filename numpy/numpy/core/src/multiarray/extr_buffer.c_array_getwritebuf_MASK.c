
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;
typedef int PyArrayObject ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int,void**) ;

__attribute__((used)) static Py_ssize_t
FUNC_2(PyArrayObject *VAR_0, Py_ssize_t VAR_1, void **VAR_2)
{
    if (FUNC_0(VAR_0, "buffer source array") < 0) {
        return -1;
    }
    return FUNC_1(VAR_0, VAR_1, (void **) VAR_2);
}
