
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {int async_active; scalar_t__ monitoring_type; int audio_buf_mutex; int last_frame_ts; } ;
typedef TYPE_1__ obs_source_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

void FUNC_6(obs_source_t *VAR_1)
{
 uint64_t VAR_2;

 if (!FUNC_0(VAR_1, "obs_source_show_preloaded_video"))
  return;

 VAR_1->async_active = 1;

 FUNC_2(&VAR_1->audio_buf_mutex);
 VAR_2 = (VAR_1->monitoring_type != VAR_0)
    ? FUNC_1()
    : 0;
 FUNC_5(VAR_1, VAR_1->last_frame_ts, VAR_2);
 FUNC_4(VAR_1, VAR_2);
 FUNC_3(&VAR_1->audio_buf_mutex);
}
