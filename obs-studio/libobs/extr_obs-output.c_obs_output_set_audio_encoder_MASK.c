
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int flags; } ;
struct TYPE_14__ {TYPE_4__** audio_encoders; TYPE_2__ info; } ;
typedef TYPE_3__ obs_output_t ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_15__ {TYPE_1__ info; } ;
typedef TYPE_4__ obs_encoder_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char*) ;

void FUNC_4(obs_output_t *VAR_4, obs_encoder_t *VAR_5,
      size_t VAR_6)
{
 if (!FUNC_3(VAR_4, "obs_output_set_audio_encoder"))
  return;
 if (VAR_5 && VAR_5->info.type != VAR_2) {
  FUNC_0(VAR_0, "obs_output_set_audio_encoder: "
      "encoder passed is not an audio encoder");
  return;
 }

 if ((VAR_4->info.flags & VAR_3) != 0) {
  if (VAR_6 >= VAR_1) {
   return;
  }
 } else {
  if (VAR_6 > 0) {
   return;
  }
 }

 if (VAR_4->audio_encoders[VAR_6] == VAR_5)
  return;

 FUNC_2(VAR_4->audio_encoders[VAR_6], VAR_4);
 FUNC_1(VAR_5, VAR_4);
 VAR_4->audio_encoders[VAR_6] = VAR_5;
}
