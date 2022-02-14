
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Py_ssize_t ;
typedef int PyObject ;


 int * FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int *,char*,int **) ;
 scalar_t__ FUNC_5 (int,int *,int*) ;
 int * FUNC_6 () ;
 int VAR_1 ;

__attribute__((used)) static PyObject *FUNC_7(PyObject *VAR_2, PyObject *VAR_3)
{
 PyObject *VAR_4;
 if (!FUNC_4(VAR_3, "O", &VAR_4))
  return FUNC_6();

 Py_ssize_t VAR_5 = FUNC_1(VAR_4);
 for (Py_ssize_t VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  PyObject *VAR_7 = FUNC_0(VAR_4, VAR_6);
  VAR_0 *VAR_1;

  if (FUNC_5(VAR_0, VAR_7, &VAR_1)) {
   FUNC_3(VAR_1);
  }
 }

 FUNC_2(VAR_2);
 return FUNC_6();
}
