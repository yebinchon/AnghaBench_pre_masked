
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct python_obs_callback {int dummy; } ;
struct obs_python_script {int dummy; } ;
typedef int PyObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct obs_python_script* VAR_0 ;
 struct python_obs_callback* FUNC_2 (struct obs_python_script*,int *) ;
 int FUNC_3 (int *,char*,int **) ;
 int * FUNC_4 () ;
 int FUNC_5 (struct python_obs_callback*) ;

__attribute__((used)) static PyObject *FUNC_6(PyObject *VAR_1, PyObject *VAR_2)
{
 struct obs_python_script *VAR_3 = VAR_0;
 PyObject *VAR_4 = ((void*)0);

 FUNC_1(VAR_1);

 if (!FUNC_3(VAR_2, "O", &VAR_4))
  return FUNC_4();
 if (!VAR_4 || !FUNC_0(VAR_4))
  return FUNC_4();

 struct python_obs_callback *VAR_5 =
  FUNC_2(VAR_3, VAR_4);
 if (VAR_5)
  FUNC_5(VAR_5);
 return FUNC_4();
}
