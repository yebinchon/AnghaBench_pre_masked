
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_python_script {int * module; } ;
typedef int PyObject ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 struct obs_python_script* VAR_0 ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct obs_python_script *VAR_1)
{
 PyObject *VAR_2 = VAR_1->module;
 PyObject *VAR_3 = ((void*)0);
 PyObject *VAR_4 = ((void*)0);

 VAR_0 = VAR_1;

 VAR_3 = FUNC_3(VAR_2, "script_unload");
 if (FUNC_1() || !VAR_3) {
  FUNC_0();
  goto fail;
 }

 VAR_4 = FUNC_2(VAR_3, ((void*)0));
 if (FUNC_5())
  goto fail;

fail:
 FUNC_4(VAR_4);
 FUNC_4(VAR_3);

 VAR_0 = ((void*)0);
}
