
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;
typedef int PyObject ;
typedef int PyInt ;
typedef int ListObject ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static PyObject *
FUNC_6(ListObject *VAR_1, Py_ssize_t VAR_2, Py_ssize_t VAR_3,
   Py_ssize_t VAR_4)
{
    PyInt VAR_5;
    PyObject *VAR_6;

    if (VAR_3 == 0)
    {
 FUNC_2(VAR_0, FUNC_1("slice step cannot be zero"));
 return ((void*)0);
    }

    VAR_6 = FUNC_3(VAR_4);
    if (VAR_6 == ((void*)0))
 return ((void*)0);

    for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5)
    {
 PyObject *VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_2 + VAR_5*VAR_3);
 if (VAR_7 == ((void*)0))
 {
     FUNC_5(VAR_6);
     return ((void*)0);
 }

 FUNC_4(VAR_6, VAR_5, VAR_7);
    }

    return VAR_6;
}
