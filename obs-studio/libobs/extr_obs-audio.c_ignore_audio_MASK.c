
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_4__ {unsigned long long audio_ts; scalar_t__ last_audio_input_buf_size; TYPE_3__* audio_input_buf; } ;
typedef TYPE_1__ obs_source_t ;
struct TYPE_5__ {int size; } ;


 int FUNC_0 (TYPE_3__*,int *,int) ;

__attribute__((used)) static void FUNC_1(obs_source_t *VAR_0, size_t VAR_1,
    size_t VAR_2)
{
 size_t VAR_3 = VAR_0->audio_input_buf[0].size / sizeof(float);

 if (VAR_3) {
  for (size_t VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   FUNC_0(&VAR_0->audio_input_buf[VAR_4], ((void*)0),
         VAR_0->audio_input_buf[VAR_4].size);

  VAR_0->last_audio_input_buf_size = 0;
  VAR_0->audio_ts += (uint64_t)VAR_3 * 1000000000ULL /
        (uint64_t)VAR_2;
 }
}
