
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char**) ;
 char** FUNC_6 () ;

__attribute__((used)) static PyObject *FUNC_7(PyObject *VAR_0, PyObject *VAR_1)
{
 char **VAR_2 = FUNC_6();
 char **VAR_3 = VAR_2;

 PyObject *VAR_4 = FUNC_1(0);

 while (VAR_3 && *VAR_3) {
  PyObject *VAR_5 = FUNC_2(*VAR_3);
  if (VAR_5) {
   FUNC_0(VAR_4, VAR_5);
   FUNC_3(VAR_5);
  }
  VAR_3++;
 }

 FUNC_4(VAR_0);
 FUNC_4(VAR_1);

 FUNC_5(VAR_2);
 return VAR_4;
}
