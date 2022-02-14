
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
 struct obs_python_script* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int,int ,struct python_obs_callback*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,char*,int **,int **) ;
 int FUNC_5 (int,int *,int*) ;
 int * FUNC_6 () ;

__attribute__((used)) static PyObject *FUNC_7(PyObject *VAR_4, PyObject *VAR_5)
{
 struct obs_python_script *VAR_6 = VAR_0;
 PyObject *VAR_7;
 PyObject *VAR_8;
 VAR_2 *VAR_3;

 if (!FUNC_4(VAR_5, "OO", &VAR_7, &VAR_8))
  return FUNC_6();
 if (!FUNC_5(VAR_2, VAR_7, &VAR_3))
  return FUNC_6();
 if (!VAR_8 || !FUNC_0(VAR_8))
  return FUNC_6();

 struct python_obs_callback *VAR_9 = FUNC_2(VAR_6, VAR_8);
 FUNC_3(VAR_3, VAR_1, VAR_9);

 FUNC_1(VAR_4);
 return FUNC_6();
}
