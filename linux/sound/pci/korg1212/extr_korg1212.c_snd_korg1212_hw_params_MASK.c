
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pstr; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_korg1212 {size_t cardState; scalar_t__ playback_pid; scalar_t__ capture_pid; int clkRate; int lock; int periodsize; int channels; } ;
typedef scalar_t__ pid_t ;
struct TYPE_2__ {scalar_t__ stream; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_korg1212*,scalar_t__) ;
 struct snd_korg1212* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_5,
                             struct snd_pcm_hw_params *VAR_6)
{
        unsigned long VAR_7;
        struct snd_korg1212 *VAR_8 = FUNC_5(VAR_5);
        int VAR_9;
 pid_t VAR_10;
 pid_t VAR_11;

 FUNC_0("K1212_DEBUG: snd_korg1212_hw_params [%s]\n",
      VAR_4[VAR_8->cardState]);

        FUNC_6(&VAR_8->lock, VAR_7);

 if (VAR_5->pstr->stream == VAR_3) {
  VAR_10 = VAR_8->playback_pid;
  VAR_11 = VAR_8->capture_pid;
 } else {
  VAR_10 = VAR_8->capture_pid;
  VAR_11 = VAR_8->playback_pid;
 }

 if ((VAR_11 > 0) && (VAR_10 != VAR_11)) {






  if ((int)FUNC_3(VAR_6) != VAR_8->clkRate) {
   FUNC_7(&VAR_8->lock, VAR_7);
   FUNC_1(VAR_6, VAR_2);
   return -VAR_0;
  }

         FUNC_7(&VAR_8->lock, VAR_7);
         return 0;
 }

        if ((VAR_9 = FUNC_4(VAR_8, FUNC_3(VAR_6))) < 0) {
                FUNC_7(&VAR_8->lock, VAR_7);
                return VAR_9;
        }

 VAR_8->channels = FUNC_2(VAR_6);
        VAR_8->periodsize = VAR_1;

        FUNC_7(&VAR_8->lock, VAR_7);

        return 0;
}
