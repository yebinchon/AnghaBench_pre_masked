
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_8__ {TYPE_2__** audio_encoders; TYPE_2__* video_encoder; } ;
typedef TYPE_1__ obs_output_t ;
struct TYPE_10__ {int mutex; void* ts_start; } ;
struct TYPE_9__ {TYPE_3__ pause; int paused; } ;
typedef TYPE_2__ obs_encoder_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,void*) ;
 void* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool FUNC_7(obs_output_t *VAR_1, bool VAR_2)
{
 obs_encoder_t *VAR_3;
 obs_encoder_t *VAR_4[VAR_0];
 uint64_t VAR_5;
 bool VAR_6 = 0;

 VAR_3 = VAR_1->video_encoder;
 for (size_t VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_4[VAR_7] = VAR_1->audio_encoders[VAR_7];

 FUNC_5(&VAR_3->pause.mutex);
 for (size_t VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (VAR_4[VAR_8]) {
   FUNC_5(&VAR_4[VAR_8]->pause.mutex);
  }
 }



 VAR_5 = FUNC_1(&VAR_3->pause);

 if (VAR_2) {
  if (!FUNC_3(&VAR_3->pause)) {
   goto fail;
  }
  for (size_t VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   if (VAR_4[VAR_9] && !FUNC_3(&VAR_4[VAR_9]->pause)) {
    goto fail;
   }
  }

  FUNC_2(&VAR_3->paused, 1);
  VAR_3->pause.ts_start = VAR_5;

  for (size_t VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   if (VAR_4[VAR_10]) {
    FUNC_2(&VAR_4[VAR_10]->paused, 1);
    VAR_4[VAR_10]->pause.ts_start = VAR_5;
   }
  }
 } else {
  if (!FUNC_4(&VAR_3->pause)) {
   goto fail;
  }
  for (size_t VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
   if (VAR_4[VAR_11] && !FUNC_4(&VAR_4[VAR_11]->pause)) {
    goto fail;
   }
  }

  FUNC_2(&VAR_3->paused, 0);
  FUNC_0(&VAR_3->pause, VAR_5);

  for (size_t VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
   if (VAR_4[VAR_12]) {
    FUNC_2(&VAR_4[VAR_12]->paused, 0);
    FUNC_0(&VAR_4[VAR_12]->pause, VAR_5);
   }
  }
 }



 VAR_6 = 1;

fail:
 for (size_t VAR_13 = VAR_0; VAR_13 > 0; VAR_13--) {
  if (VAR_4[VAR_13 - 1]) {
   FUNC_6(&VAR_4[VAR_13 - 1]->pause.mutex);
  }
 }
 FUNC_6(&VAR_3->pause.mutex);

 return VAR_6;
}
