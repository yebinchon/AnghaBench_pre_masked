
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcxhr {scalar_t__ audio_capture_source; int analog_capture_active; int mic_active; TYPE_1__* mgr; } ;
struct TYPE_2__ {int xlx_cfg; scalar_t__ board_has_aes1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct snd_pcxhr*,int,int ) ;

int FUNC_2(struct snd_pcxhr *VAR_9)
{
 int VAR_10 = 0;

 VAR_9->mgr->xlx_cfg &= ~(VAR_2 |
    VAR_0 |
    VAR_1);

 if (VAR_9->audio_capture_source == VAR_4) {
  VAR_9->mgr->xlx_cfg |= VAR_2;
  VAR_10 = 1;
 } else {
  if (VAR_9->audio_capture_source == VAR_5)
   VAR_10 = 1;
 }
 if (VAR_10) {
  VAR_9->mgr->xlx_cfg |= VAR_0;
  if (VAR_9->mgr->board_has_aes1) {

   VAR_9->mgr->xlx_cfg |= VAR_1;
  }


 } else {
  int VAR_11 = 0;
  VAR_9->analog_capture_active = 0;
  VAR_9->mic_active = 0;
  if (VAR_9->audio_capture_source == VAR_6 ||
      VAR_9->audio_capture_source == VAR_7) {
   if (VAR_9->analog_capture_active == 0)
    VAR_11 = 1;
   VAR_9->analog_capture_active = 1;
  }
  if (VAR_9->audio_capture_source == VAR_8 ||
      VAR_9->audio_capture_source == VAR_7) {
   if (VAR_9->mic_active == 0)
    VAR_11 = 1;
   VAR_9->mic_active = 1;
  }
  if (VAR_11) {

   FUNC_1(VAR_9, 1, 0);
  }
 }

 FUNC_0(VAR_9->mgr, VAR_3, VAR_9->mgr->xlx_cfg);
 return 0;
}
