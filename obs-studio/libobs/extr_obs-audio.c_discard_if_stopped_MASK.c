
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct TYPE_6__ {size_t last_audio_input_buf_size; int pending_stop; scalar_t__ audio_ts; TYPE_4__* audio_input_buf; TYPE_1__ context; } ;
typedef TYPE_2__ obs_source_t ;
struct TYPE_7__ {size_t size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_4__*,int *,size_t) ;

__attribute__((used)) static bool FUNC_2(obs_source_t *VAR_1, size_t VAR_2)
{
 size_t VAR_3;
 size_t VAR_4;

 VAR_3 = VAR_1->last_audio_input_buf_size;
 VAR_4 = VAR_1->audio_input_buf[0].size;

 if (!VAR_4)
  return 0;



 if (VAR_3 == VAR_4) {
  if (!VAR_1->pending_stop) {
   VAR_1->pending_stop = 1;




   return 1;
  }

  for (size_t VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   FUNC_1(&VAR_1->audio_input_buf[VAR_5], ((void*)0),
         VAR_1->audio_input_buf[VAR_5].size);

  VAR_1->pending_stop = 0;
  VAR_1->audio_ts = 0;
  VAR_1->last_audio_input_buf_size = 0;




  return 1;
 } else {
  VAR_1->last_audio_input_buf_size = VAR_4;
  return 0;
 }
}
