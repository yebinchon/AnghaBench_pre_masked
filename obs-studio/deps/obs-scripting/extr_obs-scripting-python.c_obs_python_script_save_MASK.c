
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct obs_python_script {int save; } ;
struct TYPE_3__ {int settings; int loaded; } ;
typedef TYPE_1__ obs_script_t ;
typedef int PyObject ;


 int * FUNC_0 (int ,int *) ;
 int * FUNC_1 (char*,int *) ;
 int FUNC_2 (int *) ;
 struct obs_python_script* VAR_0 ;
 scalar_t__ FUNC_3 (int ,int ,int,int **) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 () ;
 int VAR_2 ;
 int FUNC_6 () ;

void FUNC_7(obs_script_t *VAR_3)
{
 struct obs_python_script *VAR_4 = (struct obs_python_script *)VAR_3;

 if (!VAR_3->loaded || !VAR_2)
  return;
 if (!VAR_4->save)
  return;

 FUNC_4();
 VAR_0 = VAR_4;

 PyObject *VAR_5;
 if (FUNC_3(VAR_1, VAR_3->settings, 0, &VAR_5)) {
  PyObject *VAR_6 = FUNC_1("(O)", VAR_5);
  PyObject *VAR_7 = FUNC_0(VAR_4->save, VAR_6);
  FUNC_5();
  FUNC_2(VAR_7);
  FUNC_2(VAR_6);
  FUNC_2(VAR_5);
 }

 VAR_0 = ((void*)0);
 FUNC_6();
}
