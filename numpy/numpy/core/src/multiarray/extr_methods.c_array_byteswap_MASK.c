
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_bool ;
typedef int PyObject ;
typedef int PyArrayObject ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,char**,int ,int *) ;
 int VAR_1 ;
 int * FUNC_1 (int *,int ) ;

__attribute__((used)) static PyObject *
FUNC_2(PyArrayObject *VAR_2, PyObject *VAR_3, PyObject *VAR_4)
{
    npy_bool VAR_5 = VAR_0;
    static char *VAR_6[] = {"inplace", ((void*)0)};

    if (!FUNC_0(VAR_3, VAR_4, "|O&:byteswap", VAR_6,
                                     VAR_1, &VAR_5)) {
        return ((void*)0);
    }
    return FUNC_1(VAR_2, VAR_5);
}
