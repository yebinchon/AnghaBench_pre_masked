
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_7__ {int timebase_num; int timebase_den; int * media; TYPE_1__ info; } ;
typedef TYPE_2__ obs_encoder_t ;
typedef int audio_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*) ;

void FUNC_4(obs_encoder_t *VAR_2, audio_t *VAR_3)
{
 if (!FUNC_3(VAR_2, "obs_encoder_set_audio"))
  return;
 if (VAR_2->info.type != VAR_1) {
  FUNC_1(VAR_0,
       "obs_encoder_set_audio: "
       "encoder '%s' is not an audio encoder",
       FUNC_2(VAR_2));
  return;
 }
 if (!VAR_3)
  return;

 VAR_2->media = VAR_3;
 VAR_2->timebase_num = 1;
 VAR_2->timebase_den = FUNC_0(VAR_3);
}
