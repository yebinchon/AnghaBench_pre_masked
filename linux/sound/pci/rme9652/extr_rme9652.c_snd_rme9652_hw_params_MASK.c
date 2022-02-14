
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rme9652 {int control_register; int creg_spdif_stream; scalar_t__ playback_pid; scalar_t__ capture_pid; int period_bytes; int lock; } ;
struct snd_pcm_substream {TYPE_1__* pstr; } ;
struct snd_pcm_hw_params {int dummy; } ;
typedef scalar_t__ pid_t ;
struct TYPE_2__ {scalar_t__ stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_rme9652*) ;
 int FUNC_4 (struct snd_rme9652*,int) ;
 int FUNC_5 (struct snd_rme9652*,scalar_t__) ;
 int FUNC_6 (struct snd_rme9652*,int ,int) ;
 struct snd_rme9652* FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_8,
     struct snd_pcm_hw_params *VAR_9)
{
 struct snd_rme9652 *VAR_10 = FUNC_7(VAR_8);
 int VAR_11;
 pid_t VAR_12;
 pid_t VAR_13;

 FUNC_8(&VAR_10->lock);

 if (VAR_8->pstr->stream == VAR_7) {
  VAR_10->control_register &= ~(VAR_3 | VAR_1 | VAR_2);
  FUNC_6(VAR_10, VAR_4, VAR_10->control_register |= VAR_10->creg_spdif_stream);
  VAR_12 = VAR_10->playback_pid;
  VAR_13 = VAR_10->capture_pid;
 } else {
  VAR_12 = VAR_10->capture_pid;
  VAR_13 = VAR_10->playback_pid;
 }

 if ((VAR_13 > 0) && (VAR_12 != VAR_13)) {






  if ((int)FUNC_2(VAR_9) !=
      FUNC_3(VAR_10)) {
   FUNC_9(&VAR_10->lock);
   FUNC_0(VAR_9, VAR_6);
   return -VAR_0;
  }

  if (FUNC_1(VAR_9) != VAR_10->period_bytes / 4) {
   FUNC_9(&VAR_10->lock);
   FUNC_0(VAR_9, VAR_5);
   return -VAR_0;
  }



  FUNC_9(&VAR_10->lock);
   return 0;

 } else {
  FUNC_9(&VAR_10->lock);
 }




 if ((VAR_11 = FUNC_5(VAR_10, FUNC_2(VAR_9))) < 0) {
  FUNC_0(VAR_9, VAR_6);
  return VAR_11;
 }

 if ((VAR_11 = FUNC_4(VAR_10, FUNC_1(VAR_9))) < 0) {
  FUNC_0(VAR_9, VAR_5);
  return VAR_11;
 }

 return 0;
}
