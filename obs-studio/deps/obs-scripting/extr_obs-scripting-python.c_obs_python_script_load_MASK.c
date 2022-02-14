
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int loaded; } ;
struct TYPE_3__ {int array; } ;
struct obs_python_script {TYPE_2__ base; TYPE_1__ dir; int module; } ;
typedef int obs_script_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct obs_python_script*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 () ;

bool FUNC_5(obs_script_t *VAR_1)
{
 struct obs_python_script *VAR_2 = (struct obs_python_script *)VAR_1;
 if (VAR_0 && !VAR_2->base.loaded) {
  FUNC_2();
  if (!VAR_2->module)
   FUNC_0(VAR_2->dir.array);
  VAR_2->base.loaded = FUNC_1(VAR_2);
  FUNC_4();

  if (VAR_2->base.loaded)
   FUNC_3(VAR_1, ((void*)0));
 }

 return VAR_2->base.loaded;
}
