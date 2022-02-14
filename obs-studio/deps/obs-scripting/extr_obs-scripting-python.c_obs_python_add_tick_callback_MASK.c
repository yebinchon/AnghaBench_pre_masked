
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct python_obs_callback {int dummy; } ;
struct obs_python_script {int dummy; } ;
typedef int PyObject ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct python_obs_callback* FUNC_3 (struct obs_python_script*,int *) ;
 struct obs_python_script* VAR_1 ;
 int FUNC_4 (int ,struct python_obs_callback*) ;
 int VAR_2 ;
 int FUNC_5 (int *,char*,int **) ;
 int * FUNC_6 () ;

__attribute__((used)) static PyObject *FUNC_7(PyObject *VAR_3, PyObject *VAR_4)
{
 struct obs_python_script *VAR_5 = VAR_1;
 PyObject *VAR_6 = ((void*)0);

 if (!VAR_5) {
  FUNC_0(VAR_0,
    "No active script, report this to Jim");
  return ((void*)0);
 }

 FUNC_2(VAR_3);

 if (!FUNC_5(VAR_4, "O", &VAR_6))
  return FUNC_6();
 if (!VAR_6 || !FUNC_1(VAR_6))
  return FUNC_6();

 struct python_obs_callback *VAR_7 = FUNC_3(VAR_5, VAR_6);
 FUNC_4(VAR_2, VAR_7);
 return FUNC_6();
}
