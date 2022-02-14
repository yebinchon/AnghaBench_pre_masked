
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_status {scalar_t__ overrange; scalar_t__ avail_max; int delay; int avail; int hw_ptr; int appl_ptr; int tstamp; int audio_tstamp_accuracy; int audio_tstamp_data; int audio_tstamp; int driver_tstamp; int trigger_tstamp; int state; int suspended_state; } ;
struct TYPE_10__ {int valid; } ;
struct TYPE_9__ {scalar_t__ type_requested; } ;
struct TYPE_6__ {int info; } ;
struct snd_pcm_runtime {scalar_t__ tstamp_mode; scalar_t__ overrange; scalar_t__ avail_max; TYPE_3__* status; TYPE_2__* control; TYPE_5__ audio_tstamp_report; int driver_tstamp; int trigger_tstamp; TYPE_4__ audio_tstamp_config; TYPE_1__ hw; } ;
struct TYPE_8__ {int hw_ptr; int audio_tstamp; int tstamp; int suspended_state; int state; } ;
struct TYPE_7__ {int appl_ptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_runtime*,int *) ;
 int FUNC_3 (int *,int *,TYPE_5__*) ;
 scalar_t__ FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int ,TYPE_4__*) ;
 int FUNC_8 (struct snd_pcm_substream*) ;

int FUNC_9(struct snd_pcm_substream *VAR_6,
     struct snd_pcm_status *VAR_7)
{
 struct snd_pcm_runtime *VAR_8 = VAR_6->runtime;

 FUNC_5(VAR_6);

 FUNC_7(VAR_7->audio_tstamp_data,
     &VAR_8->audio_tstamp_config);


 if (VAR_8->audio_tstamp_config.type_requested ==
  VAR_0) {
  if (VAR_8->hw.info & VAR_3)
   VAR_8->audio_tstamp_config.type_requested =
    VAR_2;
  else
   VAR_8->audio_tstamp_config.type_requested =
    VAR_1;
  VAR_8->audio_tstamp_report.valid = 0;
 } else
  VAR_8->audio_tstamp_report.valid = 1;

 VAR_7->state = VAR_8->status->state;
 VAR_7->suspended_state = VAR_8->status->suspended_state;
 if (VAR_7->state == VAR_4)
  goto _end;
 VAR_7->trigger_tstamp = VAR_8->trigger_tstamp;
 if (FUNC_4(VAR_6)) {
  FUNC_8(VAR_6);
  if (VAR_8->tstamp_mode == VAR_5) {
   VAR_7->tstamp = VAR_8->status->tstamp;
   VAR_7->driver_tstamp = VAR_8->driver_tstamp;
   VAR_7->audio_tstamp =
    VAR_8->status->audio_tstamp;
   if (VAR_8->audio_tstamp_report.valid == 1)

    FUNC_3(&VAR_7->audio_tstamp_data,
        &VAR_7->audio_tstamp_accuracy,
        &VAR_8->audio_tstamp_report);

   goto _tstamp_end;
  }
 } else {

  if (VAR_8->tstamp_mode == VAR_5)
   FUNC_2(VAR_8, &VAR_7->tstamp);
 }
 _tstamp_end:
 VAR_7->appl_ptr = VAR_8->control->appl_ptr;
 VAR_7->hw_ptr = VAR_8->status->hw_ptr;
 VAR_7->avail = FUNC_0(VAR_6);
 VAR_7->delay = FUNC_4(VAR_6) ?
  FUNC_1(VAR_6) : 0;
 VAR_7->avail_max = VAR_8->avail_max;
 VAR_7->overrange = VAR_8->overrange;
 VAR_8->avail_max = 0;
 VAR_8->overrange = 0;
 _end:
  FUNC_6(VAR_6);
 return 0;
}
