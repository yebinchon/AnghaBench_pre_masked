
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int settings; int desc; int file; int path; } ;
struct obs_python_script {int name; int dir; TYPE_1__ base; int module; } ;
typedef int obs_script_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct obs_python_script*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 () ;

void FUNC_6(obs_script_t *VAR_1)
{
 struct obs_python_script *VAR_2 = (struct obs_python_script *)VAR_1;

 if (VAR_2) {
  if (VAR_0) {
   FUNC_3();
   FUNC_0(VAR_2->module);
   FUNC_5();
  }

  FUNC_2(&VAR_2->base.path);
  FUNC_2(&VAR_2->base.file);
  FUNC_2(&VAR_2->base.desc);
  FUNC_4(VAR_2->base.settings);
  FUNC_2(&VAR_2->dir);
  FUNC_2(&VAR_2->name);
  FUNC_1(VAR_2);
 }
}
