
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {unsigned int capture_format; int reg_lock; int mixer_lock; int force_mode16; int c_period_size; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;


 struct snd_sb* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_sb*,unsigned int) ;
 int FUNC_2 (struct snd_sb*) ;
 int FUNC_3 (struct snd_sb*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_6,
       int VAR_7)
{
 unsigned long VAR_8;
 struct snd_sb *VAR_9 = FUNC_0(VAR_6);
 unsigned int VAR_10;

 FUNC_5(&VAR_9->reg_lock, VAR_8);
 switch (VAR_7) {
 case 129:
  FUNC_1(VAR_9, VAR_9->capture_format);
  if (VAR_9->capture_format == VAR_3) {
   VAR_10 = VAR_9->c_period_size - 1;
   FUNC_1(VAR_9, VAR_10 & 0xff);
   FUNC_1(VAR_9, VAR_10 >> 8);
  }
  break;
 case 128:
  if (VAR_9->capture_format == VAR_2) {
   struct snd_pcm_runtime *VAR_11 = VAR_6->runtime;
   FUNC_2(VAR_9);
   if (VAR_11->channels > 1) {

    FUNC_4(&VAR_9->mixer_lock);
    FUNC_3(VAR_9, VAR_0, VAR_9->force_mode16);
    FUNC_6(&VAR_9->mixer_lock);

    FUNC_1(VAR_9, VAR_4);
   }
  } else {
   FUNC_1(VAR_9, VAR_1);
  }
  FUNC_1(VAR_9, VAR_5);
 }
 FUNC_7(&VAR_9->reg_lock, VAR_8);
 return 0;
}
