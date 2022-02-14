
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct python_obs_callback {int dummy; } ;
struct obs_python_script {int dummy; } ;
typedef int PyObject ;


 int FUNC_0 (int *) ;
 struct obs_python_script* VAR_0 ;
 struct python_obs_callback* FUNC_1 (struct obs_python_script*,int *) ;
 int FUNC_2 (int *,char*,int **) ;
 int * FUNC_3 () ;
 int FUNC_4 (struct python_obs_callback*) ;

__attribute__((used)) static PyObject *FUNC_5(PyObject *VAR_1, PyObject *VAR_2)
{
 struct obs_python_script *VAR_3 = VAR_0;
 PyObject *VAR_4;

 FUNC_0(VAR_1);

 if (!FUNC_2(VAR_2, "O", &VAR_4))
  return FUNC_3();

 struct python_obs_callback *VAR_5 =
  FUNC_1(VAR_3, VAR_4);
 if (VAR_5)
  FUNC_4(VAR_5);
 return FUNC_3();
}
