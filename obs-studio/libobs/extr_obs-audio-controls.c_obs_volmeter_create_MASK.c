
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obs_volmeter {int type; int callback_mutex; int mutex; } ;
typedef struct obs_volmeter obs_volmeter_t ;
typedef enum obs_fader_type { ____Placeholder_obs_fader_type } obs_fader_type ;


 struct obs_volmeter* FUNC_0 (int) ;
 int FUNC_1 (struct obs_volmeter*) ;
 int FUNC_2 (struct obs_volmeter*,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

obs_volmeter_t *FUNC_5(enum obs_fader_type VAR_0)
{
 struct obs_volmeter *VAR_1 = FUNC_0(sizeof(struct obs_volmeter));
 if (!VAR_1)
  return ((void*)0);

 FUNC_4(&VAR_1->mutex);
 FUNC_4(&VAR_1->callback_mutex);
 if (FUNC_3(&VAR_1->mutex, ((void*)0)) != 0)
  goto fail;
 if (FUNC_3(&VAR_1->callback_mutex, ((void*)0)) != 0)
  goto fail;

 VAR_1->type = VAR_0;

 FUNC_2(VAR_1, 50);

 return VAR_1;
fail:
 FUNC_1(VAR_1);
 return ((void*)0);
}
