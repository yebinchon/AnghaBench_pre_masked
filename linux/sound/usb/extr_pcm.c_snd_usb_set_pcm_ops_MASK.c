
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_ops {int dummy; } ;
struct snd_pcm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm*,int,struct snd_pcm_ops const*) ;
 struct snd_pcm_ops VAR_1 ;
 struct snd_pcm_ops VAR_2 ;
 struct snd_pcm_ops VAR_3 ;
 struct snd_pcm_ops VAR_4 ;
 scalar_t__ VAR_5 ;

void FUNC_1(struct snd_pcm *VAR_6, int VAR_7)
{
 const struct snd_pcm_ops *VAR_8;

 if (VAR_5)
  VAR_8 = VAR_7 == VAR_0 ?
   &VAR_4 : &VAR_2;
 else
  VAR_8 = VAR_7 == VAR_0 ?
   &VAR_3 : &VAR_1;
 FUNC_0(VAR_6, VAR_7, VAR_8);
}
