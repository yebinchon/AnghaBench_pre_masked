
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int settings; int desc; int file; int path; } ;
struct obs_lua_script {int dir; int log_chunk; TYPE_1__ base; int mutex; } ;
typedef int obs_script_t ;


 int FUNC_0 (struct obs_lua_script*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(obs_script_t *VAR_0)
{
 struct obs_lua_script *VAR_1 = (struct obs_lua_script *)VAR_0;

 if (VAR_1) {
  FUNC_3(&VAR_1->mutex);
  FUNC_1(&VAR_1->base.path);
  FUNC_1(&VAR_1->base.file);
  FUNC_1(&VAR_1->base.desc);
  FUNC_2(VAR_1->base.settings);
  FUNC_1(&VAR_1->log_chunk);
  FUNC_1(&VAR_1->dir);
  FUNC_0(VAR_1);
 }
}
