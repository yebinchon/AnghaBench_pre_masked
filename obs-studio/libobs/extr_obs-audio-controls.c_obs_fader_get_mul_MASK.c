
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; int cur_db; } ;
typedef TYPE_1__ obs_fader_t ;


 float FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

float FUNC_3(obs_fader_t *VAR_0)
{
 if (!VAR_0)
  return 0.0f;

 FUNC_1(&VAR_0->mutex);
 const float VAR_1 = FUNC_0(VAR_0->cur_db);
 FUNC_2(&VAR_0->mutex);

 return VAR_1;
}
