
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float cur_db; int mutex; } ;
typedef TYPE_1__ obs_fader_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

float FUNC_2(obs_fader_t *VAR_0)
{
 if (!VAR_0)
  return 0.0f;

 FUNC_0(&VAR_0->mutex);
 const float VAR_1 = VAR_0->cur_db;
 FUNC_1(&VAR_0->mutex);

 return VAR_1;
}
