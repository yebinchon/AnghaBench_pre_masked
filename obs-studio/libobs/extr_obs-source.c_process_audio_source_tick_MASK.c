
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int output_flags; } ;
struct TYPE_7__ {int audio_pending; int audio_mixers; int ** audio_output_buf; int audio_buf_mutex; TYPE_4__* audio_input_buf; TYPE_1__ info; } ;
typedef TYPE_2__ obs_source_t ;
struct TYPE_8__ {size_t size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,size_t,size_t) ;
 int FUNC_1 (TYPE_4__*,int ,size_t) ;
 int FUNC_2 (int ,int ,size_t) ;
 int FUNC_3 (int ,int ,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline void FUNC_6(obs_source_t *VAR_2,
          uint32_t VAR_3, size_t VAR_4,
          size_t VAR_5, size_t VAR_6)
{
 bool VAR_7 = !!(VAR_2->info.output_flags & VAR_1);

 FUNC_4(&VAR_2->audio_buf_mutex);

 if (VAR_2->audio_input_buf[0].size < VAR_6) {
  VAR_2->audio_pending = 1;
  FUNC_5(&VAR_2->audio_buf_mutex);
  return;
 }

 for (size_t VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  FUNC_1(&VAR_2->audio_input_buf[VAR_8],
         VAR_2->audio_output_buf[0][VAR_8], VAR_6);

 FUNC_5(&VAR_2->audio_buf_mutex);

 for (size_t VAR_9 = 1; VAR_9 < VAR_0; VAR_9++) {
  uint32_t VAR_10 = (1 << VAR_9);

  if (VAR_7) {
   if (VAR_9 > 1)
    break;

   VAR_3 = 1;
   VAR_10 = 1;
  }

  if ((VAR_2->audio_mixers & VAR_10) == 0 ||
      (VAR_3 & VAR_10) == 0) {
   FUNC_3(VAR_2->audio_output_buf[VAR_9][0], 0,
          VAR_6 * VAR_4);
   continue;
  }

  for (size_t VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
   FUNC_2(VAR_2->audio_output_buf[VAR_9][VAR_11],
          VAR_2->audio_output_buf[0][VAR_11], VAR_6);
 }

 if (VAR_7) {
  VAR_2->audio_pending = 0;
  return;
 }

 if ((VAR_2->audio_mixers & 1) == 0 || (VAR_3 & 1) == 0)
  FUNC_3(VAR_2->audio_output_buf[0][0], 0, VAR_6 * VAR_4);

 FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_2->audio_pending = 0;
}
