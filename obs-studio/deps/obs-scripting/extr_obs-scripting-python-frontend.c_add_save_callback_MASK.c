
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct python_obs_callback {int dummy; } ;
struct obs_python_script {int dummy; } ;
typedef int PyObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct python_obs_callback* FUNC_2 (struct obs_python_script*,int *) ;
 int VAR_0 ;
 struct obs_python_script* VAR_1 ;
 int FUNC_3 (int ,struct python_obs_callback*) ;
 int FUNC_4 (int *,char*,int **) ;
 int * FUNC_5 () ;

__attribute__((used)) static PyObject *FUNC_6(PyObject *VAR_2, PyObject *VAR_3)
{
 struct obs_python_script *VAR_4 = VAR_1;
 PyObject *VAR_5 = ((void*)0);

 FUNC_1(VAR_2);

 if (!FUNC_4(VAR_3, "O", &VAR_5))
  return FUNC_5();
 if (!VAR_5 || !FUNC_0(VAR_5))
  return FUNC_5();

 struct python_obs_callback *VAR_6 = FUNC_2(VAR_4, VAR_5);
 FUNC_3(VAR_0, VAR_6);
 return FUNC_5();
}
