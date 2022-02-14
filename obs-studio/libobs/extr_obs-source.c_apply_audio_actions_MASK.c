
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct audio_action {scalar_t__ timestamp; } ;
struct TYPE_8__ {size_t num; struct audio_action* array; } ;
struct TYPE_7__ {scalar_t__ audio_ts; int audio_mixers; int audio_actions_mutex; TYPE_4__ audio_actions; } ;
typedef TYPE_1__ obs_source_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct audio_action*) ;
 size_t FUNC_1 (size_t,scalar_t__) ;
 int FUNC_2 (TYPE_4__,int ) ;
 int FUNC_3 (float*) ;
 float FUNC_4 (TYPE_1__*,scalar_t__) ;
 float* FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,size_t,size_t,float*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(obs_source_t *VAR_2, size_t VAR_3,
    size_t VAR_4)
{
 float *VAR_5 = FUNC_5(sizeof(float) * VAR_0);
 float VAR_6 = FUNC_4(VAR_2, VAR_2->audio_ts);
 size_t VAR_7 = 0;

 FUNC_7(&VAR_2->audio_actions_mutex);

 for (size_t VAR_8 = 0; VAR_8 < VAR_2->audio_actions.num; VAR_8++) {
  struct audio_action VAR_9 = VAR_2->audio_actions.array[VAR_8];
  uint64_t VAR_10 = VAR_9.timestamp;
  size_t VAR_11;

  if (VAR_10 < VAR_2->audio_ts)
   VAR_10 = VAR_2->audio_ts;

  VAR_11 = FUNC_1(
   VAR_4, VAR_10 - VAR_2->audio_ts);

  if (VAR_11 >= VAR_0)
   break;

  FUNC_2(VAR_2->audio_actions, VAR_8--);

  FUNC_0(VAR_2, &VAR_9);

  if (VAR_11 > VAR_7) {
   for (; VAR_7 < VAR_11; VAR_7++)
    VAR_5[VAR_7] = VAR_6;
  }

  VAR_6 = FUNC_4(VAR_2, VAR_10);
 }

 for (; VAR_7 < VAR_0; VAR_7++)
  VAR_5[VAR_7] = VAR_6;

 FUNC_8(&VAR_2->audio_actions_mutex);

 for (size_t VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  if ((VAR_2->audio_mixers & (1 << VAR_12)) != 0)
   FUNC_6(VAR_2, VAR_12, VAR_3, VAR_5);
 }

 FUNC_3(VAR_5);
}
