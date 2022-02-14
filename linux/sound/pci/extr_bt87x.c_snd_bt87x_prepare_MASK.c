
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; scalar_t__ format; } ;
struct snd_bt87x {int reg_control; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct snd_bt87x*,int ,int) ;
 struct snd_bt87x* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_6)
{
 struct snd_bt87x *VAR_7 = FUNC_1(VAR_6);
 struct snd_pcm_runtime *VAR_8 = VAR_6->runtime;
 int VAR_9;

 FUNC_2(&VAR_7->reg_lock);
 VAR_7->reg_control &= ~(VAR_2 | VAR_1);
 VAR_9 = (VAR_0 + VAR_8->rate / 4) / VAR_8->rate;
 VAR_7->reg_control |= VAR_9 << VAR_3;
 if (VAR_8->format == VAR_5)
  VAR_7->reg_control |= VAR_1;
 FUNC_0(VAR_7, VAR_4, VAR_7->reg_control);
 FUNC_3(&VAR_7->reg_lock);
 return 0;
}
