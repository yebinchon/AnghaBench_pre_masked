
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ removed; } ;
struct python_obs_callback {int func; TYPE_1__ base; } ;
typedef int PyObject ;


 int * FUNC_0 (int) ;
 int * FUNC_1 (int ,int *) ;
 int * FUNC_2 (char*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct python_obs_callback*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void *VAR_0, bool VAR_1)
{
 struct python_obs_callback *VAR_2 = VAR_0;

 if (VAR_2->base.removed)
  return;

 FUNC_4(VAR_2);

 PyObject *VAR_3 = FUNC_0(VAR_1);
 PyObject *VAR_4 = FUNC_2("(O)", VAR_3);
 PyObject *VAR_5 = FUNC_1(VAR_2->func, VAR_4);
 FUNC_5();
 FUNC_3(VAR_5);
 FUNC_3(VAR_4);
 FUNC_3(VAR_3);

 FUNC_6();
}
