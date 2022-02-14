
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {unsigned int playback_format; int force_mode16; int reg_lock; int mixer_lock; int p_period_size; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;


 struct snd_sb* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_sb*,unsigned int) ;
 int FUNC_2 (struct snd_sb*) ;
 int FUNC_3 (struct snd_sb*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_5,
        int VAR_6)
{
 unsigned long VAR_7;
 struct snd_sb *VAR_8 = FUNC_0(VAR_5);
 unsigned int VAR_9;

 FUNC_5(&VAR_8->reg_lock, VAR_7);
 switch (VAR_6) {
 case 129:
  FUNC_1(VAR_8, VAR_8->playback_format);
  if (VAR_8->playback_format == VAR_2) {
   VAR_9 = VAR_8->p_period_size - 1;
   FUNC_1(VAR_8, VAR_9 & 0xff);
   FUNC_1(VAR_8, VAR_9 >> 8);
  }
  break;
 case 128:
  if (VAR_8->playback_format == VAR_1) {
   struct snd_pcm_runtime *VAR_10 = VAR_5->runtime;
   FUNC_2(VAR_8);
   if (VAR_10->channels > 1) {
    FUNC_4(&VAR_8->mixer_lock);

    FUNC_3(VAR_8, VAR_4, VAR_8->force_mode16 & ~0x02);
    FUNC_6(&VAR_8->mixer_lock);
   }
  } else {
   FUNC_1(VAR_8, VAR_0);
  }
  FUNC_1(VAR_8, VAR_3);
 }
 FUNC_7(&VAR_8->reg_lock, VAR_7);
 return 0;
}
