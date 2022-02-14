
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int async_decoupled; int timing_set; int audio_buf_mutex; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void FUNC_4(obs_source_t *VAR_0, bool VAR_1)
{
 if (!FUNC_0(VAR_0, "obs_source_set_async_decoupled"))
  return;

 VAR_0->async_decoupled = VAR_1;
 if (VAR_1) {
  FUNC_1(&VAR_0->audio_buf_mutex);
  VAR_0->timing_set = 0;
  FUNC_3(VAR_0, 0);
  FUNC_2(&VAR_0->audio_buf_mutex);
 }
}
