
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct cmipci {int spdif_playback_avail; int reg_lock; scalar_t__ spdif_playback_enabled; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cmipci*) ;
 int FUNC_1 (struct cmipci*,struct snd_pcm_substream*,int,int) ;
 int FUNC_2 (struct cmipci*,int ,int) ;
 int FUNC_3 (struct cmipci*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct cmipci *VAR_7, struct snd_pcm_substream *VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;

 VAR_11 = VAR_8->runtime->rate;

 if (VAR_9 && VAR_10)
  if ((VAR_12 = FUNC_0(VAR_7)) < 0)
   return VAR_12;

 FUNC_4(&VAR_7->reg_lock);
 VAR_7->spdif_playback_avail = VAR_9;
 if (VAR_9) {



  if (VAR_7->spdif_playback_enabled)
   FUNC_3(VAR_7, VAR_3, VAR_1);
  FUNC_1(VAR_7, VAR_8, VAR_10, VAR_11);

  if (VAR_11 == 48000 || VAR_11 == 96000)
   FUNC_3(VAR_7, VAR_4, VAR_6 | VAR_5);
  else
   FUNC_2(VAR_7, VAR_4, VAR_6 | VAR_5);
  if (VAR_11 > 48000)
   FUNC_3(VAR_7, VAR_2, VAR_0);
  else
   FUNC_2(VAR_7, VAR_2, VAR_0);
 } else {



  FUNC_2(VAR_7, VAR_2, VAR_0);
  FUNC_2(VAR_7, VAR_3, VAR_1);
  FUNC_1(VAR_7, VAR_8, 0, 0);
 }
 FUNC_5(&VAR_7->reg_lock);
 return 0;
}
