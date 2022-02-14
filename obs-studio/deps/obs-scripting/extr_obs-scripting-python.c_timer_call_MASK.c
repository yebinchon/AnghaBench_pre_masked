
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct script_callback {scalar_t__ removed; } ;
struct python_obs_callback {int func; } ;
typedef int PyObject ;


 int * FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct python_obs_callback*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct script_callback *VAR_0)
{
 struct python_obs_callback *VAR_1 = (struct python_obs_callback *)VAR_0;

 if (VAR_0->removed)
  return;

 FUNC_2(VAR_1);
 PyObject *VAR_2 = FUNC_0(VAR_1->func, ((void*)0));
 FUNC_3();
 FUNC_1(VAR_2);
 FUNC_4();
}
