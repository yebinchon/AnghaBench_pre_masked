
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_4__ {void* next_audio_sys_ts_min; void* audio_ts; scalar_t__ last_audio_input_buf_size; TYPE_3__* audio_input_buf; } ;
typedef TYPE_1__ obs_source_t ;
struct TYPE_5__ {scalar_t__ size; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(obs_source_t *VAR_1, uint64_t VAR_2)
{
 for (size_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->audio_input_buf[VAR_3].size)
   FUNC_0(&VAR_1->audio_input_buf[VAR_3], ((void*)0),
         VAR_1->audio_input_buf[VAR_3].size);
 }

 VAR_1->last_audio_input_buf_size = 0;
 VAR_1->audio_ts = VAR_2;
 VAR_1->next_audio_sys_ts_min = VAR_2;
}
