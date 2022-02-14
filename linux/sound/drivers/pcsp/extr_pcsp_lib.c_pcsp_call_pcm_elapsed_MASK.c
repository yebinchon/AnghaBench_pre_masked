
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {struct snd_pcm_substream* playback_substream; int timer_active; } ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 if (FUNC_0(&VAR_0.timer_active)) {
  struct snd_pcm_substream *VAR_2;
  VAR_2 = VAR_0.playback_substream;
  if (VAR_2)
   FUNC_1(VAR_2);
 }
}
