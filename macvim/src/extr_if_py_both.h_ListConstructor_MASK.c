
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list_T ;
typedef int PyTypeObject ;
typedef int PyObject ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,int **) ;
 int * FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;

__attribute__((used)) static PyObject *
FUNC_9(PyTypeObject *VAR_1, PyObject *VAR_2, PyObject *VAR_3)
{
    list_T *VAR_4;
    PyObject *VAR_5 = ((void*)0);

    if (VAR_3)
    {
 FUNC_4(VAR_0,
  FUNC_1("list constructor does not accept keyword arguments"));
 return ((void*)0);
    }

    if (!FUNC_2(VAR_2, "|O", &VAR_5))
 return ((void*)0);

    if (!(VAR_4 = FUNC_8()))
 return ((void*)0);

    if (VAR_5)
    {
 PyObject *VAR_6;

 if (!(VAR_6 = FUNC_3()))
 {
     FUNC_7(VAR_4);
     return ((void*)0);
 }

 if (FUNC_6(VAR_4, VAR_5, VAR_6) == -1)
 {
     FUNC_5(VAR_6);
     FUNC_7(VAR_4);
     return ((void*)0);
 }

 FUNC_5(VAR_6);
    }

    return FUNC_0(VAR_1, VAR_4);
}
