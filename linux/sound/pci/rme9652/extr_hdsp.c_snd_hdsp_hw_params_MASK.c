
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pstr; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct hdsp {int control_register; int creg_spdif_stream; scalar_t__ playback_pid; scalar_t__ capture_pid; scalar_t__ system_sample_rate; int period_bytes; int lock; int clock_source_locked; } ;
typedef scalar_t__ pid_t ;
struct TYPE_2__ {scalar_t__ stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 scalar_t__ FUNC_1 (struct hdsp*,int) ;
 scalar_t__ FUNC_2 (struct hdsp*) ;
 int FUNC_3 (struct hdsp*,int) ;
 int FUNC_4 (struct hdsp*,scalar_t__,int ) ;
 int FUNC_5 (struct hdsp*,int ,int) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_7 (struct snd_pcm_hw_params*) ;
 struct hdsp* FUNC_8 (struct snd_pcm_substream*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_9,
     struct snd_pcm_hw_params *VAR_10)
{
 struct hdsp *VAR_11 = FUNC_8(VAR_9);
 int VAR_12;
 pid_t VAR_13;
 pid_t VAR_14;

 if (FUNC_2 (VAR_11))
  return -VAR_1;

 if (FUNC_1(VAR_11, 1))
  return -VAR_1;

 FUNC_9(&VAR_11->lock);

 if (VAR_9->pstr->stream == VAR_8) {
  VAR_11->control_register &= ~(VAR_4 | VAR_3 | VAR_2);
  FUNC_5(VAR_11, VAR_5, VAR_11->control_register |= VAR_11->creg_spdif_stream);
  VAR_13 = VAR_11->playback_pid;
  VAR_14 = VAR_11->capture_pid;
 } else {
  VAR_13 = VAR_11->capture_pid;
  VAR_14 = VAR_11->playback_pid;
 }

 if ((VAR_14 > 0) && (VAR_13 != VAR_14)) {






  if (FUNC_7(VAR_10) != VAR_11->system_sample_rate) {
   FUNC_10(&VAR_11->lock);
   FUNC_0(VAR_10, VAR_7);
   return -VAR_0;
  }

  if (FUNC_6(VAR_10) != VAR_11->period_bytes / 4) {
   FUNC_10(&VAR_11->lock);
   FUNC_0(VAR_10, VAR_6);
   return -VAR_0;
  }



  FUNC_10(&VAR_11->lock);
   return 0;

 } else {
  FUNC_10(&VAR_11->lock);
 }




 FUNC_9(&VAR_11->lock);
 if (! VAR_11->clock_source_locked) {
  if ((VAR_12 = FUNC_4(VAR_11, FUNC_7(VAR_10), 0)) < 0) {
   FUNC_10(&VAR_11->lock);
   FUNC_0(VAR_10, VAR_7);
   return VAR_12;
  }
 }
 FUNC_10(&VAR_11->lock);

 if ((VAR_12 = FUNC_3(VAR_11, FUNC_6(VAR_10))) < 0) {
  FUNC_0(VAR_10, VAR_6);
  return VAR_12;
 }

 return 0;
}
