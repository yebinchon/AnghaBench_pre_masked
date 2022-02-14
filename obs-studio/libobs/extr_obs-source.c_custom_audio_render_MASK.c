
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct obs_source_audio_mix {TYPE_1__* output; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_8__ {int (* audio_render ) (int ,int *,struct obs_source_audio_mix*,int,size_t,size_t) ;} ;
struct TYPE_10__ {int audio_mixers; int audio_pending; int ** audio_output_buf; int audio_ts; TYPE_3__ context; TYPE_2__ info; } ;
typedef TYPE_4__ obs_source_t ;
struct TYPE_7__ {int * data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_4__*,int,size_t,size_t) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int *,struct obs_source_audio_mix*,int,size_t,size_t) ;

__attribute__((used)) static void FUNC_3(obs_source_t *VAR_2, uint32_t VAR_3,
    size_t VAR_4, size_t VAR_5)
{
 struct obs_source_audio_mix VAR_6;
 bool VAR_7;
 uint64_t VAR_8;

 for (size_t VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  for (size_t VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   VAR_6.output[VAR_9].data[VAR_10] =
    VAR_2->audio_output_buf[VAR_9][VAR_10];
  }

  if ((VAR_2->audio_mixers & VAR_3 & (1 << VAR_9)) != 0) {
   FUNC_1(VAR_2->audio_output_buf[VAR_9][0], 0,
          sizeof(float) * VAR_0 * VAR_4);
  }
 }

 VAR_7 = VAR_2->info.audio_render(VAR_2->context.data, &VAR_8,
         &VAR_6, VAR_3, VAR_4,
         VAR_5);
 VAR_2->audio_ts = VAR_7 ? VAR_8 : 0;
 VAR_2->audio_pending = !VAR_7;

 if (!VAR_7 || !VAR_2->audio_ts || !VAR_3)
  return;

 for (size_t VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  uint32_t VAR_12 = 1 << VAR_11;

  if ((VAR_3 & VAR_12) == 0)
   continue;

  if ((VAR_2->audio_mixers & VAR_12) == 0) {
   FUNC_1(VAR_2->audio_output_buf[VAR_11][0], 0,
          sizeof(float) * VAR_0 * VAR_4);
  }
 }

 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
}
