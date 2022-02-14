
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
 int FUNC_5 (int *,char*,char const*) ;
 int VAR_1 ;
 struct obs_python_script* VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,char*,int **,char const**,int **) ;
 int FUNC_7 (int,int *,int*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int,char const*,int ,struct python_obs_callback*) ;
 int VAR_4 ;

__attribute__((used)) static PyObject *FUNC_10(PyObject *VAR_5,
         PyObject *VAR_6)
{
 struct obs_python_script *VAR_7 = VAR_2;
 PyObject *VAR_8 = ((void*)0);
 PyObject *VAR_9 = ((void*)0);
 const char *VAR_10;

 if (!VAR_7) {
  FUNC_0(VAR_0,
    "No active script, report this to Jim");
  return ((void*)0);
 }

 FUNC_2(VAR_5);

 VAR_4 *VAR_3;

 if (!FUNC_6(VAR_6, "OsO", &VAR_8, &VAR_10, &VAR_9))
  return FUNC_8();
 if (!FUNC_7(VAR_4, VAR_8, &VAR_3))
  return FUNC_8();
 if (!VAR_9 || !FUNC_1(VAR_9))
  return FUNC_8();

 struct python_obs_callback *VAR_11 = FUNC_3(VAR_7, VAR_9);
 FUNC_4(&VAR_11->base.extra, "handler", VAR_3);
 FUNC_5(&VAR_11->base.extra, "signal", VAR_10);
 FUNC_9(VAR_3, VAR_10, VAR_1, VAR_11);
 return FUNC_8();
}
