
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int settings; int file; int path; int type; } ;
struct obs_lua_script {TYPE_1__ base; int dir; int mutex; int tick; } ;
typedef int pthread_mutexattr_t ;
typedef int obs_script_t ;
typedef int obs_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct obs_lua_script*) ;
 struct obs_lua_script* FUNC_1 (int) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 char* FUNC_11 (char const*,char) ;

obs_script_t *FUNC_12(const char *VAR_3, obs_data_t *VAR_4)
{
 struct obs_lua_script *VAR_5 = FUNC_1(sizeof(*VAR_5));

 VAR_5->base.type = VAR_1;
 VAR_5->tick = VAR_0;

 pthread_mutexattr_t VAR_6;
 FUNC_9(&VAR_6);
 FUNC_8(&VAR_5->mutex);
 FUNC_10(&VAR_6, VAR_2);

 if (FUNC_7(&VAR_5->mutex, &VAR_6) != 0) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }

 FUNC_2(&VAR_5->base.path, VAR_3);

 char *VAR_7 = VAR_3 && *VAR_3 ? FUNC_11(VAR_3, '/') : ((void*)0);
 if (VAR_7) {
  VAR_7++;
  FUNC_2(&VAR_5->base.file, VAR_7);
  FUNC_3(&VAR_5->dir, &VAR_5->base.path, VAR_7 - VAR_3);
 } else {
  FUNC_2(&VAR_5->base.file, VAR_3);
 }

 VAR_5->base.settings = FUNC_5();
 if (VAR_4)
  FUNC_4(VAR_5->base.settings, VAR_4);

 FUNC_6((obs_script_t *)VAR_5);
 return (obs_script_t *)VAR_5;
}
