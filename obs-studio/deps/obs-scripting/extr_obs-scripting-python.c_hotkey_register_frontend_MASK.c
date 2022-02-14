
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extra; int on_remove; } ;
struct python_obs_callback {TYPE_1__ base; } ;
struct obs_python_script {int dummy; } ;
typedef scalar_t__ obs_hotkey_id ;
typedef int PyObject ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 struct python_obs_callback* FUNC_3 (struct obs_python_script*,int *) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 struct obs_python_script* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char const*,char const*,int ,struct python_obs_callback*) ;
 int VAR_3 ;
 int FUNC_6 (int *,char*,char const**,char const**,int **) ;
 int * FUNC_7 () ;
 int FUNC_8 (struct python_obs_callback*) ;

__attribute__((used)) static PyObject *FUNC_9(PyObject *VAR_4, PyObject *VAR_5)
{
 struct obs_python_script *VAR_6 = VAR_1;
 const char *VAR_7;
 const char *VAR_8;
 obs_hotkey_id VAR_9;
 PyObject *VAR_10;

 if (!FUNC_6(VAR_5, "ssO", &VAR_7, &VAR_8, &VAR_10))
  return FUNC_7();
 if (!VAR_10 || !FUNC_0(VAR_10))
  return FUNC_7();

 struct python_obs_callback *VAR_11 = FUNC_3(VAR_6, VAR_10);
 VAR_11->base.on_remove = VAR_3;
 VAR_9 = FUNC_5(VAR_7, VAR_8, VAR_2, VAR_11);
 FUNC_4(&VAR_11->base.extra, "id", VAR_9);

 if (VAR_9 == VAR_0)
  FUNC_8(VAR_11);

 FUNC_2(VAR_4);
 return FUNC_1(VAR_9);
}
