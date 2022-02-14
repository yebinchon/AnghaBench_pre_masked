
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct audio_action {scalar_t__ timestamp; } ;
struct TYPE_7__ {scalar_t__ num; struct audio_action* array; } ;
struct TYPE_8__ {scalar_t__ audio_ts; scalar_t__ audio_mixers; int ** audio_output_buf; int audio_actions_mutex; TYPE_1__ audio_actions; } ;
typedef TYPE_2__ obs_source_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,size_t,size_t) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 float FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_2__*,size_t,size_t,float) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(obs_source_t *VAR_3, uint32_t VAR_4,
          size_t VAR_5, size_t VAR_6)
{
 struct audio_action VAR_7;
 bool VAR_8;
 float VAR_9;

 FUNC_5(&VAR_3->audio_actions_mutex);

 VAR_8 = VAR_3->audio_actions.num > 0;
 if (VAR_8)
  VAR_7 = VAR_3->audio_actions.array[0];

 FUNC_6(&VAR_3->audio_actions_mutex);

 if (VAR_8) {
  uint64_t VAR_10 =
   FUNC_1(VAR_6, VAR_0);

  if (VAR_7.timestamp < (VAR_3->audio_ts + VAR_10)) {
   FUNC_0(VAR_3, VAR_5, VAR_6);
   return;
  }
 }

 VAR_9 = FUNC_2(VAR_3, VAR_3->audio_ts);
 if (VAR_9 == 1.0f)
  return;

 if (VAR_9 == 0.0f || VAR_4 == 0) {
  FUNC_3(VAR_3->audio_output_buf[0][0], 0,
         VAR_0 * sizeof(float) *
          VAR_1 * VAR_2);
  return;
 }

 for (size_t VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  uint32_t VAR_12 = (1 << VAR_11);
  if ((VAR_3->audio_mixers & VAR_12) != 0 &&
      (VAR_4 & VAR_12) != 0)
   FUNC_4(VAR_3, VAR_11, VAR_5, VAR_9);
 }
}
