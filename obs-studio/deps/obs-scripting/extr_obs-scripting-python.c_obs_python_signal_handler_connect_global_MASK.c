
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extra; } ;
struct python_obs_callback {TYPE_1__ base; } ;
struct obs_python_script {int dummy; } ;
typedef int PyObject ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct python_obs_callback* FUNC_3 (struct obs_python_script*,int *) ;
 int FUNC_4 (int *,char*,int) ;
 int VAR_1 ;
 struct obs_python_script* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,char*,int **,int **) ;
 int FUNC_6 (int,int *,int*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int,int ,struct python_obs_callback*) ;
 int VAR_4 ;

__attribute__((used)) static PyObject *FUNC_9(PyObject *VAR_5,
         PyObject *VAR_6)
{
 struct obs_python_script *VAR_7 = VAR_2;
 PyObject *VAR_8 = ((void*)0);
 PyObject *VAR_9 = ((void*)0);

 if (!VAR_7) {
  FUNC_0(VAR_0,
    "No active script, report this to Jim");
  return ((void*)0);
 }

 FUNC_2(VAR_5);

 VAR_4 *VAR_3;

 if (!FUNC_5(VAR_6, "OO", &VAR_8, &VAR_9))
  return FUNC_7();

 if (!FUNC_6(VAR_4, VAR_8, &VAR_3))
  return FUNC_7();
 if (!VAR_9 || !FUNC_1(VAR_9))
  return FUNC_7();

 struct python_obs_callback *VAR_10 = FUNC_3(VAR_7, VAR_9);
 FUNC_4(&VAR_10->base.extra, "handler", VAR_3);
 FUNC_8(VAR_3, VAR_1,
          VAR_10);
 return FUNC_7();
}
