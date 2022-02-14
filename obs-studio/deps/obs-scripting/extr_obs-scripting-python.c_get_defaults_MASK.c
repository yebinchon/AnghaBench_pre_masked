
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int settings; } ;
struct obs_python_script {TYPE_1__ base; } ;
typedef int PyObject ;


 int * FUNC_0 (int *,int *) ;
 int * FUNC_1 (char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int,int **) ;
 int VAR_0 ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct obs_python_script *VAR_1, PyObject *VAR_2)
{
 PyObject *VAR_3;
 if (!FUNC_3(VAR_0, VAR_1->base.settings, 0, &VAR_3))
  return;

 PyObject *VAR_4 = FUNC_1("(O)", VAR_3);
 PyObject *VAR_5 = FUNC_0(VAR_2, VAR_4);
 FUNC_4();
 FUNC_2(VAR_5);
 FUNC_2(VAR_4);
 FUNC_2(VAR_3);
}
